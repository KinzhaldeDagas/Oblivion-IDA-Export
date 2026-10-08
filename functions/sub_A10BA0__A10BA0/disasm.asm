0xA10BA0: push    offset stru_B40124; parent
0xA10BA5: push    offset aNid3dshaderint; "NiD3DShaderInterface"
0xA10BAA: mov     ecx, 0B42858h; this
0xA10BAF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10BB4: retn
