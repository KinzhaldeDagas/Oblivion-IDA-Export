0x6CE600: sub     esp, 24h
0x6CE603: fld     dword ptr ds:0A7DEB4h
0x6CE609: push    esi
0x6CE60A: fchs
0x6CE60C: lea     esi, [ecx+30h]
0x6CE60F: fstp    [esp+28h+var_24]
0x6CE613: fld     dword ptr [esi+1Ch]
0x6CE616: fld     [esp+28h+var_24]
0x6CE61A: fld     st
0x6CE61C: fucomp  st(2)
0x6CE61E: fnstsw  ax
0x6CE620: fstp    st(1)
0x6CE622: test    ah, 44h
0x6CE625: jp      short loc_6CE649
0x6CE627: fld     dword ptr [esi+10h]
0x6CE62A: fld     st(1)
0x6CE62C: fucompp
0x6CE62E: fnstsw  ax
0x6CE630: test    ah, 44h
0x6CE633: jp      short loc_6CE649
0x6CE635: fld     dword ptr [esi]
0x6CE637: fucompp
0x6CE639: fnstsw  ax
0x6CE63B: test    ah, 44h
0x6CE63E: jp      short loc_6CE64B
0x6CE640: xor     al, al
0x6CE642: pop     esi
0x6CE643: add     esp, 24h
0x6CE646: retn    4
0x6CE649: fstp    st
0x6CE64B: cmp     byte ptr [ecx+0Eh], 1
0x6CE64F: push    edi
0x6CE650: jnz     short loc_6CE66F
0x6CE652: movzx   eax, byte ptr [ecx+0Fh]
0x6CE656: mov     ecx, [ecx+50h]
0x6CE659: imul    eax, 68h ; 'h'
0x6CE65C: lea     edx, [eax+ecx+4]
0x6CE660: push    edx
0x6CE661: lea     eax, [esp+30h+var_20]
0x6CE665: push    eax
0x6CE666: mov     ecx, esi
0x6CE668: call    sub_6CB640
0x6CE66D: mov     esi, eax
0x6CE66F: mov     edi, [esp+2Ch+arg_0]
0x6CE673: mov     ecx, 8
0x6CE678: rep movsd
0x6CE67A: pop     edi
0x6CE67B: mov     al, 1
0x6CE67D: pop     esi
0x6CE67E: add     esp, 24h
0x6CE681: retn    4
