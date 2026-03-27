0x6AC610: push    0FFFFFFFFh
0x6AC612: push    offset SEH_6AC610
0x6AC617: mov     eax, large fs:0
0x6AC61D: push    eax
0x6AC61E: sub     esp, 13Ch
0x6AC624: mov     eax, ds:0B30AACh
0x6AC629: xor     eax, esp
0x6AC62B: mov     [esp+148h+var_10], eax
0x6AC632: push    ebx
0x6AC633: push    ebp
0x6AC634: push    esi
0x6AC635: push    edi
0x6AC636: mov     eax, ds:0B30AACh
0x6AC63B: xor     eax, esp
0x6AC63D: push    eax
0x6AC63E: lea     eax, [esp+15Ch+var_C]
0x6AC645: mov     large fs:0, eax
0x6AC64B: cmp     byte ptr ds:0B16178h, 0
0x6AC652: mov     eax, [esp+15Ch+arg_4]
0x6AC659: mov     ebp, [esp+15Ch+arg_0]
0x6AC660: mov     edi, ecx
0x6AC662: mov     [esp+15Ch+var_140], edi
0x6AC666: mov     [esp+15Ch+Str1], eax
0x6AC66A: jnz     short loc_6AC67D
0x6AC66C: mov     dword ptr [ebp+0], 0
0x6AC673: mov     eax, 1
0x6AC678: jmp     loc_6AC9BE
0x6AC67D: mov     esi, [esp+15Ch+arg_C]
0x6AC684: test    esi, esi
0x6AC686: jnz     short loc_6AC697
0x6AC688: mov     esi, [edi+0B4h]
0x6AC68E: lea     ecx, [esi+1]
0x6AC691: mov     [edi+0B4h], ecx
0x6AC697: cmp     dword ptr [ebp+0], 0
0x6AC69B: mov     ebx, [esp+15Ch+arg_8]
0x6AC6A2: jnz     short loc_6AC6E1
0x6AC6A4: push    58h ; 'X'; Size
0x6AC6A6: call    FormHeapAlloc
0x6AC6AB: add     esp, 4
0x6AC6AE: mov     [esp+15Ch+var_13C], eax
0x6AC6B2: test    eax, eax
0x6AC6B4: mov     [esp+15Ch+var_4], 0
0x6AC6BF: jz      short loc_6AC6D1
0x6AC6C1: mov     edx, [esp+15Ch+Str1]
0x6AC6C5: push    ebx
0x6AC6C6: push    esi
0x6AC6C7: push    edx
0x6AC6C8: mov     ecx, eax
0x6AC6CA: call    sub_6B6DC0
0x6AC6CF: jmp     short loc_6AC6D3
0x6AC6D1: xor     eax, eax
0x6AC6D3: mov     [esp+15Ch+var_4], 0FFFFFFFFh
0x6AC6DE: mov     [ebp+0], eax
0x6AC6E1: mov     eax, [esp+15Ch+Str1]
0x6AC6E5: push    3; MaxCount
0x6AC6E7: push    offset aData_3; "data"
0x6AC6EC: push    eax; Str1
0x6AC6ED: mov     [esp+168h+var_144], 0
0x6AC6F5: call    __strnicmp
0x6AC6FA: mov     esi, [esp+168h+Str1]
0x6AC6FE: add     esp, 0Ch
0x6AC701: test    eax, eax
0x6AC703: jz      short loc_6AC770
0x6AC705: push    5; MaxCount
0x6AC707: push    offset a_Data; ".\\data"
0x6AC70C: push    esi; Str1
0x6AC70D: call    __strnicmp
0x6AC712: add     esp, 0Ch
0x6AC715: test    eax, eax
0x6AC717: jz      short loc_6AC770
0x6AC719: mov     eax, ds:0A77134h
0x6AC71E: mov     edx, ds:0A77130h
0x6AC724: mov     ecx, ds:0A7712Ch
0x6AC72A: mov     [esp+15Ch+var_10C], eax
0x6AC72E: mov     eax, esi
0x6AC730: mov     [esp+15Ch+var_110], edx
0x6AC734: mov     dword ptr [esp+15Ch+Str], ecx
0x6AC738: mov     edx, eax
0x6AC73A: lea     ebx, [ebx+0]
0x6AC740: mov     cl, [eax]
0x6AC742: add     eax, 1
0x6AC745: test    cl, cl
0x6AC747: jnz     short loc_6AC740
0x6AC749: lea     edi, [esp+15Ch+Str]
0x6AC74D: sub     eax, edx
0x6AC74F: add     edi, 0FFFFFFFFh
0x6AC752: mov     cl, [edi+1]
0x6AC755: add     edi, 1
0x6AC758: test    cl, cl
0x6AC75A: jnz     short loc_6AC752
0x6AC75C: mov     ecx, eax
0x6AC75E: shr     ecx, 2
0x6AC761: rep movsd
0x6AC763: mov     ecx, eax
0x6AC765: and     ecx, 3
0x6AC768: rep movsb
0x6AC76A: mov     edi, [esp+15Ch+var_140]
0x6AC76E: jmp     short loc_6AC784
0x6AC770: lea     edx, [esp+15Ch+Str]
0x6AC774: mov     eax, esi
0x6AC776: sub     edx, esi
0x6AC778: mov     cl, [eax]
0x6AC77A: mov     [edx+eax], cl
0x6AC77D: add     eax, 1
0x6AC780: test    cl, cl
0x6AC782: jnz     short loc_6AC778
0x6AC784: cmp     [esp+15Ch+Str], 0
0x6AC789: lea     esi, [esp+15Ch+Str]
0x6AC78D: jz      short loc_6AC7A6
0x6AC78F: nop
0x6AC790: movsx   ecx, byte ptr [esi]
0x6AC793: push    ecx; C
0x6AC794: call    _tolower
0x6AC799: mov     [esi], al
0x6AC79B: add     esi, 1
0x6AC79E: add     esp, 4
0x6AC7A1: cmp     byte ptr [esi], 0
0x6AC7A4: jnz     short loc_6AC790
0x6AC7A6: xor     eax, eax
0x6AC7A8: lea     edx, [esp+15Ch+Str]
0x6AC7AC: push    offset aVoice; "voice"
0x6AC7B1: mov     [esp+160h+var_128], eax
0x6AC7B5: push    edx; Str
0x6AC7B6: mov     [esp+164h+var_138], eax
0x6AC7BA: mov     [esp+164h+var_134], eax
0x6AC7BE: mov     [esp+164h+var_130], eax
0x6AC7C2: mov     [esp+164h+var_12C], eax
0x6AC7C6: mov     [esp+164h+var_124], eax
0x6AC7CA: mov     [esp+164h+var_120], eax
0x6AC7CE: mov     [esp+164h+var_11C], eax
0x6AC7D2: mov     [esp+164h+var_118], eax
0x6AC7D6: mov     [esp+164h+var_128], eax
0x6AC7DA: call    _strstr
0x6AC7DF: add     esp, 8
0x6AC7E2: test    eax, eax
0x6AC7E4: jz      loc_6AC897
0x6AC7EA: push    ebx
0x6AC7EB: lea     eax, [esp+160h+Str]
0x6AC7EF: push    eax
0x6AC7F0: lea     ecx, [esp+164h+var_144]
0x6AC7F4: push    ecx
0x6AC7F5: mov     ecx, edi
0x6AC7F7: call    OpenVoiceFile
0x6AC7FC: mov     edx, [ebp+0]
0x6AC7FF: movzx   eax, ax
0x6AC802: mov     [edx+1Ch], ax
0x6AC806: mov     eax, [ebp+0]
0x6AC809: cmp     word ptr [eax+1Ch], 0
0x6AC80E: jnz     loc_6AC924
0x6AC814: lea     ecx, [esp+15Ch+var_138]
0x6AC818: push    ecx; int
0x6AC819: push    ebx; int
0x6AC81A: lea     edx, [esp+164h+Str]
0x6AC81E: push    edx; pszFileName
0x6AC81F: lea     eax, [esp+168h+var_144]
0x6AC823: push    eax; int
0x6AC824: mov     ecx, edi
0x6AC826: call    sub_6AABD0
0x6AC82B: mov     ecx, [ebp+0]
0x6AC82E: movzx   eax, ax
0x6AC831: mov     [ecx+1Ch], ax
0x6AC835: mov     edx, [ebp+0]
0x6AC838: cmp     word ptr [edx+1Ch], 0
0x6AC83D: jnz     loc_6AC924
0x6AC843: mov     ecx, [esp+15Ch+Str1]
0x6AC847: lea     eax, [esp+15Ch+var_138]
0x6AC84B: push    eax; int
0x6AC84C: push    ebx; int
0x6AC84D: push    ecx; pszFileName
0x6AC84E: lea     edx, [esp+168h+var_144]
0x6AC852: push    edx; int
0x6AC853: mov     ecx, edi
0x6AC855: call    sub_6AABD0
0x6AC85A: mov     ecx, [ebp+0]
0x6AC85D: movzx   eax, ax
0x6AC860: mov     [ecx+1Ch], ax
0x6AC864: mov     esi, [ebp+0]
0x6AC867: cmp     word ptr [esi+1Ch], 0
0x6AC86C: jnz     loc_6AC924
0x6AC872: test    esi, esi
0x6AC874: jz      short loc_6AC886
0x6AC876: mov     ecx, esi
0x6AC878: call    sub_6B6700
0x6AC87D: push    esi
0x6AC87E: call    FormHeapFree
0x6AC883: add     esp, 4
0x6AC886: mov     dword ptr [ebp+0], 0
0x6AC88D: mov     eax, 80004005h
0x6AC892: jmp     loc_6AC9BE
0x6AC897: mov     esi, [ebp+0]
0x6AC89A: test    esi, esi
0x6AC89C: jz      short loc_6AC91D
0x6AC89E: lea     eax, [esp+15Ch+Str]
0x6AC8A2: lea     edx, [eax+1]
0x6AC8A5: mov     cl, [eax]
0x6AC8A7: add     eax, 1
0x6AC8AA: test    cl, cl
0x6AC8AC: jnz     short loc_6AC8A5
0x6AC8AE: sub     eax, edx
0x6AC8B0: cmp     byte ptr [esp+eax+15Ch+var_118+3], 5Ch ; '\'
0x6AC8B5: jnz     short loc_6AC8C3
0x6AC8B7: lea     edx, [esp+15Ch+Str]
0x6AC8BB: push    edx; Str
0x6AC8BC: mov     ecx, edi
0x6AC8BE: call    sub_6A9CD0
0x6AC8C3: lea     eax, [esp+15Ch+var_138]
0x6AC8C7: push    eax; int
0x6AC8C8: push    ebx; int
0x6AC8C9: lea     ecx, [esp+164h+Str]
0x6AC8CD: push    ecx; pszFileName
0x6AC8CE: lea     edx, [esp+168h+var_144]
0x6AC8D2: push    edx; int
0x6AC8D3: mov     ecx, edi
0x6AC8D5: call    sub_6AABD0
0x6AC8DA: mov     ecx, [ebp+0]
0x6AC8DD: movzx   eax, ax
0x6AC8E0: mov     [ecx+1Ch], ax
0x6AC8E4: mov     esi, [ebp+0]
0x6AC8E7: cmp     word ptr [esi+1Ch], 0
0x6AC8EC: jnz     short loc_6AC91D
0x6AC8EE: mov     eax, [esp+15Ch+Str1]
0x6AC8F2: lea     edx, [esp+15Ch+var_138]
0x6AC8F6: push    edx; int
0x6AC8F7: push    ebx; int
0x6AC8F8: push    eax; pszFileName
0x6AC8F9: lea     ecx, [esp+168h+var_144]
0x6AC8FD: push    ecx; int
0x6AC8FE: mov     ecx, edi
0x6AC900: call    sub_6AABD0
0x6AC905: mov     edx, [ebp+0]
0x6AC908: movzx   eax, ax
0x6AC90B: mov     [edx+1Ch], ax
0x6AC90F: mov     esi, [ebp+0]
0x6AC912: cmp     word ptr [esi+1Ch], 0
0x6AC917: jz      loc_6AC872
0x6AC91D: mov     eax, [esp+15Ch+var_130]
0x6AC921: mov     [esi+8], eax
0x6AC924: cmp     byte ptr ds:0B161C0h, 0
0x6AC92B: jz      short loc_6AC98B
0x6AC92D: mov     ecx, [ebp+0]
0x6AC930: call    sub_6B67D0
0x6AC935: test    eax, eax
0x6AC937: jnz     short loc_6AC98B
0x6AC939: lea     ecx, [esp+15Ch+Str]
0x6AC93D: push    offset SubStr; SubStr
0x6AC942: push    ecx; Str
0x6AC943: call    _strstr
0x6AC948: mov     edi, eax
0x6AC94A: lea     esi, [edi+1]
0x6AC94D: push    offset SubStr; SubStr
0x6AC952: push    esi; Str
0x6AC953: call    _strstr
0x6AC958: add     esp, 10h
0x6AC95B: test    eax, eax
0x6AC95D: jz      short loc_6AC982
0x6AC95F: nop
0x6AC960: push    offset SubStr; SubStr
0x6AC965: push    esi; Str
0x6AC966: call    _strstr
0x6AC96B: mov     edi, eax
0x6AC96D: lea     esi, [edi+1]
0x6AC970: push    offset SubStr; SubStr
0x6AC975: push    esi; Str
0x6AC976: call    _strstr
0x6AC97B: add     esp, 10h
0x6AC97E: test    eax, eax
0x6AC980: jnz     short loc_6AC960
0x6AC982: mov     ecx, [ebp+0]
0x6AC985: push    edi
0x6AC986: call    sub_6B6770
0x6AC98B: mov     ecx, [ebp+0]
0x6AC98E: test    ecx, ecx
0x6AC990: jz      short loc_6AC9A0
0x6AC992: mov     eax, [esp+15Ch+var_144]
0x6AC996: test    eax, eax
0x6AC998: jz      short loc_6AC9A0
0x6AC99A: push    eax
0x6AC99B: call    sub_6B67F0
0x6AC9A0: mov     ecx, [ebp+0]
0x6AC9A3: fld     dword ptr [ecx+3Ch]
0x6AC9A6: push    ecx
0x6AC9A7: fstp    dword ptr [esp+160h+var_160]; float
0x6AC9AA: call    sub_6B6F20
0x6AC9AF: mov     edx, [esp+15Ch+var_128]
0x6AC9B3: push    edx
0x6AC9B4: call    FormHeapFree
0x6AC9B9: add     esp, 4
0x6AC9BC: xor     eax, eax
0x6AC9BE: mov     ecx, [esp+15Ch+var_C]
0x6AC9C5: mov     large fs:0, ecx
0x6AC9CC: pop     ecx
0x6AC9CD: pop     edi
0x6AC9CE: pop     esi
0x6AC9CF: pop     ebp
0x6AC9D0: pop     ebx
0x6AC9D1: mov     ecx, [esp+148h+var_10]
0x6AC9D8: xor     ecx, esp
0x6AC9DA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6AC9DF: add     esp, 148h
0x6AC9E5: retn    10h
