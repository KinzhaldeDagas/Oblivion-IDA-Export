0x760C60: push    esi
0x760C61: mov     esi, ecx
0x760C63: mov     eax, [esi+60h]
0x760C66: mov     dword ptr [esi], offset ??_7NiDX9SourceTextureData@@6B@; const NiDX9SourceTextureData::`vftable'
0x760C6C: sub     ds:0B42054h, eax
0x760C72: mov     ecx, [esi+60h]
0x760C75: mov     eax, ecx
0x760C77: and     eax, 0FFFFF000h
0x760C7C: xor     edx, edx
0x760C7E: cmp     eax, ecx
0x760C80: push    edi
0x760C81: jz      short loc_760C8C
0x760C83: sub     eax, ecx
0x760C85: add     eax, 1000h
0x760C8A: mov     edx, eax
0x760C8C: sub     ds:0B42058h, edx
0x760C92: mov     edi, [esi+6Ch]
0x760C95: test    edi, edi
0x760C97: jz      short loc_760CB5
0x760C99: lea     ecx, [edi+4]
0x760C9C: push    ecx; lpAddend
0x760C9D: call    dword ptr ds:0A2807Ch
0x760CA3: test    eax, eax
0x760CA5: jnz     short loc_760CB5
0x760CA7: test    edi, edi
0x760CA9: jz      short loc_760CB5
0x760CAB: mov     edx, [edi]
0x760CAD: mov     eax, [edx]
0x760CAF: push    1
0x760CB1: mov     ecx, edi
0x760CB3: call    eax
0x760CB5: pop     edi
0x760CB6: mov     ecx, esi; this
0x760CB8: pop     esi
0x760CB9: jmp     NiDX9TextureData__Release
