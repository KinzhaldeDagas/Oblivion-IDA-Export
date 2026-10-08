0xA0A480: push    0; parent
0xA0A482: push    offset aNishader; "NiShader"
0xA0A487: mov     ecx, offset stru_B40124; this
0xA0A48C: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A491: retn
