0x9E0170: push    offset stru_B3FCD4; parent
0x9E0175: push    offset aBsscissortrish; "BSScissorTriShape"
0x9E017A: mov     ecx, 0B352A4h; this
0x9E017F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9E0184: retn
