0x9174D0: push    ebp
0x9174D1: mov     ebp, esp
0x9174D3: and     esp, 0FFFFFFF0h
0x9174D6: sub     esp, 14h
0x9174D9: mov     eax, [ecx+3Ch]
0x9174DC: mov     edx, [ecx+30h]
0x9174DF: push    ebx
0x9174E0: mov     ebx, [ebp+arg_0]
0x9174E3: push    esi
0x9174E4: dec     eax
0x9174E5: cmp     eax, 3
0x9174E8: push    edi
0x9174E9: mov     esi, ebx
0x9174EB: jl      loc_9175B0
0x9174F1: lea     ebx, [eax+1]
0x9174F4: shr     ebx, 2
0x9174F7: mov     edi, ebx
0x9174F9: neg     edi
0x9174FB: lea     eax, [eax+edi*4]
0x9174FE: mov     edi, edi
0x917500: mov     edi, [edx]
0x917502: mov     dword ptr [esp+20h+var_10], edi
0x917506: mov     edi, [edx+10h]
0x917509: mov     dword ptr [esp+20h+var_10+4], edi
0x91750D: mov     edi, [edx+20h]
0x917510: mov     dword ptr [esp+20h+var_10+8], edi
0x917514: mov     edi, [ecx+0Ch]
0x917517: mov     dword ptr [esp+20h+var_10+0Ch], edi
0x91751B: movaps  xmm0, [esp+20h+var_10]
0x917520: mov     edi, esi
0x917522: movaps  xmmword ptr [edi], xmm0
0x917525: mov     edi, [edx+4]
0x917528: mov     dword ptr [esp+20h+var_10], edi
0x91752C: mov     edi, [edx+14h]
0x91752F: mov     dword ptr [esp+20h+var_10+4], edi
0x917533: mov     edi, [edx+24h]
0x917536: mov     dword ptr [esp+20h+var_10+8], edi
0x91753A: mov     edi, [ecx+0Ch]
0x91753D: mov     dword ptr [esp+20h+var_10+0Ch], edi
0x917541: movaps  xmm0, [esp+20h+var_10]
0x917546: add     esi, 10h
0x917549: mov     edi, esi
0x91754B: movaps  xmmword ptr [edi], xmm0
0x91754E: mov     edi, [edx+8]
0x917551: mov     dword ptr [esp+20h+var_10], edi
0x917555: mov     edi, [edx+18h]
0x917558: mov     dword ptr [esp+20h+var_10+4], edi
0x91755C: mov     edi, [edx+28h]
0x91755F: mov     dword ptr [esp+20h+var_10+8], edi
0x917563: mov     edi, [ecx+0Ch]
0x917566: mov     dword ptr [esp+20h+var_10+0Ch], edi
0x91756A: movaps  xmm0, [esp+20h+var_10]
0x91756F: add     esi, 10h
0x917572: mov     edi, esi
0x917574: movaps  xmmword ptr [edi], xmm0
0x917577: mov     edi, [edx+0Ch]
0x91757A: mov     dword ptr [esp+20h+var_10], edi
0x91757E: mov     edi, [edx+1Ch]
0x917581: mov     dword ptr [esp+20h+var_10+4], edi
0x917585: mov     edi, [edx+2Ch]
0x917588: mov     dword ptr [esp+20h+var_10+8], edi
0x91758C: mov     edi, [ecx+0Ch]
0x91758F: add     esi, 10h
0x917592: mov     dword ptr [esp+20h+var_10+0Ch], edi
0x917596: movaps  xmm0, [esp+20h+var_10]
0x91759B: mov     edi, esi
0x91759D: add     esi, 10h
0x9175A0: add     edx, 30h ; '0'
0x9175A3: dec     ebx
0x9175A4: movaps  xmmword ptr [edi], xmm0
0x9175A7: jnz     loc_917500
0x9175AD: mov     ebx, [ebp+arg_0]
0x9175B0: test    eax, eax
0x9175B2: jl      short loc_9175DC
0x9175B4: mov     edi, [edx]
0x9175B6: mov     dword ptr [esp+20h+var_10], edi
0x9175BA: mov     edi, [edx+10h]
0x9175BD: mov     dword ptr [esp+20h+var_10+4], edi
0x9175C1: mov     edi, [edx+20h]
0x9175C4: mov     dword ptr [esp+20h+var_10+8], edi
0x9175C8: mov     edi, [ecx+0Ch]
0x9175CB: mov     dword ptr [esp+20h+var_10+0Ch], edi
0x9175CF: movaps  xmm0, [esp+20h+var_10]
0x9175D4: mov     edi, esi
0x9175D6: add     esi, 10h
0x9175D9: movaps  xmmword ptr [edi], xmm0
0x9175DC: cmp     eax, 1
0x9175DF: jl      short loc_91760A
0x9175E1: mov     edi, [edx+4]
0x9175E4: mov     dword ptr [esp+20h+var_10], edi
0x9175E8: mov     edi, [edx+14h]
0x9175EB: mov     dword ptr [esp+20h+var_10+4], edi
0x9175EF: mov     edi, [edx+24h]
0x9175F2: mov     dword ptr [esp+20h+var_10+8], edi
0x9175F6: mov     edi, [ecx+0Ch]
0x9175F9: mov     dword ptr [esp+20h+var_10+0Ch], edi
0x9175FD: movaps  xmm0, [esp+20h+var_10]
0x917602: mov     edi, esi
0x917604: add     esi, 10h
0x917607: movaps  xmmword ptr [edi], xmm0
0x91760A: cmp     eax, 2
0x91760D: jl      short loc_917633
0x91760F: mov     eax, [edx+8]
0x917612: mov     dword ptr [esp+20h+var_10], eax
0x917616: mov     eax, [edx+18h]
0x917619: mov     edx, [edx+28h]
0x91761C: mov     dword ptr [esp+20h+var_10+4], eax
0x917620: mov     eax, [ecx+0Ch]
0x917623: mov     dword ptr [esp+20h+var_10+8], edx
0x917627: mov     dword ptr [esp+20h+var_10+0Ch], eax
0x91762B: movaps  xmm0, [esp+20h+var_10]
0x917630: movaps  xmmword ptr [esi], xmm0
0x917633: pop     edi
0x917634: pop     esi
0x917635: mov     eax, ebx
0x917637: pop     ebx
0x917638: mov     esp, ebp
0x91763A: pop     ebp
0x91763B: retn    4
