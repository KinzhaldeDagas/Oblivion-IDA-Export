0x418E90: push    0FFFFFFFFh
0x418E92: push    offset Script_Constructor_SEH
0x418E97: mov     eax, large fs:0
0x418E9D: push    eax
0x418E9E: push    ecx
0x418E9F: push    esi
0x418EA0: mov     eax, ___security_cookie
0x418EA5: xor     eax, esp
0x418EA7: push    eax
0x418EA8: lea     eax, [esp+18h+var_C]
0x418EAC: mov     large fs:0, eax
0x418EB2: mov     esi, ecx
0x418EB4: mov     [esp+18h+var_10], esi
0x418EB8: xor     ecx, ecx
0x418EBA: cmp     esi, ecx
0x418EBC: mov     [esp+18h+var_4], ecx
0x418EC0: jz      short loc_418EC5
0x418EC2: lea     ecx, [esi+18h]
0x418EC5: call    MagicItem_destr
0x418ECA: mov     ecx, esi; this
0x418ECC: mov     [esp+18h+var_4], 0FFFFFFFFh
0x418ED4: call    TESForm_destr
0x418ED9: mov     ecx, [esp+18h+var_C]
0x418EDD: mov     large fs:0, ecx
0x418EE4: pop     ecx
0x418EE5: pop     esi
0x418EE6: add     esp, 10h
0x418EE9: retn
0x9B2B40: mov     ecx, [ebp-10h]; this
0x9B2B43: jmp     TESForm_destr
0x9B2B48: mov     edx, [esp+arg_4]
0x9B2B4C: lea     eax, [edx-8]
0x9B2B4F: mov     ecx, [edx-0Ch]
0x9B2B52: xor     ecx, eax
0x9B2B54: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B2B59: mov     eax, offset stru_ADE9F0
0x9B2B5E: jmp     ___CxxFrameHandler3
