0x6934C0: push    0FFFFFFFFh
0x6934C2: push    offset SEH_8C8970
0x6934C7: mov     eax, large fs:0
0x6934CD: push    eax
0x6934CE: push    ecx
0x6934CF: push    esi
0x6934D0: push    edi
0x6934D1: mov     eax, ds:0B30AACh
0x6934D6: xor     eax, esp
0x6934D8: push    eax
0x6934D9: lea     eax, [esp+1Ch+var_C]
0x6934DD: mov     large fs:0, eax
0x6934E3: mov     edi, ecx
0x6934E5: push    3Ch ; '<'; Size
0x6934E7: call    FormHeapAlloc
0x6934EC: mov     esi, eax
0x6934EE: add     esp, 4
0x6934F1: mov     [esp+1Ch+var_10], esi
0x6934F5: test    esi, esi
0x6934F7: mov     [esp+1Ch+var_4], 0
0x6934FF: jz      short loc_693523
0x693501: mov     eax, [edi+0Ch]
0x693504: mov     ecx, [edi+8]
0x693507: mov     edx, [edi+24h]
0x69350A: push    eax
0x69350B: push    ecx
0x69350C: push    edx
0x69350D: mov     ecx, esi; this
0x69350F: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x693514: mov     dword ptr [esi], offset ??_7DisintegrateArmorEffect@@6B@; const DisintegrateArmorEffect::`vftable'
0x69351A: mov     dword ptr [esi+38h], 0
0x693521: jmp     short loc_693525
0x693523: xor     esi, esi
0x693525: push    esi
0x693526: mov     ecx, edi
0x693528: mov     [esp+20h+var_4], 0FFFFFFFFh
0x693530: call    ActiveEffect_Base_CopyTo
0x693535: mov     eax, esi
0x693537: mov     ecx, [esp+1Ch+var_C]
0x69353B: mov     large fs:0, ecx
0x693542: pop     ecx
0x693543: pop     edi
0x693544: pop     esi
0x693545: add     esp, 10h
0x693548: retn
