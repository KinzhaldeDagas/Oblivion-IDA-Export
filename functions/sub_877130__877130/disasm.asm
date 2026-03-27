0x877130: push    0FFFFFFFFh
0x877132: push    offset SEH_879360
0x877137: mov     eax, large fs:0
0x87713D: push    eax
0x87713E: push    ecx
0x87713F: push    ebx
0x877140: push    ebp
0x877141: push    esi
0x877142: push    edi
0x877143: mov     eax, ds:0B30AACh
0x877148: xor     eax, esp
0x87714A: push    eax
0x87714B: lea     eax, [esp+24h+var_C]
0x87714F: mov     large fs:0, eax
0x877155: mov     ebx, ecx
0x877157: mov     [esp+24h+var_10], ebx
0x87715B: mov     eax, [esp+24h+arg_8]
0x87715F: mov     edi, [eax+0Ch]
0x877162: mov     esi, ds:0B47694h
0x877168: push    edi
0x877169: call    sub_848E50
0x87716E: mov     edx, [ebx]
0x877170: mov     eax, [esp+24h+arg_0]
0x877174: mov     edx, [edx+0BCh]
0x87717A: push    0
0x87717C: push    edi
0x87717D: push    eax
0x87717E: mov     ecx, ebx
0x877180: call    edx
0x877182: mov     eax, [esi+24h]
0x877185: mov     ebx, [esp+24h+arg_C]
0x877189: mov     edi, [eax]
0x87718B: mov     edx, [ebx]
0x87718D: mov     eax, [edx+88h]
0x877193: push    0
0x877195: mov     ecx, ebx
0x877197: mov     [esp+28h+arg_8], edi
0x87719B: call    eax
0x87719D: mov     edi, [edi+4]
0x8771A0: mov     ebp, eax
0x8771A2: cmp     edi, ebp
0x8771A4: jz      short loc_8771DB
0x8771A6: test    edi, edi
0x8771A8: jz      short loc_8771C6
0x8771AA: lea     ecx, [edi+4]
0x8771AD: push    ecx; lpAddend
0x8771AE: call    dword ptr ds:0A2807Ch
0x8771B4: test    eax, eax
0x8771B6: jnz     short loc_8771C6
0x8771B8: test    edi, edi
0x8771BA: jz      short loc_8771C6
0x8771BC: mov     edx, [edi]
0x8771BE: mov     eax, [edx]
0x8771C0: push    1
0x8771C2: mov     ecx, edi
0x8771C4: call    eax
0x8771C6: test    ebp, ebp
0x8771C8: mov     ecx, [esp+24h+arg_8]
0x8771CC: mov     [ecx+4], ebp
0x8771CF: jz      short loc_8771DB
0x8771D1: add     ebp, 4
0x8771D4: push    ebp; lpAddend
0x8771D5: call    dword ptr ds:0A28078h
0x8771DB: mov     edx, [esi+24h]
0x8771DE: mov     edi, [edx+4]
0x8771E1: mov     ecx, [esp+24h+var_10]
0x8771E5: push    0
0x8771E7: push    ebx
0x8771E8: mov     [esp+2Ch+arg_8], edi
0x8771EC: call    sub_848FD0
0x8771F1: mov     edi, [edi+4]
0x8771F4: mov     ebp, eax
0x8771F6: cmp     edi, ebp
0x8771F8: jz      short loc_87722F
0x8771FA: test    edi, edi
0x8771FC: jz      short loc_87721A
0x8771FE: lea     eax, [edi+4]
0x877201: push    eax; lpAddend
0x877202: call    dword ptr ds:0A2807Ch
0x877208: test    eax, eax
0x87720A: jnz     short loc_87721A
0x87720C: test    edi, edi
0x87720E: jz      short loc_87721A
0x877210: mov     edx, [edi]
0x877212: mov     eax, [edx]
0x877214: push    1
0x877216: mov     ecx, edi
0x877218: call    eax
0x87721A: test    ebp, ebp
0x87721C: mov     ecx, [esp+24h+arg_8]
0x877220: mov     [ecx+4], ebp
0x877223: jz      short loc_87722F
0x877225: add     ebp, 4
0x877228: push    ebp; lpAddend
0x877229: call    dword ptr ds:0A28078h
0x87722F: mov     edx, [esi+24h]
0x877232: mov     eax, [ebx]
0x877234: mov     ebp, [edx+10h]
0x877237: mov     edx, [eax+90h]
0x87723D: push    0
0x87723F: mov     ecx, ebx
0x877241: call    edx
0x877243: mov     edi, [ebp+4]
0x877246: mov     ebx, eax
0x877248: cmp     edi, ebx
0x87724A: jz      short loc_87727D
0x87724C: test    edi, edi
0x87724E: jz      short loc_87726C
0x877250: lea     eax, [edi+4]
0x877253: push    eax; lpAddend
0x877254: call    dword ptr ds:0A2807Ch
0x87725A: test    eax, eax
0x87725C: jnz     short loc_87726C
0x87725E: test    edi, edi
0x877260: jz      short loc_87726C
0x877262: mov     edx, [edi]
0x877264: mov     eax, [edx]
0x877266: push    1
0x877268: mov     ecx, edi
0x87726A: call    eax
0x87726C: test    ebx, ebx
0x87726E: mov     [ebp+4], ebx
0x877271: jz      short loc_87727D
0x877273: add     ebx, 4
0x877276: push    ebx; lpAddend
0x877277: call    dword ptr ds:0A28078h
0x87727D: mov     ecx, [esi+24h]
0x877280: mov     edi, [ecx+14h]
0x877283: mov     eax, ds:0B43110h
0x877288: mov     ebx, [edi+4]
0x87728B: add     edi, 4
0x87728E: cmp     ebx, eax
0x877290: mov     ebp, eax
0x877292: jz      short loc_8772C4
0x877294: test    ebx, ebx
0x877296: jz      short loc_8772B4
0x877298: lea     edx, [ebx+4]
0x87729B: push    edx; lpAddend
0x87729C: call    dword ptr ds:0A2807Ch
0x8772A2: test    eax, eax
0x8772A4: jnz     short loc_8772B4
0x8772A6: test    ebx, ebx
0x8772A8: jz      short loc_8772B4
0x8772AA: mov     eax, [ebx]
0x8772AC: mov     edx, [eax]
0x8772AE: push    1
0x8772B0: mov     ecx, ebx
0x8772B2: call    edx
0x8772B4: test    ebp, ebp
0x8772B6: mov     [edi], ebp
0x8772B8: jz      short loc_8772C4
0x8772BA: add     ebp, 4
0x8772BD: push    ebp; lpAddend
0x8772BE: call    dword ptr ds:0A28078h
0x8772C4: mov     ecx, [esi+24h]
0x8772C7: mov     edi, [ecx+18h]
0x8772CA: mov     eax, ds:0B43108h
0x8772CF: mov     ebx, [edi+4]
0x8772D2: add     edi, 4
0x8772D5: cmp     ebx, eax
0x8772D7: mov     ebp, eax
0x8772D9: jz      short loc_87730B
0x8772DB: test    ebx, ebx
0x8772DD: jz      short loc_8772FB
0x8772DF: lea     edx, [ebx+4]
0x8772E2: push    edx; lpAddend
0x8772E3: call    dword ptr ds:0A2807Ch
0x8772E9: test    eax, eax
0x8772EB: jnz     short loc_8772FB
0x8772ED: test    ebx, ebx
0x8772EF: jz      short loc_8772FB
0x8772F1: mov     eax, [ebx]
0x8772F3: mov     edx, [eax]
0x8772F5: push    1
0x8772F7: mov     ecx, ebx
0x8772F9: call    edx
0x8772FB: test    ebp, ebp
0x8772FD: mov     [edi], ebp
0x8772FF: jz      short loc_87730B
0x877301: add     ebp, 4
0x877304: push    ebp; lpAddend
0x877305: call    dword ptr ds:0A28078h
0x87730B: mov     eax, [esi+24h]
0x87730E: mov     ebx, [eax+1Ch]
0x877311: mov     eax, ds:0B4310Ch
0x877316: mov     edi, [ebx+4]
0x877319: cmp     edi, eax
0x87731B: mov     ebp, eax
0x87731D: jz      short loc_877350
0x87731F: test    edi, edi
0x877321: jz      short loc_87733F
0x877323: lea     ecx, [edi+4]
0x877326: push    ecx; lpAddend
0x877327: call    dword ptr ds:0A2807Ch
0x87732D: test    eax, eax
0x87732F: jnz     short loc_87733F
0x877331: test    edi, edi
0x877333: jz      short loc_87733F
0x877335: mov     edx, [edi]
0x877337: mov     eax, [edx]
0x877339: push    1
0x87733B: mov     ecx, edi
0x87733D: call    eax
0x87733F: test    ebp, ebp
0x877341: mov     [ebx+4], ebp
0x877344: jz      short loc_877350
0x877346: add     ebp, 4
0x877349: push    ebp; lpAddend
0x87734A: call    dword ptr ds:0A28078h
0x877350: mov     ebx, 1
0x877355: add     [esi+60h], ebx
0x877358: mov     [esp+24h+arg_8], esi
0x87735C: mov     edi, [esp+24h+var_10]
0x877360: mov     edx, [edi+38h]
0x877363: lea     ecx, [esp+24h+arg_8]
0x877367: push    ecx
0x877368: push    edx
0x877369: lea     ecx, [edi+40h]
0x87736C: mov     [esp+2Ch+var_4], 0
0x877374: call    sub_76CE40
0x877379: or      eax, 0FFFFFFFFh
0x87737C: add     [esi+60h], eax
0x87737F: mov     [esp+24h+var_4], eax
0x877383: jnz     short loc_87738C
0x877385: mov     ecx, esi
0x877387: call    sub_7604D0
0x87738C: add     [edi+38h], ebx
0x87738F: mov     ecx, [esp+24h+var_C]
0x877393: mov     large fs:0, ecx
0x87739A: pop     ecx
0x87739B: pop     edi
0x87739C: pop     esi
0x87739D: pop     ebp
0x87739E: pop     ebx
0x87739F: add     esp, 10h
0x8773A2: retn    10h
