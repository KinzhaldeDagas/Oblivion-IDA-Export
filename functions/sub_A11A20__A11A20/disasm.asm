0xA11A20: push    0B4257Ch; parent
0xA11A25: push    offset aSpeedtreeleafs; "SpeedTreeLeafShader"
0xA11A2A: mov     ecx, (offset flt_B46638+160h); this
0xA11A2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11A34: retn
