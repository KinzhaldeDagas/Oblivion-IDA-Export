0xA0C4A0: push    offset stru_B41E68; parent
0xA0C4A5: push    offset aNipsysturbulen; "NiPSysTurbulenceFieldModifier"
0xA0C4AA: mov     ecx, offset stru_B40E5C; this
0xA0C4AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0C4B4: retn
