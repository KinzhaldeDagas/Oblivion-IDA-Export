0x6FA600: sub     esp, 308h
0x6FA606: mov     eax, ds:0B30AACh
0x6FA60B: xor     eax, esp
0x6FA60D: mov     [esp+308h+var_4], eax
0x6FA614: mov     dl, ds:0B3F480h
0x6FA61A: test    dl, 8
0x6FA61D: mov     eax, [esp+308h+FullPath]
0x6FA624: push    esi
0x6FA625: mov     esi, [esp+30Ch+arg_0]
0x6FA62C: jz      short loc_6FA643
0x6FA62E: mov     cl, [eax]
0x6FA630: test    cl, cl
0x6FA632: jz      short loc_6FA643
0x6FA634: cmp     cl, 20h ; ' '
0x6FA637: jnz     short loc_6FA643
0x6FA639: mov     cl, [eax+1]
0x6FA63C: add     eax, 1
0x6FA63F: test    cl, cl
0x6FA641: jnz     short loc_6FA634
0x6FA643: test    dl, 6
0x6FA646: jz      short loc_6FA6C3
0x6FA648: lea     ecx, [esp+30Ch+Ext]
0x6FA64C: push    ecx; Ext
0x6FA64D: lea     edx, [esp+310h+Filename]
0x6FA654: push    edx; Filename
0x6FA655: lea     ecx, [esp+314h+Dir]
0x6FA65C: push    ecx; Dir
0x6FA65D: lea     edx, [esp+318h+Drive]
0x6FA661: push    edx; Drive
0x6FA662: push    eax; FullPath
0x6FA663: call    __splitpath
0x6FA668: mov     al, ds:0B3F480h
0x6FA66D: add     esp, 14h
0x6FA670: test    al, 2
0x6FA672: jnz     short loc_6FA681
0x6FA674: mov     [esp+30Ch+Drive], 0
0x6FA679: mov     [esp+30Ch+Dir], 0
0x6FA681: test    al, 4
0x6FA683: jnz     short loc_6FA68A
0x6FA685: mov     [esp+30Ch+Ext], 0
0x6FA68A: lea     eax, [esp+30Ch+Ext]
0x6FA68E: push    eax
0x6FA68F: lea     ecx, [esp+310h+Filename]
0x6FA696: push    ecx
0x6FA697: lea     edx, [esp+314h+Dir]
0x6FA69E: push    edx
0x6FA69F: lea     eax, [esp+318h+Drive]
0x6FA6A3: push    eax
0x6FA6A4: push    esi
0x6FA6A5: call    sub_9853B2
0x6FA6AA: add     esp, 14h
0x6FA6AD: pop     esi
0x6FA6AE: mov     ecx, [esp+308h+var_4]
0x6FA6B5: xor     ecx, esp
0x6FA6B7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6FA6BC: add     esp, 308h
0x6FA6C2: retn
0x6FA6C3: mov     edx, esi
0x6FA6C5: sub     edx, eax
0x6FA6C7: mov     cl, [eax]
0x6FA6C9: mov     [edx+eax], cl
0x6FA6CC: add     eax, 1
0x6FA6CF: test    cl, cl
0x6FA6D1: jnz     short loc_6FA6C7
0x6FA6D3: mov     ecx, [esp+30Ch+var_4]
0x6FA6DA: pop     esi
0x6FA6DB: xor     ecx, esp
0x6FA6DD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6FA6E2: add     esp, 308h
0x6FA6E8: retn
