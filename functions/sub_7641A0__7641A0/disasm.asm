0x7641A0: sub     esp, 8
0x7641A3: push    ebx
0x7641A4: push    ebp
0x7641A5: push    esi
0x7641A6: push    edi
0x7641A7: mov     esi, ecx
0x7641A9: xor     ebx, ebx
0x7641AB: push    130h
0x7641B0: lea     eax, [esi+284h]
0x7641B6: push    ebx
0x7641B7: push    eax
0x7641B8: mov     [esi+280h], ebx
0x7641BE: call    __memset
0x7641C3: fld1
0x7641C5: fstp    dword ptr [esi+5D8h]
0x7641CB: mov     [esi+3B4h], ebx
0x7641D1: mov     [esi+3BCh], bl
0x7641D7: fld     dword ptr ds:0A2FAACh
0x7641DD: mov     [esi+5BCh], ebx
0x7641E3: mov     [esi+3B8h], ebx
0x7641E9: mov     [esi+5C4h], ebx
0x7641EF: mov     [esi+5C8h], bl
0x7641F5: mov     [esi+5C9h], bl
0x7641FB: mov     [esi+6D8h], ebx
0x764201: mov     [esi+6DCh], ebx
0x764207: mov     [esi+6E0h], ebx
0x76420D: mov     [esi+6E4h], ebx
0x764213: mov     [esi+6E8h], bl
0x764219: mov     [esi+6E9h], bl
0x76421F: mov     [esi+894h], ebx
0x764225: mov     [esi+898h], bl
0x76422B: mov     [esi+899h], bl
0x764231: mov     [esi+6ECh], ebx
0x764237: mov     [esi+6F0h], bl
0x76423D: mov     dword ptr [esi+5D4h], 0FF808080h
0x764247: mov     [esi+5DCh], ebx
0x76424D: mov     [esi+5E0h], ebx
0x764253: mov     [esi+5E4h], bl
0x764259: mov     ebp, 1
0x76425E: mov     [esi+5C0h], ebp
0x764264: mov     ecx, ds:0B258D0h
0x76426A: mov     [esi+628h], ecx
0x764270: mov     edx, ds:0B258D4h
0x764276: mov     [esi+62Ch], edx
0x76427C: mov     eax, ds:0B258D8h
0x764281: mov     [esi+630h], eax
0x764287: mov     ecx, ds:0B258DCh
0x76428D: mov     [esi+634h], ecx
0x764293: mov     edx, ds:0B258E0h
0x764299: mov     [esi+638h], edx
0x76429F: mov     eax, ds:0B258E4h
0x7642A4: mov     [esi+63Ch], eax
0x7642AA: mov     ecx, ds:0B258D0h
0x7642B0: mov     [esi+640h], ecx
0x7642B6: mov     edx, ds:0B258D4h
0x7642BC: mov     [esi+644h], edx
0x7642C2: mov     eax, ds:0B258D8h
0x7642C7: mov     [esi+648h], eax
0x7642CD: mov     ecx, ds:0B258DCh
0x7642D3: mov     [esi+64Ch], ecx
0x7642D9: mov     edx, ds:0B258E0h
0x7642DF: mov     [esi+650h], edx
0x7642E5: mov     eax, ds:0B258E4h
0x7642EA: fstp    dword ptr [esi+678h]
0x7642F0: fld     dword ptr ds:0A2FE7Ch
0x7642F6: push    40h ; '@'
0x7642F8: lea     edi, [esi+680h]
0x7642FE: fstp    dword ptr [esi+67Ch]
0x764304: push    ebx
0x764305: push    edi
0x764306: mov     [esi+654h], eax
0x76430C: call    __memset
0x764311: fld1
0x764313: fst     dword ptr [esi+6BCh]
0x764319: add     esp, 18h
0x76431C: fst     dword ptr [esi+6A8h]
0x764322: mov     [esi+614h], ebx
0x764328: fst     dword ptr [esi+694h]
0x76432E: mov     [esi+618h], ebx
0x764334: fst     dword ptr [edi]
0x764336: xor     eax, eax
0x764338: mov     [esi+6C0h], ebx
0x76433E: fldz
0x764340: mov     [esi+6C8h], ebp
0x764346: fst     dword ptr [esi+6D0h]
0x76434C: mov     [esi+6CCh], ebp
0x764352: fxch    st(1)
0x764354: mov     [esi+6C4h], ebx
0x76435A: fst     dword ptr [esi+6D4h]
0x764360: lea     ebp, [esi+864h]
0x764366: lea     edi, [esi+6F4h]
0x76436C: mov     [esp+18h+var_8], 4
0x764374: xor     eax, eax
0x764376: mov     [edi], eax
0x764378: mov     [edi+4], eax
0x76437B: mov     [edi+8], eax
0x76437E: mov     [edi+0Ch], eax
0x764381: mov     [edi+10h], eax
0x764384: mov     [edi+14h], eax
0x764387: mov     [edi+18h], eax
0x76438A: mov     [edi+1Ch], eax
0x76438D: mov     [edi+20h], eax
0x764390: mov     [edi+24h], eax
0x764393: mov     [edi+28h], eax
0x764396: mov     [edi+2Ch], eax
0x764399: mov     [edi+30h], eax
0x76439C: mov     [edi+34h], eax
0x76439F: mov     [edi+38h], eax
0x7643A2: mov     [edi+3Ch], eax
0x7643A5: mov     [edi+40h], eax
0x7643A8: mov     [edi+44h], eax
0x7643AB: mov     [edi+48h], eax
0x7643AE: mov     [edi+4Ch], eax
0x7643B1: mov     [edi+50h], eax
0x7643B4: mov     [edi+54h], eax
0x7643B7: mov     [ebp-10h], ebx
0x7643BA: mov     eax, [ebp+0]
0x7643BD: cmp     eax, ebx
0x7643BF: mov     [esp+18h+var_4], eax
0x7643C3: jz      short loc_7643EE
0x7643C5: add     eax, 4
0x7643C8: fstp    st
0x7643CA: push    eax; lpAddend
0x7643CB: fstp    st
0x7643CD: call    dword ptr ds:0A2807Ch
0x7643D3: test    eax, eax
0x7643D5: jnz     short loc_7643E7
0x7643D7: mov     ecx, [esp+18h+var_4]
0x7643DB: cmp     ecx, ebx
0x7643DD: jz      short loc_7643E7
0x7643DF: mov     edx, [ecx]
0x7643E1: mov     eax, [edx]
0x7643E3: push    1
0x7643E5: call    eax
0x7643E7: fldz
0x7643E9: mov     [ebp+0], ebx
0x7643EC: fld1
0x7643EE: add     ebp, 4
0x7643F1: add     edi, 58h ; 'X'
0x7643F4: sub     [esp+18h+var_8], 1
0x7643F9: jnz     loc_764374
0x7643FF: fxch    st(1)
0x764401: push    76h ; 'v'
0x764403: fst     dword ptr [esi+94Ch]
0x764409: push    ebx
0x76440A: fst     dword ptr [esi+95Ch]
0x764410: push    offset byte_B42070
0x764415: fstp    dword ptr [esi+96Ch]
0x76441B: mov     dword ptr [esi+874h], 16h
0x764425: mov     [esi+87Ch], ebx
0x76442B: fstp    dword ptr [esi+97Ch]
0x764431: mov     [esi+880h], ebx
0x764437: mov     [esi+8B0h], ebx
0x76443D: mov     [esi+8B4h], ebx
0x764443: mov     [esi+8B8h], ebx
0x764449: mov     [esi+8ACh], ebx
0x76444F: mov     [esi+8BCh], ebx
0x764455: mov     [esi+8A0h], ebx
0x76445B: mov     [esi+8A4h], ebx
0x764461: mov     [esi+8A8h], ebx
0x764467: mov     [esi+0A40h], ebx
0x76446D: mov     [esi+0A44h], ebx
0x764473: mov     [esi+0A48h], ebx
0x764479: mov     [esi+0A50h], ebx
0x76447F: mov     [esi+0A4Ch], bx
0x764486: mov     [esi+0A54h], ebx
0x76448C: call    __memset
0x764491: mov     al, 20h ; ' '
0x764493: mov     cl, 10h
0x764495: add     esp, 0Ch
0x764498: mov     dl, 8
0x76449A: pop     edi
0x76449B: pop     esi
0x76449C: mov     byte ptr ds:0B42084h, 18h
0x7644A3: mov     ds:0B42085h, al
0x7644A8: mov     ds:0B42086h, al
0x7644AD: mov     ds:0B42087h, cl
0x7644B3: mov     ds:0B42088h, cl
0x7644B9: mov     ds:0B42089h, cl
0x7644BF: mov     ds:0B4208Ah, cl
0x7644C5: mov     ds:0B4208Bh, dl
0x7644CB: mov     ds:0B4208Ch, dl
0x7644D1: mov     ds:0B4208Dh, cl
0x7644D7: mov     ds:0B4208Eh, cl
0x7644DD: mov     ds:0B4208Fh, al
0x7644E2: mov     ds:0B42090h, al
0x7644E7: mov     ds:0B42091h, al
0x7644EC: mov     ds:0B42092h, al
0x7644F1: mov     ds:0B42093h, al
0x7644F6: mov     byte ptr ds:0B42094h, 40h ; '@'
0x7644FD: mov     ds:0B42098h, cl
0x764503: mov     ds:0B42099h, dl
0x764509: mov     ds:0B420A2h, dl
0x76450F: mov     ds:0B420A3h, cl
0x764515: mov     ds:0B420A4h, dl
0x76451B: mov     ds:0B420ACh, cl
0x764521: mov     ds:0B420ADh, cl
0x764527: mov     ds:0B420AEh, al
0x76452C: mov     ds:0B420AFh, al
0x764531: mov     ds:0B420B0h, al
0x764536: mov     ds:0B420B3h, al
0x76453B: mov     ds:0B420B6h, cl
0x764541: mov     ds:0B420B7h, al
0x764546: mov     ds:0B420B9h, cl
0x76454C: mov     ds:0B420BBh, al
0x764551: mov     ds:0B420BDh, al
0x764556: mov     ds:0B420BFh, al
0x76455B: mov     ds:0B420C0h, cl
0x764561: mov     ds:0B420C2h, al
0x764566: mov     ds:0B420C3h, al
0x76456B: mov     ds:0B420C1h, cl
0x764571: mov     ds:0B420D5h, cl
0x764577: mov     ds:0B420D6h, al
0x76457C: mov     byte ptr ds:0B420DEh, 40h ; '@'
0x764583: mov     ds:0B420DFh, cl
0x764589: mov     ds:0B420E0h, al
0x76458E: mov     byte ptr ds:0B420E1h, 40h ; '@'
0x764595: mov     ds:0B420E2h, al
0x76459A: mov     byte ptr ds:0B420E3h, 40h ; '@'
0x7645A1: mov     byte ptr ds:0B420E4h, 80h ; '€'
0x7645A8: mov     ds:0B420E5h, cl
0x7645AE: pop     ebp
0x7645AF: pop     ebx
0x7645B0: add     esp, 8
0x7645B3: retn
