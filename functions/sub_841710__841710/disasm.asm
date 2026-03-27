0x841710: push    0FFFFFFFFh
0x841712: push    offset SEH_882120
0x841717: mov     eax, large fs:0
0x84171D: push    eax
0x84171E: push    ebx
0x84171F: push    ebp
0x841720: push    esi
0x841721: push    edi
0x841722: mov     eax, ds:0B30AACh
0x841727: xor     eax, esp
0x841729: push    eax
0x84172A: lea     eax, [esp+20h+var_C]
0x84172E: mov     large fs:0, eax
0x841734: mov     edi, ecx
0x841736: mov     ebp, [esp+20h+arg_8]
0x84173A: mov     esi, [ebp+0Ch]
0x84173D: mov     ebx, ds:0B4590Ch
0x841743: push    esi
0x841744: call    sub_848E50
0x841749: mov     ebp, [ebp+10h]
0x84174C: mov     ecx, [esp+20h+arg_0]
0x841750: mov     eax, [edi]
0x841752: mov     edx, [eax+0BCh]
0x841758: push    ebp
0x841759: push    esi
0x84175A: push    ecx
0x84175B: mov     ecx, edi
0x84175D: call    edx
0x84175F: mov     esi, [esp+20h+arg_C]
0x841763: mov     eax, [esi+0A8h]
0x841769: mov     ds:0B46628h, eax
0x84176E: mov     ecx, [esi+0ACh]
0x841774: mov     ds:0B4662Ch, ecx
0x84177A: mov     edx, [esi+0B0h]
0x841780: mov     ds:0B46630h, edx
0x841786: mov     eax, [esi+0B4h]
0x84178C: mov     ds:0B46634h, eax
0x841791: mov     ecx, [ebx+24h]
0x841794: mov     ebp, [ecx]
0x841796: mov     edx, [esi]
0x841798: mov     eax, [edx+88h]
0x84179E: push    0
0x8417A0: mov     ecx, esi
0x8417A2: mov     [esp+24h+arg_8], ebp
0x8417A6: call    eax
0x8417A8: mov     ebp, [ebp+4]
0x8417AB: cmp     ebp, eax
0x8417AD: mov     [esp+20h+arg_0], eax
0x8417B1: jz      short loc_8417ED
0x8417B3: test    ebp, ebp
0x8417B5: jz      short loc_8417D8
0x8417B7: lea     ecx, [ebp+4]
0x8417BA: push    ecx; lpAddend
0x8417BB: call    dword ptr ds:0A2807Ch
0x8417C1: test    eax, eax
0x8417C3: jnz     short loc_8417D4
0x8417C5: test    ebp, ebp
0x8417C7: jz      short loc_8417D4
0x8417C9: mov     edx, [ebp+0]
0x8417CC: mov     eax, [edx]
0x8417CE: push    1
0x8417D0: mov     ecx, ebp
0x8417D2: call    eax
0x8417D4: mov     eax, [esp+20h+arg_0]
0x8417D8: test    eax, eax
0x8417DA: mov     ecx, [esp+20h+arg_8]
0x8417DE: mov     [ecx+4], eax
0x8417E1: jz      short loc_8417ED
0x8417E3: add     eax, 4
0x8417E6: push    eax; lpAddend
0x8417E7: call    dword ptr ds:0A28078h
0x8417ED: mov     edx, [esp+20h+arg_8]
0x8417F1: push    esi
0x8417F2: push    edx
0x8417F3: mov     ecx, edi
0x8417F5: call    sub_848FA0
0x8417FA: mov     eax, [ebx+24h]
0x8417FD: mov     ebp, [eax+4]
0x841800: push    0
0x841802: push    esi
0x841803: mov     ecx, edi
0x841805: mov     [esp+28h+arg_8], ebp
0x841809: call    sub_848FD0
0x84180E: mov     ebp, [ebp+4]
0x841811: cmp     ebp, eax
0x841813: mov     [esp+20h+arg_0], eax
0x841817: jz      short loc_841853
0x841819: test    ebp, ebp
0x84181B: jz      short loc_84183E
0x84181D: lea     ecx, [ebp+4]
0x841820: push    ecx; lpAddend
0x841821: call    dword ptr ds:0A2807Ch
0x841827: test    eax, eax
0x841829: jnz     short loc_84183A
0x84182B: test    ebp, ebp
0x84182D: jz      short loc_84183A
0x84182F: mov     edx, [ebp+0]
0x841832: mov     eax, [edx]
0x841834: push    1
0x841836: mov     ecx, ebp
0x841838: call    eax
0x84183A: mov     eax, [esp+20h+arg_0]
0x84183E: test    eax, eax
0x841840: mov     ecx, [esp+20h+arg_8]
0x841844: mov     [ecx+4], eax
0x841847: jz      short loc_841853
0x841849: add     eax, 4
0x84184C: push    eax; lpAddend
0x84184D: call    dword ptr ds:0A28078h
0x841853: mov     edx, [esp+20h+arg_8]
0x841857: push    esi
0x841858: push    edx
0x841859: mov     ecx, edi
0x84185B: call    sub_848FA0
0x841860: mov     eax, [ebx+24h]
0x841863: mov     ebp, [eax+10h]
0x841866: mov     edx, [esi]
0x841868: mov     eax, [edx+88h]
0x84186E: push    1
0x841870: mov     ecx, esi
0x841872: mov     [esp+24h+arg_8], ebp
0x841876: call    eax
0x841878: mov     ebp, [ebp+4]
0x84187B: cmp     ebp, eax
0x84187D: mov     [esp+20h+arg_0], eax
0x841881: jz      short loc_8418BD
0x841883: test    ebp, ebp
0x841885: jz      short loc_8418A8
0x841887: lea     ecx, [ebp+4]
0x84188A: push    ecx; lpAddend
0x84188B: call    dword ptr ds:0A2807Ch
0x841891: test    eax, eax
0x841893: jnz     short loc_8418A4
0x841895: test    ebp, ebp
0x841897: jz      short loc_8418A4
0x841899: mov     edx, [ebp+0]
0x84189C: mov     eax, [edx]
0x84189E: push    1
0x8418A0: mov     ecx, ebp
0x8418A2: call    eax
0x8418A4: mov     eax, [esp+20h+arg_0]
0x8418A8: test    eax, eax
0x8418AA: mov     ecx, [esp+20h+arg_8]
0x8418AE: mov     [ecx+4], eax
0x8418B1: jz      short loc_8418BD
0x8418B3: add     eax, 4
0x8418B6: push    eax; lpAddend
0x8418B7: call    dword ptr ds:0A28078h
0x8418BD: mov     edx, [esp+20h+arg_8]
0x8418C1: push    esi
0x8418C2: push    edx
0x8418C3: mov     ecx, edi
0x8418C5: call    sub_848FA0
0x8418CA: mov     ecx, [ebx+24h]
0x8418CD: mov     esi, [ecx+18h]
0x8418D0: mov     eax, ds:0B43108h
0x8418D5: mov     ebp, [esi+4]
0x8418D8: add     esi, 4
0x8418DB: cmp     ebp, eax
0x8418DD: mov     [esp+20h+arg_8], eax
0x8418E1: jz      short loc_841918
0x8418E3: test    ebp, ebp
0x8418E5: jz      short loc_841908
0x8418E7: lea     edx, [ebp+4]
0x8418EA: push    edx; lpAddend
0x8418EB: call    dword ptr ds:0A2807Ch
0x8418F1: test    eax, eax
0x8418F3: jnz     short loc_841904
0x8418F5: test    ebp, ebp
0x8418F7: jz      short loc_841904
0x8418F9: mov     eax, [ebp+0]
0x8418FC: mov     edx, [eax]
0x8418FE: push    1
0x841900: mov     ecx, ebp
0x841902: call    edx
0x841904: mov     eax, [esp+20h+arg_8]
0x841908: test    eax, eax
0x84190A: mov     [esi], eax
0x84190C: jz      short loc_841918
0x84190E: add     eax, 4
0x841911: push    eax; lpAddend
0x841912: call    dword ptr ds:0A28078h
0x841918: mov     eax, [ebx+24h]
0x84191B: mov     ebp, [eax+1Ch]
0x84191E: mov     eax, ds:0B4310Ch
0x841923: mov     esi, [ebp+4]
0x841926: cmp     esi, eax
0x841928: mov     ecx, eax
0x84192A: mov     [esp+20h+arg_8], ecx
0x84192E: jz      short loc_841965
0x841930: test    esi, esi
0x841932: jz      short loc_841954
0x841934: lea     ecx, [esi+4]
0x841937: push    ecx; lpAddend
0x841938: call    dword ptr ds:0A2807Ch
0x84193E: test    eax, eax
0x841940: jnz     short loc_841950
0x841942: test    esi, esi
0x841944: jz      short loc_841950
0x841946: mov     edx, [esi]
0x841948: mov     eax, [edx]
0x84194A: push    1
0x84194C: mov     ecx, esi
0x84194E: call    eax
0x841950: mov     ecx, [esp+20h+arg_8]
0x841954: test    ecx, ecx
0x841956: mov     [ebp+4], ecx
0x841959: jz      short loc_841965
0x84195B: add     ecx, 4
0x84195E: push    ecx; lpAddend
0x84195F: call    dword ptr ds:0A28078h
0x841965: mov     esi, 1
0x84196A: add     [ebx+60h], esi
0x84196D: mov     [esp+20h+arg_8], ebx
0x841971: mov     edx, [edi+38h]
0x841974: lea     ecx, [esp+20h+arg_8]
0x841978: push    ecx
0x841979: push    edx
0x84197A: lea     ecx, [edi+40h]
0x84197D: mov     [esp+28h+var_4], 0
0x841985: call    sub_76CE40
0x84198A: or      eax, 0FFFFFFFFh
0x84198D: add     [ebx+60h], eax
0x841990: mov     [esp+20h+var_4], eax
0x841994: jnz     short loc_84199D
0x841996: mov     ecx, ebx
0x841998: call    sub_7604D0
0x84199D: add     [edi+38h], esi
0x8419A0: mov     ecx, [esp+20h+var_C]
0x8419A4: mov     large fs:0, ecx
0x8419AB: pop     ecx
0x8419AC: pop     edi
0x8419AD: pop     esi
0x8419AE: pop     ebp
0x8419AF: pop     ebx
0x8419B0: add     esp, 0Ch
0x8419B3: retn    10h
