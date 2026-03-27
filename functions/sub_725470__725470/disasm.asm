0x725470: push    0FFFFFFFFh
0x725472: push    offset SEH_8C62B0
0x725477: mov     eax, large fs:0
0x72547D: push    eax
0x72547E: push    ecx
0x72547F: push    esi
0x725480: mov     eax, ds:0B30AACh
0x725485: xor     eax, esp
0x725487: push    eax
0x725488: lea     eax, [esp+18h+var_C]
0x72548C: mov     large fs:0, eax
0x725492: push    114h; Size
0x725497: call    FormHeapAlloc
0x72549C: mov     esi, eax
0x72549E: add     esp, 4
0x7254A1: mov     [esp+18h+var_10], esi
0x7254A5: xor     eax, eax
0x7254A7: cmp     esi, eax
0x7254A9: mov     [esp+18h+var_4], eax
0x7254AD: jz      short loc_7254D4
0x7254AF: mov     ecx, esi; this
0x7254B1: call    ??0NiLight@@QAE@XZ; NiLight::NiLight(void)
0x7254B6: fldz
0x7254B8: fst     dword ptr [esi+108h]
0x7254BE: mov     dword ptr [esi], offset ??_7NiPointLight@@6B@; const NiPointLight::`vftable'
0x7254C4: fld1
0x7254C6: mov     eax, esi
0x7254C8: fstp    dword ptr [esi+10Ch]
0x7254CE: fstp    dword ptr [esi+110h]
0x7254D4: mov     ecx, [esp+18h+var_C]
0x7254D8: mov     large fs:0, ecx
0x7254DF: pop     ecx
0x7254E0: pop     esi
0x7254E1: add     esp, 10h
0x7254E4: retn
