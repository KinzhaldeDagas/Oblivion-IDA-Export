0xA098C0: push    offset stru_B40D60; parent
0xA098C5: push    offset aBspsysarrayemi; "BSPSysArrayEmitter"
0xA098CA: mov     ecx, offset stru_B3F54C; this
0xA098CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA098D4: retn
