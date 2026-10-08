0xA11B00: push    offset NiRTTI_SpeedTreeShaderPPLightingProperty; Construct exact Branch property RTTI using native Oblivion name and PP-lighting parent.
0xA11B05: push    offset aSpeedtreebranc; "SpeedTreeBranchShaderProperty"
0xA11B0A: mov     ecx, offset NiRTTI_SpeedTreeBranchShaderProperty; this
0xA11B0F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11B14: retn
