'!TITLE "Setup Wizard Header File"

#Include "..\RV_API\RV_API.pcs"
#Include ".\Functions\PublicFunctions.pcs"

'Used by:
' - PickPointReg.pcs
' - RV_Grasp_Main.pns
#Include "..\Registration\RV_PoseWork.pcs"

'Used by:
' - StartCalib.pcs
' #Include "..\Registration\RV_ReadyCalib.pcs"
' #Include "..\Registration\RV_CalibMarker.pcs"

'Used by:
' - StartGraspReg.pcs
' - RV_Grasp_Main.pns
' #Include "..\Registration\RV_CatchPoint.pcs"

'Used by:
' - RV_Pallet_Cal.pns
#Include "..\Registration\RV_InputRim.pcs"

'Used by:
' - RuntimeTest.pcs
#Define PTP_FIG -3
#Define CP_FIG	-1

'Used by:
' - Sub Panels
#Define GREEN					&h00FF00
#Define YELLOW					&h00FFFF
#Define RED						&h0000FF
#Define GRAY					&hC0C0C0

#Define PBSTART_CAPTION	10		'String Index
#Define LBSTATUS_CAPTION 11		'String Index
#Define LBPART_FOUND_COORD 12	'String Index
#Define LBPICK_COORD 13			'String Index

#Define PLCAL_STATE		10		'Integer Index
#Define PLSCENE_SET		11		'Integer Index
#Define PLPOINT_MATRIX	12		'Integer Index
#Define NBCURRENT_SCENE	13		'Integer Index
#Define PLSCENE_DATA	14		'Integer Index
#Define PLROBOT_MOTION	15		'Integer Index 
#Define PLPART_FOUND	16		'Integer Index
#Define NBTASK_ID		17		'Integer Index
#Define NBGRASP_ID		18		'Integer Index
#Define PLAPP_OK		19		'Integer Index

#Define PART_COORD_POS	50		'Position Index
#Define PICK_COORD_POS	51		'Position Index
#Define PICK_APP_POS	52		'Position Index
