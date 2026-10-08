0xA059A0: push    offset stru_B3FC98; parent
0xA059A5: push    offset aNilookatcontro; "NiLookAtController"
0xA059AA: mov     ecx, offset stru_B3DF34; this
0xA059AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA059B4: retn
