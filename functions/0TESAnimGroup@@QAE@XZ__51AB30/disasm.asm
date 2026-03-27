0x51AB30: push    0FFFFFFFFh
0x51AB32: push    offset ??1NiScreenPolygon@@UAE@XZ_SEH
0x51AB37: mov     eax, large fs:0
0x51AB3D: push    eax
0x51AB3E: push    ecx
0x51AB3F: push    ebx
0x51AB40: push    esi
0x51AB41: mov     eax, ds:0B30AACh
0x51AB46: xor     eax, esp
0x51AB48: push    eax
0x51AB49: lea     eax, [esp+1Ch+var_C]
0x51AB4D: mov     large fs:0, eax
0x51AB53: mov     esi, ecx
0x51AB55: mov     [esp+1Ch+var_10], esi
0x51AB59: xor     ebx, ebx
0x51AB5B: push    offset NiRefObject_objcount; lpAddend
0x51AB60: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x51AB66: mov     [esi+4], ebx
0x51AB69: call    dword ptr ds:0A28078h
0x51AB6F: mov     dword ptr [esi], offset ??_7TESAnimGroup@@6B@; const TESAnimGroup::`vftable'
0x51AB75: mov     [esi+10h], ebx
0x51AB78: mov     [esi+20h], bl
0x51AB7B: mov     [esi+21h], bl
0x51AB7E: mov     eax, ds:0B3F9A8h
0x51AB83: mov     [esi+14h], eax
0x51AB86: mov     ecx, ds:0B3F9ACh
0x51AB8C: mov     eax, [esp+1Ch+arg_0]
0x51AB90: mov     [esi+18h], ecx
0x51AB93: mov     edx, ds:0B3F9B0h
0x51AB99: push    eax
0x51AB9A: mov     ecx, esi
0x51AB9C: mov     [esp+20h+var_4], ebx
0x51ABA0: mov     [esi+1Ch], edx
0x51ABA3: call    sub_51AA10
0x51ABA8: mov     [esi+28h], ebx
0x51ABAB: mov     [esi+24h], ebx
0x51ABAE: mov     eax, esi
0x51ABB0: mov     ecx, [esp+1Ch+var_C]
0x51ABB4: mov     large fs:0, ecx
0x51ABBB: pop     ecx
0x51ABBC: pop     esi
0x51ABBD: pop     ebx
0x51ABBE: add     esp, 10h
0x51ABC1: retn    4
