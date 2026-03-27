0x9A9900: push    ecx
0x9A9901: push    ebx
0x9A9902: push    ebp
0x9A9903: push    esi
0x9A9904: push    edi
0x9A9905: mov     edi, ecx
0x9A9907: xor     ebp, ebp
0x9A9909: cmp     [edi+14h], bp
0x9A990D: mov     dword ptr [edi], offset ??_7NiD3DShaderConstantMap@@6B@; const NiD3DShaderConstantMap::`vftable'
0x9A9913: jbe     short loc_9A9966
0x9A9915: mov     eax, [edi+10h]
0x9A9918: mov     esi, [eax+ebp*4]
0x9A991B: test    esi, esi
0x9A991D: jz      short loc_9A995B
0x9A991F: lea     ebx, [esi+4]
0x9A9922: push    ebx; lpAddend
0x9A9923: call    ds:InterlockedIncrement
0x9A9929: mov     ecx, [esi+14h]
0x9A992C: and     ecx, 0F0000000h
0x9A9932: cmp     ecx, 40000000h
0x9A9938: jnz     short loc_9A9946
0x9A993A: mov     edx, [esi+0Ch]
0x9A993D: push    edx
0x9A993E: call    sub_77CB50
0x9A9943: add     esp, 4
0x9A9946: push    ebx; lpAddend
0x9A9947: call    ds:InterlockedDecrement
0x9A994D: test    eax, eax
0x9A994F: jnz     short loc_9A995B
0x9A9951: mov     eax, [esi]
0x9A9953: mov     edx, [eax]
0x9A9955: push    1
0x9A9957: mov     ecx, esi
0x9A9959: call    edx
0x9A995B: movzx   eax, word ptr [edi+14h]
0x9A995F: add     ebp, 1
0x9A9962: cmp     ebp, eax
0x9A9964: jb      short loc_9A9915
0x9A9966: lea     esi, [edi+0Ch]
0x9A9969: mov     ecx, esi
0x9A996B: call    sub_9A4310
0x9A9970: mov     eax, [edi+28h]
0x9A9973: xor     ebx, ebx
0x9A9975: cmp     eax, ebx
0x9A9977: mov     [edi+2Ch], ebx
0x9A997A: jz      short loc_9A9984
0x9A997C: mov     ecx, [eax]
0x9A997E: mov     edx, [ecx+8]
0x9A9981: push    eax
0x9A9982: call    edx
0x9A9984: mov     [edi+28h], ebx
0x9A9987: mov     [edi+30h], ebx
0x9A998A: mov     eax, [esi+4]
0x9A998D: cmp     eax, ebx
0x9A998F: mov     dword ptr [esi], offset ??_7?$NiTArray@V?$NiPointer@VNiD3DShaderConstantMapEntry@@@@@@6B@; const NiTArray<NiPointer<NiD3DShaderConstantMapEntry>>::`vftable'
0x9A9995: jz      short loc_9A99E8
0x9A9997: mov     ebp, [eax-4]
0x9A999A: lea     ecx, [eax-4]
0x9A999D: lea     ebx, [eax+ebp*4]
0x9A99A0: sub     ebp, 1
0x9A99A3: mov     [esp+14h+var_4], ecx
0x9A99A7: js      short loc_9A99DF
0x9A99A9: lea     esp, [esp+0]
0x9A99B0: mov     esi, [ebx-4]
0x9A99B3: sub     ebx, 4
0x9A99B6: test    esi, esi
0x9A99B8: jz      short loc_9A99D6
0x9A99BA: lea     eax, [esi+4]
0x9A99BD: push    eax; lpAddend
0x9A99BE: call    ds:InterlockedDecrement
0x9A99C4: test    eax, eax
0x9A99C6: jnz     short loc_9A99D6
0x9A99C8: test    esi, esi
0x9A99CA: jz      short loc_9A99D6
0x9A99CC: mov     edx, [esi]
0x9A99CE: mov     eax, [edx]
0x9A99D0: push    1
0x9A99D2: mov     ecx, esi
0x9A99D4: call    eax
0x9A99D6: sub     ebp, 1
0x9A99D9: jns     short loc_9A99B0
0x9A99DB: mov     ecx, [esp+14h+var_4]
0x9A99DF: push    ecx
0x9A99E0: call    FormHeapFree
0x9A99E5: add     esp, 4
0x9A99E8: push    offset NiRefObject_objcount; lpAddend
0x9A99ED: mov     dword ptr [edi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x9A99F3: call    ds:InterlockedDecrement
0x9A99F9: pop     edi
0x9A99FA: pop     esi
0x9A99FB: pop     ebp
0x9A99FC: pop     ebx
0x9A99FD: pop     ecx
0x9A99FE: retn
