0xA10350: push    offset stru_B40D08; parent
0xA10355: push    offset aNipsysfieldmod; "NiPSysFieldModifier"
0xA1035A: mov     ecx, offset stru_B41E68; this
0xA1035F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10364: retn
