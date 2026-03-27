0x67C880: sub     esp, 14h
0x67C883: mov     eax, [esp+14h+arg_4]
0x67C887: mov     ecx, [ecx]
0x67C889: push    ebx
0x67C88A: push    ebp
0x67C88B: xor     ebx, ebx
0x67C88D: xor     ebp, ebp
0x67C88F: cmp     eax, 4
0x67C892: mov     [esp+1Ch+var_4], ecx
0x67C896: mov     [esp+1Ch+var_10], ebp
0x67C89A: mov     [esp+1Ch+var_11], bl
0x67C89E: jz      short loc_67C8AA
0x67C8A0: cmp     eax, 0FFFFFFFFh
0x67C8A3: jz      short loc_67C8AA
0x67C8A5: mov     [esp+1Ch+var_11], 1
0x67C8AA: cmp     ecx, ebx
0x67C8AC: jz      loc_67CB42
0x67C8B2: push    esi
0x67C8B3: push    edi
0x67C8B4: mov     eax, [esp+24h+var_4]
0x67C8B8: mov     eax, [eax]
0x67C8BA: cmp     eax, ebx
0x67C8BC: jz      loc_67CB40
0x67C8C2: mov     ecx, [eax]
0x67C8C4: mov     eax, ecx
0x67C8C6: cmp     eax, ebx
0x67C8C8: jz      short loc_67C8F3
0x67C8CA: lea     ebx, [ebx+0]
0x67C8D0: mov     esi, [eax]
0x67C8D2: cmp     esi, ebx
0x67C8D4: mov     [esp+24h+var_C], esi
0x67C8D8: jz      short loc_67C8F3
0x67C8DA: mov     edx, [esi]
0x67C8DC: cmp     edx, [esp+24h+friendlyFight_]
0x67C8E0: jz      short loc_67C8EB
0x67C8E2: mov     eax, [eax+4]
0x67C8E5: cmp     eax, ebx
0x67C8E7: jnz     short loc_67C8D0
0x67C8E9: jmp     short loc_67C8F3
0x67C8EB: cmp     esi, ebx
0x67C8ED: jnz     loc_67C99A
0x67C8F3: mov     edi, ecx
0x67C8F5: cmp     edi, ebx
0x67C8F7: jz      loc_67CB2D
0x67C8FD: lea     ecx, [ecx+0]
0x67C900: mov     esi, [edi]
0x67C902: cmp     esi, ebx
0x67C904: jz      loc_67CB2D
0x67C90A: mov     eax, [esi]
0x67C90C: cmp     eax, ebx
0x67C90E: jz      short loc_67C98A
0x67C910: mov     ecx, [eax+58h]
0x67C913: cmp     ecx, ebx
0x67C915: jz      short loc_67C98A
0x67C917: mov     eax, [ecx]
0x67C919: mov     edx, [eax+3D0h]
0x67C91F: call    edx
0x67C921: mov     ecx, [esp+24h+friendlyFight_]
0x67C925: cmp     eax, ecx
0x67C927: jz      short loc_67C93E
0x67C929: mov     ecx, [ecx+58h]
0x67C92C: cmp     ecx, ebx
0x67C92E: jz      short loc_67C98A
0x67C930: mov     eax, [ecx]
0x67C932: mov     edx, [eax+3D0h]
0x67C938: call    edx
0x67C93A: cmp     eax, [esi]
0x67C93C: jnz     short loc_67C98A
0x67C93E: cmp     ebp, ebx
0x67C940: jnz     short loc_67C95F
0x67C942: push    8; Size
0x67C944: call    FormHeapAlloc
0x67C949: add     esp, 4
0x67C94C: cmp     eax, ebx
0x67C94E: jz      short loc_67C957
0x67C950: mov     [eax], ebx
0x67C952: mov     [eax+4], ebx
0x67C955: jmp     short loc_67C959
0x67C957: xor     eax, eax
0x67C959: mov     [esp+24h+var_10], eax
0x67C95D: mov     ebp, eax
0x67C95F: cmp     [ebp+0], ebx
0x67C962: jz      short loc_67C987
0x67C964: push    8; Size
0x67C966: call    FormHeapAlloc
0x67C96B: add     esp, 4
0x67C96E: cmp     eax, ebx
0x67C970: jz      short loc_67C97C
0x67C972: mov     ecx, [ebp+0]
0x67C975: mov     [eax], ecx
0x67C977: mov     [eax+4], ebx
0x67C97A: jmp     short loc_67C97E
0x67C97C: xor     eax, eax
0x67C97E: mov     edx, [ebp+4]
0x67C981: mov     [eax+4], edx
0x67C984: mov     [ebp+4], eax
0x67C987: mov     [ebp+0], esi
0x67C98A: mov     edi, [edi+4]
0x67C98D: cmp     edi, ebx
0x67C98F: jnz     loc_67C900
0x67C995: jmp     loc_67CB2D
0x67C99A: cmp     ecx, ebx
0x67C99C: mov     [esp+24h+var_8], ecx
0x67C9A0: jz      loc_67CB2D
0x67C9A6: mov     eax, [esp+24h+var_8]
0x67C9AA: mov     ebp, [eax]
0x67C9AC: cmp     ebp, ebx
0x67C9AE: jz      loc_67CB29
0x67C9B4: mov     eax, [ebp+0]
0x67C9B7: cmp     eax, [esp+24h+friendlyFight_]
0x67C9BB: jz      loc_67CB16
0x67C9C1: mov     cl, [ebp+4]
0x67C9C4: cmp     cl, [esi+4]
0x67C9C7: jnz     loc_67CB16
0x67C9CD: cmp     [esp+24h+var_11], bl
0x67C9D1: jz      short loc_67C9EF
0x67C9D3: mov     ecx, [eax+58h]
0x67C9D6: cmp     ecx, ebx
0x67C9D8: jz      loc_67CB16
0x67C9DE: mov     edx, [ecx]
0x67C9E0: mov     eax, [edx+8]
0x67C9E3: call    eax
0x67C9E5: cmp     eax, [esp+24h+arg_4]
0x67C9E9: jnz     loc_67CB12
0x67C9EF: mov     esi, [ebp+0]
0x67C9F2: cmp     esi, ebx
0x67C9F4: mov     edi, [esp+24h+friendlyFight_]
0x67C9F8: jz      short loc_67CA2E
0x67C9FA: mov     ecx, [esi+58h]
0x67C9FD: cmp     ecx, ebx
0x67C9FF: jz      short loc_67CA2E
0x67CA01: mov     edx, [ecx]
0x67CA03: mov     eax, [edx+3D0h]
0x67CA09: call    eax
0x67CA0B: mov     ecx, edi
0x67CA0D: cmp     eax, ecx
0x67CA0F: jz      loc_67CADD
0x67CA15: mov     ecx, [ecx+58h]
0x67CA18: cmp     ecx, ebx
0x67CA1A: jz      short loc_67CA2E
0x67CA1C: mov     edx, [ecx]
0x67CA1E: mov     eax, [edx+3D0h]
0x67CA24: call    eax
0x67CA26: cmp     eax, esi
0x67CA28: jz      loc_67CADD
0x67CA2E: mov     ecx, [esi+58h]
0x67CA31: cmp     ecx, ebx
0x67CA33: jz      short loc_67CA52
0x67CA35: mov     edx, [ecx]
0x67CA37: mov     eax, [edx+3D0h]
0x67CA3D: call    eax
0x67CA3F: test    eax, eax
0x67CA41: jz      short loc_67CA52
0x67CA43: mov     ecx, [esi+58h]
0x67CA46: mov     edx, [ecx]
0x67CA48: mov     eax, [edx+3D0h]
0x67CA4E: call    eax
0x67CA50: mov     esi, eax
0x67CA52: mov     ecx, edi
0x67CA54: mov     ecx, [ecx+58h]
0x67CA57: cmp     ecx, ebx
0x67CA59: jz      short loc_67CA87
0x67CA5B: mov     edx, [ecx]
0x67CA5D: mov     eax, [edx+3D0h]
0x67CA63: call    eax
0x67CA65: test    eax, eax
0x67CA67: jz      short loc_67CA87
0x67CA69: mov     ecx, edi
0x67CA6B: mov     ecx, [ecx+58h]
0x67CA6E: mov     edx, [ecx]
0x67CA70: mov     eax, [edx+3D0h]
0x67CA76: call    eax
0x67CA78: mov     edi, eax
0x67CA7A: mov     eax, ds:0B333C4h
0x67CA7F: cmp     edi, eax
0x67CA81: jnz     short loc_67CA87
0x67CA83: mov     edi, esi
0x67CA85: mov     esi, eax
0x67CA87: push    64h ; 'd'; responsibility
0x67CA89: push    ebx
0x67CA8A: mov     ecx, esi; this
0x67CA8C: call    Actor_IsCreature
0x67CA91: mov     edx, [esi]
0x67CA93: mov     ecx, esi
0x67CA95: push    eax
0x67CA96: mov     eax, [edx+334h]
0x67CA9C: push    1
0x67CA9E: call    eax
0x67CAA0: mov     ecx, esi
0x67CAA2: push    eax; a7
0x67CAA3: push    ebx
0x67CAA4: push    edi
0x67CAA5: call    TesObjectREF_GetDistance
0x67CAAA: mov     edx, [esi]
0x67CAAC: mov     eax, [edx+284h]
0x67CAB2: push    ecx
0x67CAB3: fstp    [esp+30h+a6]; a6
0x67CAB6: push    21h ; '!'; a5
0x67CAB8: mov     ecx, esi
0x67CABA: call    eax
0x67CABC: mov     edx, [esi]
0x67CABE: push    eax; distanceToTarget
0x67CABF: mov     eax, [edx+224h]
0x67CAC5: push    ebx; aggressionStat
0x67CAC6: push    edi; friendlyFight?
0x67CAC7: mov     ecx, esi
0x67CAC9: call    eax
0x67CACB: push    eax; disposition
0x67CACC: call    shouldActorFight
0x67CAD1: add     esp, 20h
0x67CAD4: test    eax, eax
0x67CAD6: setle   al
0x67CAD9: cmp     al, bl
0x67CADB: jz      short loc_67CB12
0x67CADD: cmp     [esp+24h+var_10], ebx
0x67CAE1: mov     ecx, [esp+24h+var_C]
0x67CAE5: mov     edx, [ecx+8]
0x67CAE8: mov     [ebp+8], edx
0x67CAEB: jnz     short loc_67CB08
0x67CAED: push    8; Size
0x67CAEF: call    FormHeapAlloc
0x67CAF4: add     esp, 4
0x67CAF7: cmp     eax, ebx
0x67CAF9: jz      short loc_67CB02
0x67CAFB: mov     [eax], ebx
0x67CAFD: mov     [eax+4], ebx
0x67CB00: jmp     short loc_67CB04
0x67CB02: xor     eax, eax
0x67CB04: mov     [esp+24h+var_10], eax
0x67CB08: mov     ecx, [esp+24h+var_10]
0x67CB0C: push    ebp
0x67CB0D: call    BSSimpleList_PushFront
0x67CB12: mov     esi, [esp+24h+var_C]
0x67CB16: mov     eax, [esp+24h+var_8]
0x67CB1A: mov     eax, [eax+4]
0x67CB1D: cmp     eax, ebx
0x67CB1F: mov     [esp+24h+var_8], eax
0x67CB23: jnz     loc_67C9A6
0x67CB29: mov     ebp, [esp+24h+var_10]
0x67CB2D: mov     ecx, [esp+24h+var_4]
0x67CB31: mov     eax, [ecx+4]
0x67CB34: cmp     eax, ebx
0x67CB36: mov     [esp+24h+var_4], eax
0x67CB3A: jnz     loc_67C8B4
0x67CB40: pop     edi
0x67CB41: pop     esi
0x67CB42: mov     eax, ebp
0x67CB44: pop     ebp
0x67CB45: pop     ebx
0x67CB46: add     esp, 14h
0x67CB49: retn    8
