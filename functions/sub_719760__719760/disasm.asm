0x719760: sub     esp, 0Ch
0x719763: push    esi
0x719764: mov     esi, ecx
0x719766: call    ??0NiLight@@QAE@XZ; NiLight::NiLight(void)
0x71976B: fld1
0x71976D: fstp    [esp+10h+var_C]
0x719771: mov     dword ptr [esi], offset ??_7NiDirectionalLight@@6B@; const NiDirectionalLight::`vftable'
0x719777: fldz
0x719779: mov     eax, [esp+10h+var_C]
0x71977D: fst     [esp+10h+var_8]
0x719781: mov     [esi+108h], eax
0x719787: fstp    [esp+10h+var_4]
0x71978B: mov     eax, esi
0x71978D: mov     ecx, [esp+10h+var_8]
0x719791: mov     edx, [esp+10h+var_4]
0x719795: mov     [esi+10Ch], ecx
0x71979B: mov     [esi+110h], edx
0x7197A1: pop     esi
0x7197A2: add     esp, 0Ch
0x7197A5: retn
