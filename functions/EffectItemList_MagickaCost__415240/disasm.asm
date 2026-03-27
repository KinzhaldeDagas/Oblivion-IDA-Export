0x415240: push    ecx
0x415241: push    esi
0x415242: mov     esi, ecx
0x415244: cmp     dword ptr [esi+8], 0
0x415248: jnz     short loc_415255
0x41524A: cmp     dword ptr [esi+4], 0
0x41524E: jnz     short loc_415255
0x415250: fldz
0x415252: pop     esi
0x415253: pop     ecx
0x415254: retn
0x415255: test    esi, esi
0x415257: fldz
0x415259: fstp    [esp+8+var_4]
0x41525D: jz      short loc_415299
0x41525F: nop
0x415260: mov     ecx, [esi+4]
0x415263: mov     eax, [ecx+1Ch]
0x415266: mov     edx, [eax+58h]
0x415269: shr     edx, 16h
0x41526C: test    dl, 1
0x41526F: jnz     short loc_41527E
0x415271: call    EffectItem_MagickaCost
0x415276: fadd    [esp+8+var_4]
0x41527A: fstp    [esp+8+var_4]
0x41527E: mov     esi, [esi+8]
0x415281: test    esi, esi
0x415283: jz      short loc_41528A
0x415285: add     esi, 0FFFFFFFCh
0x415288: jnz     short loc_415260
0x41528A: fldz
0x41528C: fcom    [esp+8+var_4]
0x415290: fnstsw  ax
0x415292: test    ah, 41h
0x415295: jz      short loc_4152A9
0x415297: fstp    st
0x415299: fld     [esp+8+var_4]
0x41529D: push    ecx
0x41529E: fstp    [esp+0Ch+var_C]; float
0x4152A1: call    FloatFloor
0x4152A6: add     esp, 4
0x4152A9: fstp    [esp+8+var_4]
0x4152AD: pop     esi
0x4152AE: fld     [esp+4+var_4]
0x4152B1: pop     ecx
0x4152B2: retn
