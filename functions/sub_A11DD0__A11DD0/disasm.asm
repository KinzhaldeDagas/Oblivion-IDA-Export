0xA11DD0: push    0B4257Ch; parent
0xA11DD5: push    offset aGeometrydecals; "GeometryDecalShader"
0xA11DDA: mov     ecx, offset stru_B475FC; this
0xA11DDF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11DE4: retn
