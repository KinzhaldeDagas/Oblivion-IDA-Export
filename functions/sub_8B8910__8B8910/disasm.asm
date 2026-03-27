0x8B8910: push    ebp
0x8B8911: mov     ebp, esp
0x8B8913: and     esp, 0FFFFFFF0h
0x8B8916: sub     esp, 70h
0x8B8919: mov     eax, ds:0B30AACh
0x8B891E: push    0
0x8B8920: mov     [esp+74h+var_4], eax
0x8B8924: push    0
0x8B8926: lea     ecx, [esp+78h+var_60]
0x8B892A: call    sub_8F5750
0x8B892F: mov     eax, offset off_A98060
0x8B8934: mov     [esp+70h+var_60], eax
0x8B8938: mov     ecx, [esp+70h+var_60]
0x8B893C: mov     byte ptr [esp+70h+var_64], al
0x8B8940: mov     byte ptr [esp+70h+var_64+1], ah
0x8B8944: shr     eax, 10h
0x8B8947: shr     ecx, 18h
0x8B894A: mov     byte ptr [esp+70h+var_64+3], cl
0x8B894E: mov     ecx, [esp+70h+var_4]
0x8B8952: mov     byte ptr [esp+70h+var_64+2], al
0x8B8956: mov     eax, [esp+70h+var_64]
0x8B895A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B895F: mov     esp, ebp
0x8B8961: pop     ebp
0x8B8962: retn
