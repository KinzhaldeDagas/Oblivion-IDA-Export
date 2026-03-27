0x56AC50: sub     esp, 8
0x56AC53: mov     edx, [esp+8+arg_8]
0x56AC57: fldz
0x56AC59: mov     eax, [esp+8+arg_0]
0x56AC5D: fstp    [esp+8+var_8]
0x56AC60: push    ebx
0x56AC61: push    ebp
0x56AC62: push    esi
0x56AC63: mov     esi, ecx
0x56AC65: mov     ecx, [esp+14h+arg_4]
0x56AC69: mov     byte ptr [edx], 0
0x56AC6C: movzx   edx, byte ptr [esi]
0x56AC6F: shr     edx, 1
0x56AC71: test    dl, 1
0x56AC74: push    edi
0x56AC75: mov     ebp, eax
0x56AC77: mov     edi, ecx
0x56AC79: jz      short loc_56AC7F
0x56AC7B: mov     ebp, ecx
0x56AC7D: mov     edi, eax
0x56AC7F: mov     ebx, [esi+0Ch]
0x56AC82: test    ebx, ebx
0x56AC84: jnz     short loc_56AC9A
0x56AC86: movzx   eax, word ptr [esi+8]
0x56AC8A: push    ebx
0x56AC8B: push    eax
0x56AC8C: call    sub_56B1D0
0x56AC91: add     esp, 8
0x56AC94: test    al, al
0x56AC96: jz      short loc_56AC9A
0x56AC98: mov     ebx, edi
0x56AC9A: movzx   eax, word ptr [esi+8]
0x56AC9E: lea     eax, [eax+eax*4]
0x56ACA1: add     eax, eax
0x56ACA3: add     eax, eax
0x56ACA5: mov     ecx, ds:Script_CommandList?.eval[eax+eax]
0x56ACAC: add     eax, eax
0x56ACAE: test    ecx, ecx
0x56ACB0: jz      loc_56AD49
0x56ACB6: cmp     byte ptr ds:Script_CommandList?.needsParent[eax], 0
0x56ACBD: jz      short loc_56ACC7
0x56ACBF: test    ebp, ebp
0x56ACC1: jz      loc_56AD49
0x56ACC7: mov     eax, [esi+10h]
0x56ACCA: lea     edx, [esp+18h+var_8]
0x56ACCE: push    edx
0x56ACCF: push    eax
0x56ACD0: push    ebx
0x56ACD1: push    ebp
0x56ACD2: call    ecx
0x56ACD4: add     esp, 10h
0x56ACD7: test    al, al
0x56ACD9: jz      short loc_56AD49
0x56ACDB: mov     cl, [esi]
0x56ACDD: test    cl, 4
0x56ACE0: jz      short loc_56ACEE
0x56ACE2: mov     eax, [esi+4]
0x56ACE5: test    eax, eax
0x56ACE7: jz      short loc_56ACEE
0x56ACE9: fld     dword ptr [eax+24h]
0x56ACEC: jmp     short loc_56ACF1
0x56ACEE: fld     dword ptr [esi+4]
0x56ACF1: fstp    [esp+18h+arg_0]
0x56ACF5: sub     esp, 8
0x56ACF8: fld     [esp+20h+arg_0]
0x56ACFC: movzx   eax, cl
0x56ACFF: fstp    [esp+20h+var_1C]; float
0x56AD03: shr     eax, 5
0x56AD06: fld     [esp+20h+var_8]
0x56AD0A: fstp    [esp+20h+arg_0]
0x56AD0E: fld     [esp+20h+arg_0]
0x56AD12: fstp    [esp+20h+var_20]; float
0x56AD15: push    eax; int
0x56AD16: call    sub_56A3B0
0x56AD1B: add     esp, 0Ch
0x56AD1E: test    al, al
0x56AD20: jnz     short loc_56AD4B
0x56AD22: cmp     word ptr [esi+8], 4Ch ; 'L'
0x56AD27: jnz     short loc_56AD4B
0x56AD29: mov     cl, [esi]
0x56AD2B: shr     cl, 5
0x56AD2E: cmp     cl, 2
0x56AD31: jz      short loc_56AD38
0x56AD33: cmp     cl, 3
0x56AD36: jnz     short loc_56AD4B
0x56AD38: mov     ecx, [esp+18h+arg_8]
0x56AD3C: pop     edi
0x56AD3D: pop     esi
0x56AD3E: pop     ebp
0x56AD3F: mov     byte ptr [ecx], 1
0x56AD42: pop     ebx
0x56AD43: add     esp, 8
0x56AD46: retn    0Ch
0x56AD49: xor     al, al
0x56AD4B: pop     edi
0x56AD4C: pop     esi
0x56AD4D: pop     ebp
0x56AD4E: pop     ebx
0x56AD4F: add     esp, 8
0x56AD52: retn    0Ch
