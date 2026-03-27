0x761920: sub     esp, 8
0x761923: push    ebx
0x761924: push    esi
0x761925: push    64h ; 'd'; Size
0x761927: call    FormHeapAlloc
0x76192C: mov     ebx, [esp+14h+a2]
0x761930: mov     esi, eax
0x761932: add     esp, 4
0x761935: test    esi, esi
0x761937: jz      short loc_761955
0x761939: mov     eax, [esp+10h+a3]
0x76193D: push    eax; a3
0x76193E: push    ebx; a2
0x76193F: mov     ecx, esi; this
0x761941: call    NiDX9TextureData__NiDX9TextureData
0x761946: mov     dword ptr [esi], offset ??_7NiDX9RenderedTextureData@@6B@; const NiDX9RenderedTextureData::`vftable'
0x76194C: mov     dword ptr [esi+60h], 0
0x761953: jmp     short loc_761957
0x761955: xor     esi, esi
0x761957: push    ebx
0x761958: mov     ecx, esi
0x76195A: call    sub_761730
0x76195F: test    eax, eax
0x761961: jnz     short loc_761979
0x761963: test    esi, esi
0x761965: jz      short loc_761971
0x761967: mov     edx, [esi]
0x761969: mov     eax, [edx]
0x76196B: push    1
0x76196D: mov     ecx, esi
0x76196F: call    eax
0x761971: pop     esi
0x761972: xor     eax, eax
0x761974: pop     ebx
0x761975: add     esp, 8
0x761978: retn
0x761979: mov     ecx, [esi+4]
0x76197C: mov     [ecx+24h], esi
0x76197F: mov     edx, [esi]
0x761981: mov     eax, [edx+14h]
0x761984: push    edi
0x761985: mov     ecx, esi
0x761987: call    eax
0x761989: mov     edx, [ebx]
0x76198B: mov     edi, eax
0x76198D: mov     eax, [edx+54h]
0x761990: mov     ecx, ebx
0x761992: call    eax
0x761994: lea     edx, [esp+10h+var_4]
0x761998: push    edx
0x761999: mov     [esp+14h], eax
0x76199D: mov     [esp+14h+var_4], 0
0x7619A5: mov     ecx, [edi]
0x7619A7: mov     eax, [ecx]
0x7619A9: push    offset unk_AB27E8
0x7619AE: push    edi
0x7619AF: call    eax
0x7619B1: test    eax, eax
0x7619B3: jge     short loc_7619DC
0x7619B5: push    eax
0x7619B6: call    sub_7736F0
0x7619BB: push    eax
0x7619BC: push    offset aNidx9render_29; "NiDX9RenderedTextureData::Create> Faile"...
0x7619C1: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7619C6: mov     edx, [esi]
0x7619C8: mov     eax, [edx]
0x7619CA: add     esp, 0Ch
0x7619CD: push    1
0x7619CF: mov     ecx, esi
0x7619D1: call    eax
0x7619D3: pop     edi
0x7619D4: pop     esi
0x7619D5: xor     eax, eax
0x7619D7: pop     ebx
0x7619D8: add     esp, 8
0x7619DB: retn
0x7619DC: mov     edx, [esp+10h+var_4]
0x7619E0: lea     ecx, [esp+10h]
0x7619E4: push    ecx
0x7619E5: push    edx
0x7619E6: call    sub_76D8C0
0x7619EB: mov     edi, eax
0x7619ED: mov     eax, [esp+18h+var_4]
0x7619F1: mov     ecx, [eax]
0x7619F3: mov     edx, [ecx+8]
0x7619F6: add     esp, 8
0x7619F9: push    eax
0x7619FA: call    edx
0x7619FC: test    edi, edi
0x7619FE: jnz     short loc_761A25
0x761A00: push    offset EmptyString
0x761A05: push    offset aNidx9render_28; "NiDX9RenderedTextureData::Create> Faile"...
0x761A0A: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x761A0F: mov     eax, [esi]
0x761A11: mov     edx, [eax]
0x761A13: add     esp, 8
0x761A16: push    1
0x761A18: mov     ecx, esi
0x761A1A: call    edx
0x761A1C: pop     edi
0x761A1D: pop     esi
0x761A1E: xor     eax, eax
0x761A20: pop     ebx
0x761A21: add     esp, 8
0x761A24: retn
0x761A25: pop     edi
0x761A26: mov     eax, esi
0x761A28: pop     esi
0x761A29: pop     ebx
0x761A2A: add     esp, 8
0x761A2D: retn
