0x6C3690: mov     eax, [esp+arg_0]; Oblivion NiTransformController equality wrapper around generic single-interpolator controller equality, which includes the smart interpolator at +0x3C.
0x6C3694: push    eax
0x6C3695: call    NiSingleInterpController_IsEqual; Equality requires equal NiTimeController base state and null-symmetric interpolator state; two non-null interpolators compare through their virtual IsEqual slot (+0x2C).
0x6C369A: test    al, al
0x6C369C: setnz   al
0x6C369F: retn    4
