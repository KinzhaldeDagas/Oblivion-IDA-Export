0x77A310: mov     edx, [esp+arg_0]
0x77A314: test    edx, edx
0x77A316: push    ebx
0x77A317: push    esi
0x77A318: push    edi
0x77A319: mov     ebx, ecx
0x77A31B: jz      short loc_77A37A
0x77A31D: cmp     dword ptr [ebx+34h], 0
0x77A321: mov     ecx, [esp+0Ch+a5]
0x77A325: jz      short loc_77A33F
0x77A327: mov     eax, [edx+0B4h]
0x77A32D: mov     ax, [eax+2Eh]
0x77A331: and     ax, 0F000h
0x77A335: cmp     ax, 8000h
0x77A339: jnz     short loc_77A37A
0x77A33B: test    ecx, ecx
0x77A33D: jz      short loc_77A37A
0x77A33F: test    ecx, ecx
0x77A341: mov     eax, [edx+0B4h]
0x77A347: mov     edx, [edx+0B8h]
0x77A34D: push    0; a7
0x77A34F: jz      short loc_77A366
0x77A351: mov     esi, [ebx+24h]
0x77A354: mov     edi, [ecx+28h]
0x77A357: push    esi; a6
0x77A358: push    ecx; a5
0x77A359: mov     ecx, [ebx+14h]; this
0x77A35C: push    edx; a4
0x77A35D: push    eax; a3
0x77A35E: push    edi; a2
0x77A35F: call    NiDX9Renderer__PackSkinnedGeometryBuffer
0x77A364: jmp     short loc_77A37E
0x77A366: mov     ecx, [ebx+24h]
0x77A369: mov     edi, [eax+38h]
0x77A36C: push    ecx
0x77A36D: mov     ecx, [ebx+14h]
0x77A370: push    edx
0x77A371: push    eax
0x77A372: push    edi
0x77A373: call    NiDX9Renderer__PackGeometryBuffers
0x77A378: jmp     short loc_77A37E
0x77A37A: mov     edi, [esp+0Ch+arg_8]
0x77A37E: test    edi, edi
0x77A380: jz      short loc_77A3DB
0x77A382: mov     eax, [edi+1Ch]
0x77A385: xor     esi, esi
0x77A387: test    eax, eax
0x77A389: jbe     short loc_77A3C9
0x77A38B: cmp     esi, eax
0x77A38D: push    ebp
0x77A38E: jnb     short loc_77A398
0x77A390: mov     edx, [edi+20h]
0x77A393: mov     edx, [edx+esi*4]
0x77A396: jmp     short loc_77A39A
0x77A398: xor     edx, edx
0x77A39A: cmp     esi, eax
0x77A39C: jnb     short loc_77A3A6
0x77A39E: mov     eax, [edi+24h]
0x77A3A1: mov     ecx, [eax+esi*4]
0x77A3A4: jmp     short loc_77A3A8
0x77A3A6: xor     ecx, ecx
0x77A3A8: mov     ecx, [ecx+8]
0x77A3AB: mov     eax, [ebx+10h]
0x77A3AE: mov     ebp, [eax]
0x77A3B0: push    edx
0x77A3B1: mov     edx, [ebp+190h]
0x77A3B7: push    0
0x77A3B9: push    ecx
0x77A3BA: push    esi
0x77A3BB: push    eax
0x77A3BC: call    edx
0x77A3BE: mov     eax, [edi+1Ch]
0x77A3C1: add     esi, 1
0x77A3C4: cmp     esi, eax
0x77A3C6: jb      short loc_77A390
0x77A3C8: pop     ebp
0x77A3C9: mov     ebx, [ebx+10h]
0x77A3CC: mov     ecx, [edi+30h]
0x77A3CF: mov     eax, [ebx]
0x77A3D1: mov     edx, [eax+1A0h]
0x77A3D7: push    ecx
0x77A3D8: push    ebx
0x77A3D9: call    edx
0x77A3DB: mov     eax, edi
0x77A3DD: pop     edi
0x77A3DE: pop     esi
0x77A3DF: pop     ebx
0x77A3E0: retn    10h
