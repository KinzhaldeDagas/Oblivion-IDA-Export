0xA0F380: push    offset stru_B40D08; parent
0xA0F385: push    offset aNipsysboundupd; "NiPSysBoundUpdateModifier"
0xA0F38A: mov     ecx, offset stru_B419AC; this
0xA0F38F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0F394: retn
