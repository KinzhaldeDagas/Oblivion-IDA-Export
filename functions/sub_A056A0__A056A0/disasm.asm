0xA056A0: push    offset stru_B3EEFC; parent
0xA056A5: push    offset aNimaterialcolo; "NiMaterialColorController"
0xA056AA: mov     ecx, offset stru_B3DE94; this
0xA056AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA056B4: retn
