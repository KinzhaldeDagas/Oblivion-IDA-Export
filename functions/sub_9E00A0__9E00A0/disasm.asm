0x9E00A0: push    offset parent; parent
0x9E00A5: push    offset aBsfadenode; "BSFadeNode"
0x9E00AA: mov     ecx, 0B35288h; this
0x9E00AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9E00B4: retn
