0xA0EBB0: push    offset stru_B40D08; parent
0xA0EBB5: push    offset aNipsysdragmodi; "NiPSysDragModifier"
0xA0EBBA: mov     ecx, offset stru_B417C4; this
0xA0EBBF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0EBC4: retn
