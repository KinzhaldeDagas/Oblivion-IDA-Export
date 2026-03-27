0x5EDD56: mov     eax, [ebx+5Ch]
0x5EDD59: mov     edx, [eax+24h]
0x5EDD5C: lea     ecx, [ebx+5Ch]
0x5EDD5F: call    edx
0x5EDD61: mov     esi, eax
0x5EDD63: test    esi, esi
0x5EDD65: jz      loc_5EDEA0
0x5EDD6B: test    ebp, ebp
0x5EDD6D: jz      loc_5EDEA0
0x5EDD73: lea     ecx, [esi+0ACh]
0x5EDD79: call    sub_477EF0
0x5EDD7E: mov     eax, [esi]
0x5EDD80: mov     edx, [eax+84h]
0x5EDD86: push    1
0x5EDD88: push    ebp
0x5EDD89: mov     ecx, esi
0x5EDD8B: call    edx
0x5EDD8D: cmp     dword ptr [edi+70h], 0
0x5EDD91: jz      short loc_5EDDF6
0x5EDD93: cmp     byte ptr ds:0B333B8h, 0
0x5EDD9A: jnz     short loc_5EDDF6
0x5EDD9C: mov     ebp, [ebx+60h]
0x5EDD9F: test    ebp, ebp
0x5EDDA1: jz      short Actor_SetupCastingFX?___AllocNewMagicCasterFX
0x5EDDA3: mov     ecx, ebp; this
0x5EDDA5: call    MagicCaster_CastingVFX_destr
0x5EDDAA: push    ebp
0x5EDDAB: call    FormHeapFree
0x5EDDB0: add     esp, 4
