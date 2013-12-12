
# PlanAhead Launch Script for Post PAR Floorplanning, created by Project Navigator

create_project -name PhotonCounter -dir "F:/VIs/VV_Photonpy/MultiChannelBalancedCorrelatorGitHub_10_03_2013/planAhead_run_1" -part xc6slx16ftg256-2
set srcset [get_property srcset [current_run -impl]]
set_property design_mode GateLvl $srcset
set_property edif_top_file "F:/VIs/VV_Photonpy/MultiChannelBalancedCorrelatorGitHub_10_03_2013/PhotonCounter.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {F:/VIs/VV_Photonpy/MultiChannelBalancedCorrelatorGitHub_10_03_2013} {E:/Program Files/Opal Kelly/FrontPanelNEW/FrontPanelUSB/FrontPanelHDL/XEM6001} {ipcore_dir} {../XEM6001} }
set_property target_constrs_file "photonconnections.ucf" [current_fileset -constrset]
add_files [list {photonconnections.ucf}] -fileset [get_property constrset [current_run]]
link_design
read_xdl -file "F:/VIs/VV_Photonpy/MultiChannelBalancedCorrelatorGitHub_10_03_2013/PhotonCounter.ncd"
if {[catch {read_twx -name results_1 -file "F:/VIs/VV_Photonpy/MultiChannelBalancedCorrelatorGitHub_10_03_2013/PhotonCounter.twx"} eInfo]} {
   puts "WARNING: there was a problem importing \"F:/VIs/VV_Photonpy/MultiChannelBalancedCorrelatorGitHub_10_03_2013/PhotonCounter.twx\": $eInfo"
}
