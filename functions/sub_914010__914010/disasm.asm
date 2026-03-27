0x914010: push    ebp
0x914011: mov     ebp, esp
0x914013: and     esp, 0FFFFFFF0h
0x914016: sub     esp, 34h
0x914019: mov     eax, ds:0B30AACh
0x91401E: xor     eax, esp
0x914020: mov     [esp+34h+var_4], eax
0x914024: mov     eax, [ebp+arg_0]
0x914027: push    ebx
0x914028: mov     ebx, [ebp+arg_8]
0x91402B: push    esi
0x91402C: push    edi
0x91402D: mov     edi, [ebp+arg_4]
0x914030: mov     esi, ecx
0x914032: lea     ecx, [esp+40h+var_28]
0x914036: push    ecx
0x914037: lea     edx, [esp+44h+var_20]
0x91403B: push    edx
0x91403C: mov     ecx, esi
0x91403E: mov     [esp+48h+var_24], eax
0x914042: call    sub_913D30
0x914047: push    ebx
0x914048: push    edi
0x914049: lea     eax, [esp+48h+var_29]
0x91404D: push    eax
0x91404E: mov     ecx, esi
0x914050: call    sub_9144C0
0x914055: fld1
0x914057: fcomp   dword ptr [esi+14h]
0x91405A: cmp     byte ptr [eax], 0
0x91405D: setnz   bl
0x914060: fnstsw  ax
0x914062: test    ah, 44h
0x914065: jnp     short loc_91407A
0x914067: mov     esi, [esi+10h]
0x91406A: fld     [esp+40h+var_28]
0x91406E: movaps  xmm0, [esp+40h+var_20]
0x914073: movaps  xmmword ptr [esi+10h], xmm0
0x914077: fstp    dword ptr [esi+1Ch]
0x91407A: sub     dword ptr ds:0BA83FCh, 1
0x914081: jnz     short loc_91408D
0x914083: mov     dword ptr ds:0BA83F8h, 0
0x91408D: push    offset stru_BA8380; lpCriticalSection
0x914092: call    dword ptr ds:0A28074h
0x914098: mov     eax, [esp+40h+var_24]
0x91409C: mov     ecx, [esp+40h+var_4]
0x9140A0: pop     edi
0x9140A1: pop     esi
0x9140A2: mov     [eax], bl
0x9140A4: pop     ebx
0x9140A5: xor     ecx, esp
0x9140A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9140AC: mov     esp, ebp
0x9140AE: pop     ebp
0x9140AF: retn    0Ch
