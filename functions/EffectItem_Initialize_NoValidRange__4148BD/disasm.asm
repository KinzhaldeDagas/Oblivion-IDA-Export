0x4148BD: push    offset aEffectidDoesNo; "EffectID does not allow any Range setti"...
0x4148C2: fstp    st
0x4148C4: lea     ecx, [esp+4+arg_8]
0x4148C8: call    sub_414750
0x4148CD: lea     eax, [esp+arg_8]
0x4148D1: push    eax
0x4148D2: lea     ecx, [esp+4+arg_24]
0x4148D6: mov     [esp+4+arg_54], ebx
0x4148DA: call    sub_4146E0
0x4148DF: push    offset __TI3?AVinvalid_argument@std@@; throw info for 'class std::invalid_argument'
0x4148E4: lea     ecx, [esp+4+arg_24]
0x4148E8: push    ecx
0x4148E9: mov     [esp+8+arg_24], offset ??_7invalid_argument@std@@6B@; const std::invalid_argument::`vftable'
0x4148F1: call    ThrowException??
