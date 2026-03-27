0x9088D0: push    ebp
0x9088D1: mov     ebp, esp
0x9088D3: and     esp, 0FFFFFFF0h
0x9088D6: sub     esp, 224h
0x9088DC: mov     eax, ds:0B30AACh
0x9088E1: push    ebx
0x9088E2: push    esi
0x9088E3: mov     esi, large fs:2Ch
0x9088EA: mov     ebx, ecx
0x9088EC: mov     ecx, ds:0BA9DE4h
0x9088F2: mov     [esp+22Ch+var_4], eax
0x9088F9: mov     eax, [esi+ecx*4]
0x9088FC: mov     edx, [eax+1A4h]
0x908902: push    edi
0x908903: cmp     edx, [eax+1A8h]
0x908909: jnb     short loc_908936
0x90890B: mov     edi, eax
0x90890D: mov     ecx, [edi+1A4h]
0x908913: mov     dword ptr [ecx], offset aLtbvtree; "LtBvTree"
0x908919: mov     dword ptr [ecx+0Ch], offset aQuerytree; "QueryTree"
0x908920: rdtsc
0x908922: mov     [esp+230h+var_224], eax
0x908926: mov     eax, [esp+230h+var_224]
0x90892A: mov     [ecx+4], eax
0x90892D: add     ecx, 10h
0x908930: mov     [edi+1A4h], ecx
0x908936: mov     ecx, [ebp+arg_8]
0x908939: mov     edi, [ebp+arg_4]
0x90893C: mov     edx, [ebp+arg_0]
0x90893F: push    ecx
0x908940: push    edi
0x908941: push    edx
0x908942: mov     ecx, ebx
0x908944: call    sub_9072C0
0x908949: mov     ecx, ds:0BA9DE4h
0x90894F: mov     eax, [esi+ecx*4]
0x908952: mov     edx, [eax+1A4h]
0x908958: cmp     edx, [eax+1A8h]
0x90895E: jnb     short loc_908984
0x908960: mov     esi, eax
0x908962: mov     ecx, [esi+1A4h]
0x908968: mov     dword ptr [ecx], offset aStnarrowphase; "StNarrowPhase"
0x90896E: rdtsc
0x908970: mov     [esp+230h+var_224], eax
0x908974: mov     eax, [esp+230h+var_224]
0x908978: mov     [ecx+4], eax
0x90897B: add     ecx, 0Ch
0x90897E: mov     [esi+1A4h], ecx
0x908984: mov     esi, [ebx+0Ch]
0x908987: mov     eax, [ebx+10h]
0x90898A: lea     ecx, [eax+eax*2]
0x90898D: mov     eax, [edi+8]
0x908990: mov     edx, esi
0x908992: lea     ebx, [edx+ecx*4]
0x908995: cmp     esi, ebx
0x908997: mov     ecx, [edi]
0x908999: mov     [esp+230h+var_214], edi
0x90899D: mov     [esp+230h+var_218], eax
0x9089A1: mov     edi, [ecx+0Ch]
0x9089A4: jz      short loc_9089E3
0x9089A6: mov     ecx, [esi]
0x9089A8: mov     edx, [edi]
0x9089AA: lea     eax, [esp+230h+var_210]
0x9089AE: push    eax
0x9089AF: push    ecx
0x9089B0: mov     ecx, edi
0x9089B2: call    dword ptr [edx+28h]
0x9089B5: mov     ecx, [esi]
0x9089B7: mov     [esp+230h+var_220], eax
0x9089BB: mov     eax, [ebp+arg_10]
0x9089BE: push    eax
0x9089BF: mov     eax, [ebp+arg_C]
0x9089C2: push    eax
0x9089C3: mov     eax, [ebp+arg_8]
0x9089C6: push    eax
0x9089C7: lea     eax, [esp+23Ch+var_220]
0x9089CB: mov     [esp+23Ch+var_21C], ecx
0x9089CF: mov     ecx, [esi+8]
0x9089D2: mov     edx, [ecx]
0x9089D4: push    eax
0x9089D5: mov     eax, [ebp+arg_0]
0x9089D8: push    eax
0x9089D9: call    dword ptr [edx+10h]
0x9089DC: add     esi, 0Ch
0x9089DF: cmp     esi, ebx
0x9089E1: jnz     short loc_9089A6
0x9089E3: mov     ecx, large fs:2Ch
0x9089EA: mov     edx, ds:0BA9DE4h
0x9089F0: mov     eax, [ecx+edx*4]
0x9089F3: mov     esi, [eax+1A4h]
0x9089F9: cmp     esi, [eax+1A8h]
0x9089FF: jnb     short loc_908A25
0x908A01: mov     esi, eax
0x908A03: mov     ecx, [esi+1A4h]
0x908A09: mov     dword ptr [ecx], offset aLt_0; "lt"
0x908A0F: rdtsc
0x908A11: mov     [esp+230h+var_224], eax
0x908A15: mov     edx, [esp+230h+var_224]
0x908A19: mov     [ecx+4], edx
0x908A1C: add     ecx, 0Ch
0x908A1F: mov     [esi+1A4h], ecx
0x908A25: mov     ecx, [esp+230h+var_4]
0x908A2C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x908A31: pop     edi
0x908A32: pop     esi
0x908A33: pop     ebx
0x908A34: mov     esp, ebp
0x908A36: pop     ebp
0x908A37: retn    14h
