0xA0F6A0: push    offset stru_B40D08; parent
0xA0F6A5: push    offset aNipsysagedeath; "NiPSysAgeDeathModifier"
0xA0F6AA: mov     ecx, offset stru_B41A58; this
0xA0F6AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0F6B4: retn
