0xA11ED0: push    offset stru_B44F90; parent
0xA11ED5: push    offset aSpeedtreebra_0; "SpeedTreeBranchShader"
0xA11EDA: mov     ecx, offset stru_B47800; this
0xA11EDF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11EE4: retn
