0xA053A0: push    offset stru_B3FC98; parent
0xA053A5: push    offset aNipathcontroll; "NiPathController"
0xA053AA: mov     ecx, offset stru_B3DDC0; this
0xA053AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA053B4: retn
