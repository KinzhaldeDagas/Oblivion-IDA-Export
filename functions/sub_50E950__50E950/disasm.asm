0x50E950: push    ecx
0x50E951: mov     ecx, [esp+4+l]
0x50E955: fldz
0x50E957: mov     edx, [esp+4+arg_10]
0x50E95B: fstp    dword ptr [esp+4+var_4]
0x50E95E: lea     eax, [esp+4+var_4]
0x50E961: push    eax; UInt16
0x50E962: mov     eax, [esp+8+arg_C]
0x50E966: push    ecx; l
0x50E967: mov     ecx, [esp+0Ch+a4]
0x50E96B: push    edx; a6
0x50E96C: mov     edx, [esp+10h+a3]
0x50E970: push    eax; a5
0x50E971: mov     eax, [esp+14h+arg_4]
0x50E975: push    ecx; a4
0x50E976: mov     ecx, [esp+18h+a1]
0x50E97A: push    edx; a3
0x50E97B: push    eax; a2
0x50E97C: push    ecx; a1
0x50E97D: call    Script_ExtractArgs
0x50E982: add     esp, 20h
0x50E985: test    al, al
0x50E987: jnz     short loc_50E98B
0x50E989: pop     ecx
0x50E98A: retn
0x50E98B: fld     dword ptr ds:0B06C2Ch
0x50E991: fld     dword ptr [esp+4+var_4]
0x50E994: fld     st
0x50E996: fucomp  st(2)
0x50E998: fnstsw  ax
0x50E99A: fstp    st(1)
0x50E99C: test    ah, 44h
0x50E99F: jnp     short loc_50E9BD
0x50E9A1: fldz
0x50E9A3: fcomp   st(1)
0x50E9A5: fnstsw  ax
0x50E9A7: test    ah, 5
0x50E9AA: jp      short loc_50E9BD
0x50E9AC: fstp    dword ptr ds:0B06C2Ch
0x50E9B2: mov     byte ptr ds:0B34FA4h, 1
0x50E9B9: mov     al, 1
0x50E9BB: pop     ecx
0x50E9BC: retn
0x50E9BD: fstp    st
0x50E9BF: mov     al, 1
0x50E9C1: pop     ecx
0x50E9C2: retn
