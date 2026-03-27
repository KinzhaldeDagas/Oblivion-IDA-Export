0x73AB30: push    0FFFFFFFFh
0x73AB32: push    offset ??1NiScreenGeometryData@@UAE@XZ_SEH
0x73AB37: mov     eax, large fs:0
0x73AB3D: push    eax
0x73AB3E: sub     esp, 8
0x73AB41: push    ebx
0x73AB42: push    esi
0x73AB43: push    edi
0x73AB44: mov     eax, ds:0B30AACh
0x73AB49: xor     eax, esp
0x73AB4B: push    eax
0x73AB4C: lea     eax, [esp+24h+var_C]
0x73AB50: mov     large fs:0, eax
0x73AB56: mov     esi, ecx
0x73AB58: mov     [esp+24h+var_10], esi
0x73AB5C: mov     dword ptr [esi], offset ??_7NiScreenGeometryData@@6B@; const NiScreenGeometryData::`vftable'
0x73AB62: xor     edi, edi
0x73AB64: cmp     [esi+6Ah], di
0x73AB68: mov     [esp+24h+var_4], 1
0x73AB70: jbe     short loc_73ABE0
0x73AB72: movzx   ecx, word ptr [esi+6Ah]
0x73AB76: cmp     edi, ecx
0x73AB78: mov     eax, [esi+64h]
0x73AB7B: mov     ebx, [eax+edi*4]
0x73AB7E: jb      short loc_73AB89
0x73AB80: lea     edx, [edi+1]
0x73AB83: mov     [esi+6Ah], dx
0x73AB87: jmp     short loc_73AB95
0x73AB89: cmp     dword ptr [eax+edi*4], 0
0x73AB8D: jz      short loc_73AB95
0x73AB8F: add     word ptr [esi+6Ch], 0FFFFh
0x73AB95: test    ebx, ebx
0x73AB97: mov     ecx, [esi+64h]
0x73AB9A: mov     dword ptr [ecx+edi*4], 0
0x73ABA1: jz      short loc_73ABD5
0x73ABA3: mov     eax, [ebx+8]
0x73ABA6: push    eax
0x73ABA7: call    FormHeapFree
0x73ABAC: mov     eax, [ebx+0Ch]
0x73ABAF: push    eax
0x73ABB0: call    FormHeapFree
0x73ABB5: mov     eax, [ebx+10h]
0x73ABB8: push    eax
0x73ABB9: call    FormHeapFree
0x73ABBE: mov     ecx, ds:0B40134h; this
0x73ABC4: add     esp, 0Ch
0x73ABC7: lea     edx, [esp+24h+a2]
0x73ABCB: push    edx; a2
0x73ABCC: mov     [esp+28h+a2], ebx
0x73ABD0: call    sub_73A5E0
0x73ABD5: movzx   eax, word ptr [esi+6Ah]
0x73ABD9: add     edi, 1
0x73ABDC: cmp     edi, eax
0x73ABDE: jb      short loc_73AB72
0x73ABE0: lea     edi, [esi+60h]
0x73ABE3: push    0
0x73ABE5: mov     ecx, edi
0x73ABE7: call    NiTArray_SetSize
0x73ABEC: mov     dword ptr [edi], offset ??_7?$NiTArray@PAVScreenElement@NiScreenGeometryData@@@@6B@; const NiTArray<NiScreenGeometryData::ScreenElement *>::`vftable'
0x73ABF2: mov     edi, [edi+4]
0x73ABF5: push    edi
0x73ABF6: call    FormHeapFree
0x73ABFB: add     esp, 4
0x73ABFE: mov     ecx, esi; this
0x73AC00: mov     [esp+24h+var_4], 0FFFFFFFFh
0x73AC08: call    ??1NiTriShapeDynamicData@@UAE@XZ; NiTriShapeDynamicData::~NiTriShapeDynamicData(void)
0x73AC0D: mov     ecx, [esp+24h+var_C]
0x73AC11: mov     large fs:0, ecx
0x73AC18: pop     ecx
0x73AC19: pop     edi
0x73AC1A: pop     esi
0x73AC1B: pop     ebx
0x73AC1C: add     esp, 14h
0x73AC1F: retn
