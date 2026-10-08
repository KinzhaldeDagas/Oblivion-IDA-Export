0xA0CE00: push    offset stru_B41F2C; parent
0xA0CE05: push    offset aNipsysmodifier; "NiPSysModifierActiveCtlr"
0xA0CE0A: mov     ecx, offset stru_B410AC; this
0xA0CE0F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0CE14: retn
