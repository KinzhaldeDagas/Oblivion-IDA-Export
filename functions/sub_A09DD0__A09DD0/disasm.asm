0xA09DD0: push    offset stru_B3FF3C; parent
0xA09DD5: push    offset aNidefaultavobj; "NiDefaultAVObjectPalette"
0xA09DDA: mov     ecx, offset stru_B3FCB8; this
0xA09DDF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09DE4: retn
