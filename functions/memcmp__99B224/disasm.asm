0x99B224: push    ebp
0x99B225: mov     ebp, esp
0x99B227: push    esi
0x99B228: push    edi
0x99B229: mov     edi, [ebp+Size]
0x99B22C: mov     eax, edi
0x99B22E: sub     eax, 0
0x99B231: jz      loc_99C81C
0x99B237: dec     eax
0x99B238: jz      loc_99C80B
0x99B23E: dec     eax
0x99B23F: jz      loc_99C7DD
0x99B245: dec     eax
0x99B246: jz      loc_99C795
0x99B24C: dec     eax
0x99B24D: jz      loc_99C70C
0x99B253: mov     ecx, [ebp+Buf2]
0x99B256: mov     eax, [ebp+Buf1]
0x99B259: push    ebx
0x99B25A: push    20h ; ' '
0x99B25C: pop     edx
0x99B25D: jmp     loc_99B6D4
0x99B262: mov     esi, [eax]
0x99B264: cmp     esi, [ecx]
0x99B266: jz      short loc_99B2E4
0x99B268: movzx   esi, byte ptr [eax]
0x99B26B: movzx   ebx, byte ptr [ecx]
0x99B26E: sub     esi, ebx
0x99B270: jz      short loc_99B287
0x99B272: xor     ebx, ebx
0x99B274: test    esi, esi
0x99B276: setnle  bl
0x99B279: lea     ebx, [ebx+ebx-1]
0x99B27D: mov     esi, ebx
0x99B27F: test    esi, esi
0x99B281: jnz     loc_99B6F0
0x99B287: movzx   esi, byte ptr [eax+1]
0x99B28B: movzx   ebx, byte ptr [ecx+1]
0x99B28F: sub     esi, ebx
0x99B291: jz      short loc_99B2A8
0x99B293: xor     ebx, ebx
0x99B295: test    esi, esi
0x99B297: setnle  bl
0x99B29A: lea     ebx, [ebx+ebx-1]
0x99B29E: mov     esi, ebx
0x99B2A0: test    esi, esi
0x99B2A2: jnz     loc_99B6F0
0x99B2A8: movzx   esi, byte ptr [eax+2]
0x99B2AC: movzx   ebx, byte ptr [ecx+2]
0x99B2B0: sub     esi, ebx
0x99B2B2: jz      short loc_99B2C9
0x99B2B4: xor     ebx, ebx
0x99B2B6: test    esi, esi
0x99B2B8: setnle  bl
0x99B2BB: lea     ebx, [ebx+ebx-1]
0x99B2BF: mov     esi, ebx
0x99B2C1: test    esi, esi
0x99B2C3: jnz     loc_99B6F0
0x99B2C9: movzx   esi, byte ptr [eax+3]
0x99B2CD: movzx   ebx, byte ptr [ecx+3]
0x99B2D1: sub     esi, ebx
0x99B2D3: jz      short loc_99B2E6
0x99B2D5: xor     ebx, ebx
0x99B2D7: test    esi, esi
0x99B2D9: setnle  bl
0x99B2DC: lea     ebx, [ebx+ebx-1]
0x99B2E0: mov     esi, ebx
0x99B2E2: jmp     short loc_99B2E6
0x99B2E4: xor     esi, esi
0x99B2E6: test    esi, esi
0x99B2E8: jnz     loc_99B6F0
0x99B2EE: mov     esi, [eax+4]
0x99B2F1: cmp     esi, [ecx+4]
0x99B2F4: jz      short loc_99B374
0x99B2F6: movzx   esi, byte ptr [eax+4]
0x99B2FA: movzx   ebx, byte ptr [ecx+4]
0x99B2FE: sub     esi, ebx
0x99B300: jz      short loc_99B317
0x99B302: xor     ebx, ebx
0x99B304: test    esi, esi
0x99B306: setnle  bl
0x99B309: lea     ebx, [ebx+ebx-1]
0x99B30D: mov     esi, ebx
0x99B30F: test    esi, esi
0x99B311: jnz     loc_99B6F0
0x99B317: movzx   esi, byte ptr [eax+5]
0x99B31B: movzx   ebx, byte ptr [ecx+5]
0x99B31F: sub     esi, ebx
0x99B321: jz      short loc_99B338
0x99B323: xor     ebx, ebx
0x99B325: test    esi, esi
0x99B327: setnle  bl
0x99B32A: lea     ebx, [ebx+ebx-1]
0x99B32E: mov     esi, ebx
0x99B330: test    esi, esi
0x99B332: jnz     loc_99B6F0
0x99B338: movzx   esi, byte ptr [eax+6]
0x99B33C: movzx   ebx, byte ptr [ecx+6]
0x99B340: sub     esi, ebx
0x99B342: jz      short loc_99B359
0x99B344: xor     ebx, ebx
0x99B346: test    esi, esi
0x99B348: setnle  bl
0x99B34B: lea     ebx, [ebx+ebx-1]
0x99B34F: mov     esi, ebx
0x99B351: test    esi, esi
0x99B353: jnz     loc_99B6F0
0x99B359: movzx   esi, byte ptr [eax+7]
0x99B35D: movzx   ebx, byte ptr [ecx+7]
0x99B361: sub     esi, ebx
0x99B363: jz      short loc_99B376
0x99B365: xor     ebx, ebx
0x99B367: test    esi, esi
0x99B369: setnle  bl
0x99B36C: lea     ebx, [ebx+ebx-1]
0x99B370: mov     esi, ebx
0x99B372: jmp     short loc_99B376
0x99B374: xor     esi, esi
0x99B376: test    esi, esi
0x99B378: jnz     loc_99B6F0
0x99B37E: mov     esi, [eax+8]
0x99B381: cmp     esi, [ecx+8]
0x99B384: jz      short loc_99B404
0x99B386: movzx   esi, byte ptr [eax+8]
0x99B38A: movzx   ebx, byte ptr [ecx+8]
0x99B38E: sub     esi, ebx
0x99B390: jz      short loc_99B3A7
0x99B392: xor     ebx, ebx
0x99B394: test    esi, esi
0x99B396: setnle  bl
0x99B399: lea     ebx, [ebx+ebx-1]
0x99B39D: mov     esi, ebx
0x99B39F: test    esi, esi
0x99B3A1: jnz     loc_99B6F0
0x99B3A7: movzx   esi, byte ptr [eax+9]
0x99B3AB: movzx   ebx, byte ptr [ecx+9]
0x99B3AF: sub     esi, ebx
0x99B3B1: jz      short loc_99B3C8
0x99B3B3: xor     ebx, ebx
0x99B3B5: test    esi, esi
0x99B3B7: setnle  bl
0x99B3BA: lea     ebx, [ebx+ebx-1]
0x99B3BE: mov     esi, ebx
0x99B3C0: test    esi, esi
0x99B3C2: jnz     loc_99B6F0
0x99B3C8: movzx   esi, byte ptr [eax+0Ah]
0x99B3CC: movzx   ebx, byte ptr [ecx+0Ah]
0x99B3D0: sub     esi, ebx
0x99B3D2: jz      short loc_99B3E9
0x99B3D4: xor     ebx, ebx
0x99B3D6: test    esi, esi
0x99B3D8: setnle  bl
0x99B3DB: lea     ebx, [ebx+ebx-1]
0x99B3DF: mov     esi, ebx
0x99B3E1: test    esi, esi
0x99B3E3: jnz     loc_99B6F0
0x99B3E9: movzx   esi, byte ptr [eax+0Bh]
0x99B3ED: movzx   ebx, byte ptr [ecx+0Bh]
0x99B3F1: sub     esi, ebx
0x99B3F3: jz      short loc_99B406
0x99B3F5: xor     ebx, ebx
0x99B3F7: test    esi, esi
0x99B3F9: setnle  bl
0x99B3FC: lea     ebx, [ebx+ebx-1]
0x99B400: mov     esi, ebx
0x99B402: jmp     short loc_99B406
0x99B404: xor     esi, esi
0x99B406: test    esi, esi
0x99B408: jnz     loc_99B6F0
0x99B40E: mov     esi, [eax+0Ch]
0x99B411: cmp     esi, [ecx+0Ch]
0x99B414: jz      short loc_99B494
0x99B416: movzx   esi, byte ptr [eax+0Ch]
0x99B41A: movzx   ebx, byte ptr [ecx+0Ch]
0x99B41E: sub     esi, ebx
0x99B420: jz      short loc_99B437
0x99B422: xor     ebx, ebx
0x99B424: test    esi, esi
0x99B426: setnle  bl
0x99B429: lea     ebx, [ebx+ebx-1]
0x99B42D: mov     esi, ebx
0x99B42F: test    esi, esi
0x99B431: jnz     loc_99B6F0
0x99B437: movzx   esi, byte ptr [eax+0Dh]
0x99B43B: movzx   ebx, byte ptr [ecx+0Dh]
0x99B43F: sub     esi, ebx
0x99B441: jz      short loc_99B458
0x99B443: xor     ebx, ebx
0x99B445: test    esi, esi
0x99B447: setnle  bl
0x99B44A: lea     ebx, [ebx+ebx-1]
0x99B44E: mov     esi, ebx
0x99B450: test    esi, esi
0x99B452: jnz     loc_99B6F0
0x99B458: movzx   esi, byte ptr [eax+0Eh]
0x99B45C: movzx   ebx, byte ptr [ecx+0Eh]
0x99B460: sub     esi, ebx
0x99B462: jz      short loc_99B479
0x99B464: xor     ebx, ebx
0x99B466: test    esi, esi
0x99B468: setnle  bl
0x99B46B: lea     ebx, [ebx+ebx-1]
0x99B46F: mov     esi, ebx
0x99B471: test    esi, esi
0x99B473: jnz     loc_99B6F0
0x99B479: movzx   esi, byte ptr [eax+0Fh]
0x99B47D: movzx   ebx, byte ptr [ecx+0Fh]
0x99B481: sub     esi, ebx
0x99B483: jz      short loc_99B496
0x99B485: xor     ebx, ebx
0x99B487: test    esi, esi
0x99B489: setnle  bl
0x99B48C: lea     ebx, [ebx+ebx-1]
0x99B490: mov     esi, ebx
0x99B492: jmp     short loc_99B496
0x99B494: xor     esi, esi
0x99B496: test    esi, esi
0x99B498: jnz     loc_99B6F0
0x99B49E: mov     esi, [eax+10h]
0x99B4A1: cmp     esi, [ecx+10h]
0x99B4A4: jz      short loc_99B524
0x99B4A6: movzx   ebx, byte ptr [ecx+10h]
0x99B4AA: movzx   esi, byte ptr [eax+10h]
0x99B4AE: sub     esi, ebx
0x99B4B0: jz      short loc_99B4C7
0x99B4B2: xor     ebx, ebx
0x99B4B4: test    esi, esi
0x99B4B6: setnle  bl
0x99B4B9: lea     ebx, [ebx+ebx-1]
0x99B4BD: mov     esi, ebx
0x99B4BF: test    esi, esi
0x99B4C1: jnz     loc_99B6F0
0x99B4C7: movzx   esi, byte ptr [eax+11h]
0x99B4CB: movzx   ebx, byte ptr [ecx+11h]
0x99B4CF: sub     esi, ebx
0x99B4D1: jz      short loc_99B4E8
0x99B4D3: xor     ebx, ebx
0x99B4D5: test    esi, esi
0x99B4D7: setnle  bl
0x99B4DA: lea     ebx, [ebx+ebx-1]
0x99B4DE: mov     esi, ebx
0x99B4E0: test    esi, esi
0x99B4E2: jnz     loc_99B6F0
0x99B4E8: movzx   esi, byte ptr [eax+12h]
0x99B4EC: movzx   ebx, byte ptr [ecx+12h]
0x99B4F0: sub     esi, ebx
0x99B4F2: jz      short loc_99B509
0x99B4F4: xor     ebx, ebx
0x99B4F6: test    esi, esi
0x99B4F8: setnle  bl
0x99B4FB: lea     ebx, [ebx+ebx-1]
0x99B4FF: mov     esi, ebx
0x99B501: test    esi, esi
0x99B503: jnz     loc_99B6F0
0x99B509: movzx   esi, byte ptr [eax+13h]
0x99B50D: movzx   ebx, byte ptr [ecx+13h]
0x99B511: sub     esi, ebx
0x99B513: jz      short loc_99B526
0x99B515: xor     ebx, ebx
0x99B517: test    esi, esi
0x99B519: setnle  bl
0x99B51C: lea     ebx, [ebx+ebx-1]
0x99B520: mov     esi, ebx
0x99B522: jmp     short loc_99B526
0x99B524: xor     esi, esi
0x99B526: test    esi, esi
0x99B528: jnz     loc_99B6F0
0x99B52E: mov     esi, [eax+14h]
0x99B531: cmp     esi, [ecx+14h]
0x99B534: jz      short loc_99B5B4
0x99B536: movzx   esi, byte ptr [eax+14h]
0x99B53A: movzx   ebx, byte ptr [ecx+14h]
0x99B53E: sub     esi, ebx
0x99B540: jz      short loc_99B557
0x99B542: xor     ebx, ebx
0x99B544: test    esi, esi
0x99B546: setnle  bl
0x99B549: lea     ebx, [ebx+ebx-1]
0x99B54D: mov     esi, ebx
0x99B54F: test    esi, esi
0x99B551: jnz     loc_99B6F0
0x99B557: movzx   esi, byte ptr [eax+15h]
0x99B55B: movzx   ebx, byte ptr [ecx+15h]
0x99B55F: sub     esi, ebx
0x99B561: jz      short loc_99B578
0x99B563: xor     ebx, ebx
0x99B565: test    esi, esi
0x99B567: setnle  bl
0x99B56A: lea     ebx, [ebx+ebx-1]
0x99B56E: mov     esi, ebx
0x99B570: test    esi, esi
0x99B572: jnz     loc_99B6F0
0x99B578: movzx   esi, byte ptr [eax+16h]
0x99B57C: movzx   ebx, byte ptr [ecx+16h]
0x99B580: sub     esi, ebx
0x99B582: jz      short loc_99B599
0x99B584: xor     ebx, ebx
0x99B586: test    esi, esi
0x99B588: setnle  bl
0x99B58B: lea     ebx, [ebx+ebx-1]
0x99B58F: mov     esi, ebx
0x99B591: test    esi, esi
0x99B593: jnz     loc_99B6F0
0x99B599: movzx   esi, byte ptr [eax+17h]
0x99B59D: movzx   ebx, byte ptr [ecx+17h]
0x99B5A1: sub     esi, ebx
0x99B5A3: jz      short loc_99B5B6
0x99B5A5: xor     ebx, ebx
0x99B5A7: test    esi, esi
0x99B5A9: setnle  bl
0x99B5AC: lea     ebx, [ebx+ebx-1]
0x99B5B0: mov     esi, ebx
0x99B5B2: jmp     short loc_99B5B6
0x99B5B4: xor     esi, esi
0x99B5B6: test    esi, esi
0x99B5B8: jnz     loc_99B6F0
0x99B5BE: mov     esi, [eax+18h]
0x99B5C1: cmp     esi, [ecx+18h]
0x99B5C4: jz      short loc_99B644
0x99B5C6: movzx   esi, byte ptr [eax+18h]
0x99B5CA: movzx   ebx, byte ptr [ecx+18h]
0x99B5CE: sub     esi, ebx
0x99B5D0: jz      short loc_99B5E7
0x99B5D2: xor     ebx, ebx
0x99B5D4: test    esi, esi
0x99B5D6: setnle  bl
0x99B5D9: lea     ebx, [ebx+ebx-1]
0x99B5DD: mov     esi, ebx
0x99B5DF: test    esi, esi
0x99B5E1: jnz     loc_99B6F0
0x99B5E7: movzx   esi, byte ptr [eax+19h]
0x99B5EB: movzx   ebx, byte ptr [ecx+19h]
0x99B5EF: sub     esi, ebx
0x99B5F1: jz      short loc_99B608
0x99B5F3: xor     ebx, ebx
0x99B5F5: test    esi, esi
0x99B5F7: setnle  bl
0x99B5FA: lea     ebx, [ebx+ebx-1]
0x99B5FE: mov     esi, ebx
0x99B600: test    esi, esi
0x99B602: jnz     loc_99B6F0
0x99B608: movzx   esi, byte ptr [eax+1Ah]
0x99B60C: movzx   ebx, byte ptr [ecx+1Ah]
0x99B610: sub     esi, ebx
0x99B612: jz      short loc_99B629
0x99B614: xor     ebx, ebx
0x99B616: test    esi, esi
0x99B618: setnle  bl
0x99B61B: lea     ebx, [ebx+ebx-1]
0x99B61F: mov     esi, ebx
0x99B621: test    esi, esi
0x99B623: jnz     loc_99B6F0
0x99B629: movzx   esi, byte ptr [eax+1Bh]
0x99B62D: movzx   ebx, byte ptr [ecx+1Bh]
0x99B631: sub     esi, ebx
0x99B633: jz      short loc_99B646
0x99B635: xor     ebx, ebx
0x99B637: test    esi, esi
0x99B639: setnle  bl
0x99B63C: lea     ebx, [ebx+ebx-1]
0x99B640: mov     esi, ebx
0x99B642: jmp     short loc_99B646
0x99B644: xor     esi, esi
0x99B646: test    esi, esi
0x99B648: jnz     loc_99B6F0
0x99B64E: mov     esi, [eax+1Ch]
0x99B651: cmp     esi, [ecx+1Ch]
0x99B654: jz      short loc_99B6C8
0x99B656: movzx   esi, byte ptr [eax+1Ch]
0x99B65A: movzx   ebx, byte ptr [ecx+1Ch]
0x99B65E: sub     esi, ebx
0x99B660: jz      short loc_99B673
0x99B662: xor     ebx, ebx
0x99B664: test    esi, esi
0x99B666: setnle  bl
0x99B669: lea     ebx, [ebx+ebx-1]
0x99B66D: mov     esi, ebx
0x99B66F: test    esi, esi
0x99B671: jnz     short loc_99B6F0
0x99B673: movzx   esi, byte ptr [eax+1Dh]
0x99B677: movzx   ebx, byte ptr [ecx+1Dh]
0x99B67B: sub     esi, ebx
0x99B67D: jz      short loc_99B690
0x99B67F: xor     ebx, ebx
0x99B681: test    esi, esi
0x99B683: setnle  bl
0x99B686: lea     ebx, [ebx+ebx-1]
0x99B68A: mov     esi, ebx
0x99B68C: test    esi, esi
0x99B68E: jnz     short loc_99B6F0
0x99B690: movzx   esi, byte ptr [eax+1Eh]
0x99B694: movzx   ebx, byte ptr [ecx+1Eh]
0x99B698: sub     esi, ebx
0x99B69A: jz      short loc_99B6AD
0x99B69C: xor     ebx, ebx
0x99B69E: test    esi, esi
0x99B6A0: setnle  bl
0x99B6A3: lea     ebx, [ebx+ebx-1]
0x99B6A7: mov     esi, ebx
0x99B6A9: test    esi, esi
0x99B6AB: jnz     short loc_99B6F0
0x99B6AD: movzx   esi, byte ptr [eax+1Fh]
0x99B6B1: movzx   ebx, byte ptr [ecx+1Fh]
0x99B6B5: sub     esi, ebx
0x99B6B7: jz      short loc_99B6CA
0x99B6B9: xor     ebx, ebx
0x99B6BB: test    esi, esi
0x99B6BD: setnle  bl
0x99B6C0: lea     ebx, [ebx+ebx-1]
0x99B6C4: mov     esi, ebx
0x99B6C6: jmp     short loc_99B6CA
0x99B6C8: xor     esi, esi
0x99B6CA: test    esi, esi
0x99B6CC: jnz     short loc_99B6F0
0x99B6CE: add     eax, edx
0x99B6D0: add     ecx, edx
0x99B6D2: sub     edi, edx
0x99B6D4: cmp     edi, edx
0x99B6D6: jnb     loc_99B262
0x99B6DC: add     eax, edi
0x99B6DE: add     ecx, edi
0x99B6E0: cmp     edi, 1Fh; switch 32 cases
0x99B6E3: ja      _memcmp___$LN132; jumptable 0099B6E9 default case, case 0
0x99B6E9: jmp     ds:jpt_99B6E9[edi*4]; switch jump
0x99B6F0: mov     eax, esi
0x99B6F2: jmp     loc_99BAC5
0x99B6F7: mov     edx, [eax-1Ch]; jumptable 0099B6E9 case 28
0x99B6FA: cmp     edx, [ecx-1Ch]
0x99B6FD: jz      short loc_99B770
0x99B6FF: movzx   esi, dl
0x99B702: movzx   edx, byte ptr [ecx-1Ch]
0x99B706: sub     esi, edx
0x99B708: jz      short loc_99B71B
0x99B70A: xor     edx, edx
0x99B70C: test    esi, esi
0x99B70E: setnle  dl
0x99B711: lea     edx, [edx+edx-1]
0x99B715: mov     esi, edx
0x99B717: test    esi, esi
0x99B719: jnz     short loc_99B6F0
0x99B71B: movzx   esi, byte ptr [eax-1Bh]
0x99B71F: movzx   edx, byte ptr [ecx-1Bh]
0x99B723: sub     esi, edx
0x99B725: jz      short loc_99B738
0x99B727: xor     edx, edx
0x99B729: test    esi, esi
0x99B72B: setnle  dl
0x99B72E: lea     edx, [edx+edx-1]
0x99B732: mov     esi, edx
0x99B734: test    esi, esi
0x99B736: jnz     short loc_99B6F0
0x99B738: movzx   esi, byte ptr [eax-1Ah]
0x99B73C: movzx   edx, byte ptr [ecx-1Ah]
0x99B740: sub     esi, edx
0x99B742: jz      short loc_99B755
0x99B744: xor     edx, edx
0x99B746: test    esi, esi
0x99B748: setnle  dl
0x99B74B: lea     edx, [edx+edx-1]
0x99B74F: mov     esi, edx
0x99B751: test    esi, esi
0x99B753: jnz     short loc_99B6F0
0x99B755: movzx   esi, byte ptr [eax-19h]
0x99B759: movzx   edx, byte ptr [ecx-19h]
0x99B75D: sub     esi, edx
0x99B75F: jz      short loc_99B772
0x99B761: xor     edx, edx
0x99B763: test    esi, esi
0x99B765: setnle  dl
0x99B768: lea     edx, [edx+edx-1]
0x99B76C: mov     esi, edx
0x99B76E: jmp     short loc_99B772
0x99B770: xor     esi, esi
0x99B772: test    esi, esi
0x99B774: jnz     loc_99B6F0
0x99B77A: mov     edx, [eax-18h]; jumptable 0099B6E9 case 24
0x99B77D: cmp     edx, [ecx-18h]
0x99B780: jz      short loc_99B7FF
0x99B782: movzx   esi, dl
0x99B785: movzx   edx, byte ptr [ecx-18h]
0x99B789: sub     esi, edx
0x99B78B: jz      short loc_99B7A2
0x99B78D: xor     edx, edx
0x99B78F: test    esi, esi
0x99B791: setnle  dl
0x99B794: lea     edx, [edx+edx-1]
0x99B798: mov     esi, edx
0x99B79A: test    esi, esi
0x99B79C: jnz     loc_99B6F0
0x99B7A2: movzx   esi, byte ptr [eax-17h]
0x99B7A6: movzx   edx, byte ptr [ecx-17h]
0x99B7AA: sub     esi, edx
0x99B7AC: jz      short loc_99B7C3
0x99B7AE: xor     edx, edx
0x99B7B0: test    esi, esi
0x99B7B2: setnle  dl
0x99B7B5: lea     edx, [edx+edx-1]
0x99B7B9: mov     esi, edx
0x99B7BB: test    esi, esi
0x99B7BD: jnz     loc_99B6F0
0x99B7C3: movzx   esi, byte ptr [eax-16h]
0x99B7C7: movzx   edx, byte ptr [ecx-16h]
0x99B7CB: sub     esi, edx
0x99B7CD: jz      short loc_99B7E4
0x99B7CF: xor     edx, edx
0x99B7D1: test    esi, esi
0x99B7D3: setnle  dl
0x99B7D6: lea     edx, [edx+edx-1]
0x99B7DA: mov     esi, edx
0x99B7DC: test    esi, esi
0x99B7DE: jnz     loc_99B6F0
0x99B7E4: movzx   esi, byte ptr [eax-15h]
0x99B7E8: movzx   edx, byte ptr [ecx-15h]
0x99B7EC: sub     esi, edx
0x99B7EE: jz      short loc_99B801
0x99B7F0: xor     edx, edx
0x99B7F2: test    esi, esi
0x99B7F4: setnle  dl
0x99B7F7: lea     edx, [edx+edx-1]
0x99B7FB: mov     esi, edx
0x99B7FD: jmp     short loc_99B801
0x99B7FF: xor     esi, esi
0x99B801: test    esi, esi
0x99B803: jnz     loc_99B6F0
0x99B809: mov     edx, [eax-14h]; jumptable 0099B6E9 case 20
0x99B80C: cmp     edx, [ecx-14h]
0x99B80F: jz      short loc_99B88E
0x99B811: movzx   esi, dl
0x99B814: movzx   edx, byte ptr [ecx-14h]
0x99B818: sub     esi, edx
0x99B81A: jz      short loc_99B831
0x99B81C: xor     edx, edx
0x99B81E: test    esi, esi
0x99B820: setnle  dl
0x99B823: lea     edx, [edx+edx-1]
0x99B827: mov     esi, edx
0x99B829: test    esi, esi
0x99B82B: jnz     loc_99B6F0
0x99B831: movzx   esi, byte ptr [eax-13h]
0x99B835: movzx   edx, byte ptr [ecx-13h]
0x99B839: sub     esi, edx
0x99B83B: jz      short loc_99B852
0x99B83D: xor     edx, edx
0x99B83F: test    esi, esi
0x99B841: setnle  dl
0x99B844: lea     edx, [edx+edx-1]
0x99B848: mov     esi, edx
0x99B84A: test    esi, esi
0x99B84C: jnz     loc_99B6F0
0x99B852: movzx   esi, byte ptr [eax-12h]
0x99B856: movzx   edx, byte ptr [ecx-12h]
0x99B85A: sub     esi, edx
0x99B85C: jz      short loc_99B873
0x99B85E: xor     edx, edx
0x99B860: test    esi, esi
0x99B862: setnle  dl
0x99B865: lea     edx, [edx+edx-1]
0x99B869: mov     esi, edx
0x99B86B: test    esi, esi
0x99B86D: jnz     loc_99B6F0
0x99B873: movzx   esi, byte ptr [eax-11h]
0x99B877: movzx   edx, byte ptr [ecx-11h]
0x99B87B: sub     esi, edx
0x99B87D: jz      short loc_99B890
0x99B87F: xor     edx, edx
0x99B881: test    esi, esi
0x99B883: setnle  dl
0x99B886: lea     edx, [edx+edx-1]
0x99B88A: mov     esi, edx
0x99B88C: jmp     short loc_99B890
0x99B88E: xor     esi, esi
0x99B890: test    esi, esi
0x99B892: jnz     loc_99B6F0
0x99B898: mov     edx, [eax-10h]; jumptable 0099B6E9 case 16
0x99B89B: cmp     edx, [ecx-10h]
0x99B89E: jz      short loc_99B91D
0x99B8A0: movzx   esi, dl
0x99B8A3: movzx   edx, byte ptr [ecx-10h]
0x99B8A7: sub     esi, edx
0x99B8A9: jz      short loc_99B8C0
0x99B8AB: xor     edx, edx
0x99B8AD: test    esi, esi
0x99B8AF: setnle  dl
0x99B8B2: lea     edx, [edx+edx-1]
0x99B8B6: mov     esi, edx
0x99B8B8: test    esi, esi
0x99B8BA: jnz     loc_99B6F0
0x99B8C0: movzx   esi, byte ptr [eax-0Fh]
0x99B8C4: movzx   edx, byte ptr [ecx-0Fh]
0x99B8C8: sub     esi, edx
0x99B8CA: jz      short loc_99B8E1
0x99B8CC: xor     edx, edx
0x99B8CE: test    esi, esi
0x99B8D0: setnle  dl
0x99B8D3: lea     edx, [edx+edx-1]
0x99B8D7: mov     esi, edx
0x99B8D9: test    esi, esi
0x99B8DB: jnz     loc_99B6F0
0x99B8E1: movzx   esi, byte ptr [eax-0Eh]
0x99B8E5: movzx   edx, byte ptr [ecx-0Eh]
0x99B8E9: sub     esi, edx
0x99B8EB: jz      short loc_99B902
0x99B8ED: xor     edx, edx
0x99B8EF: test    esi, esi
0x99B8F1: setnle  dl
0x99B8F4: lea     edx, [edx+edx-1]
0x99B8F8: mov     esi, edx
0x99B8FA: test    esi, esi
0x99B8FC: jnz     loc_99B6F0
0x99B902: movzx   esi, byte ptr [eax-0Dh]
0x99B906: movzx   edx, byte ptr [ecx-0Dh]
0x99B90A: sub     esi, edx
0x99B90C: jz      short loc_99B91F
0x99B90E: xor     edx, edx
0x99B910: test    esi, esi
0x99B912: setnle  dl
0x99B915: lea     edx, [edx+edx-1]
0x99B919: mov     esi, edx
0x99B91B: jmp     short loc_99B91F
0x99B91D: xor     esi, esi
0x99B91F: test    esi, esi
0x99B921: jnz     loc_99B6F0
0x99B927: mov     edx, [eax-0Ch]; jumptable 0099B6E9 case 12
0x99B92A: cmp     edx, [ecx-0Ch]
0x99B92D: jz      short loc_99B9AD
0x99B92F: movzx   edx, byte ptr [ecx-0Ch]
0x99B933: movzx   esi, byte ptr [eax-0Ch]
0x99B937: sub     esi, edx
0x99B939: jz      short loc_99B950
0x99B93B: xor     edx, edx
0x99B93D: test    esi, esi
0x99B93F: setnle  dl
0x99B942: lea     edx, [edx+edx-1]
0x99B946: mov     esi, edx
0x99B948: test    esi, esi
0x99B94A: jnz     loc_99B6F0
0x99B950: movzx   esi, byte ptr [eax-0Bh]
0x99B954: movzx   edx, byte ptr [ecx-0Bh]
0x99B958: sub     esi, edx
0x99B95A: jz      short loc_99B971
0x99B95C: xor     edx, edx
0x99B95E: test    esi, esi
0x99B960: setnle  dl
0x99B963: lea     edx, [edx+edx-1]
0x99B967: mov     esi, edx
0x99B969: test    esi, esi
0x99B96B: jnz     loc_99B6F0
0x99B971: movzx   esi, byte ptr [eax-0Ah]
0x99B975: movzx   edx, byte ptr [ecx-0Ah]
0x99B979: sub     esi, edx
0x99B97B: jz      short loc_99B992
0x99B97D: xor     edx, edx
0x99B97F: test    esi, esi
0x99B981: setnle  dl
0x99B984: lea     edx, [edx+edx-1]
0x99B988: mov     esi, edx
0x99B98A: test    esi, esi
0x99B98C: jnz     loc_99B6F0
0x99B992: movzx   esi, byte ptr [eax-9]
0x99B996: movzx   edx, byte ptr [ecx-9]
0x99B99A: sub     esi, edx
0x99B99C: jz      short loc_99B9AF
0x99B99E: xor     edx, edx
0x99B9A0: test    esi, esi
0x99B9A2: setnle  dl
0x99B9A5: lea     edx, [edx+edx-1]
0x99B9A9: mov     esi, edx
0x99B9AB: jmp     short loc_99B9AF
0x99B9AD: xor     esi, esi
0x99B9AF: test    esi, esi
0x99B9B1: jnz     loc_99B6F0
0x99B9B7: mov     edx, [eax-8]; jumptable 0099B6E9 case 8
0x99B9BA: cmp     edx, [ecx-8]
0x99B9BD: jz      short loc_99BA3C
0x99B9BF: movzx   esi, dl
0x99B9C2: movzx   edx, byte ptr [ecx-8]
0x99B9C6: sub     esi, edx
0x99B9C8: jz      short loc_99B9DF
0x99B9CA: xor     edx, edx
0x99B9CC: test    esi, esi
0x99B9CE: setnle  dl
0x99B9D1: lea     edx, [edx+edx-1]
0x99B9D5: mov     esi, edx
0x99B9D7: test    esi, esi
0x99B9D9: jnz     loc_99B6F0
0x99B9DF: movzx   esi, byte ptr [eax-7]
0x99B9E3: movzx   edx, byte ptr [ecx-7]
0x99B9E7: sub     esi, edx
0x99B9E9: jz      short loc_99BA00
0x99B9EB: xor     edx, edx
0x99B9ED: test    esi, esi
0x99B9EF: setnle  dl
0x99B9F2: lea     edx, [edx+edx-1]
0x99B9F6: mov     esi, edx
0x99B9F8: test    esi, esi
0x99B9FA: jnz     loc_99B6F0
0x99BA00: movzx   esi, byte ptr [eax-6]
0x99BA04: movzx   edx, byte ptr [ecx-6]
0x99BA08: sub     esi, edx
0x99BA0A: jz      short loc_99BA21
0x99BA0C: xor     edx, edx
0x99BA0E: test    esi, esi
0x99BA10: setnle  dl
0x99BA13: lea     edx, [edx+edx-1]
0x99BA17: mov     esi, edx
0x99BA19: test    esi, esi
0x99BA1B: jnz     loc_99B6F0
0x99BA21: movzx   esi, byte ptr [eax-5]
0x99BA25: movzx   edx, byte ptr [ecx-5]
0x99BA29: sub     esi, edx
0x99BA2B: jz      short loc_99BA3E
0x99BA2D: xor     edx, edx
0x99BA2F: test    esi, esi
0x99BA31: setnle  dl
0x99BA34: lea     edx, [edx+edx-1]
0x99BA38: mov     esi, edx
0x99BA3A: jmp     short loc_99BA3E
0x99BA3C: xor     esi, esi
0x99BA3E: test    esi, esi
0x99BA40: jnz     loc_99B6F0
0x99BA46: mov     edx, [eax-4]; jumptable 0099B6E9 case 4
0x99BA49: cmp     edx, [ecx-4]
0x99BA4C: jz      short loc_99BABD
0x99BA4E: movzx   esi, dl
0x99BA51: movzx   edx, byte ptr [ecx-4]
0x99BA55: sub     esi, edx
0x99BA57: jz      short loc_99BA68
0x99BA59: xor     edx, edx
0x99BA5B: test    esi, esi
0x99BA5D: setnle  dl
0x99BA60: lea     edx, [edx+edx-1]
0x99BA64: test    edx, edx
0x99BA66: jnz     short loc_99BA9E
0x99BA68: movzx   esi, byte ptr [eax-3]
0x99BA6C: movzx   edx, byte ptr [ecx-3]
0x99BA70: sub     esi, edx
0x99BA72: jz      short loc_99BA83
0x99BA74: xor     edx, edx
0x99BA76: test    esi, esi
0x99BA78: setnle  dl
0x99BA7B: lea     edx, [edx+edx-1]
0x99BA7F: test    edx, edx
0x99BA81: jnz     short loc_99BA9E
0x99BA83: movzx   esi, byte ptr [eax-2]
0x99BA87: movzx   edx, byte ptr [ecx-2]
0x99BA8B: sub     esi, edx
0x99BA8D: jz      short loc_99BAA2
0x99BA8F: xor     edx, edx
0x99BA91: test    esi, esi
0x99BA93: setnle  dl
0x99BA96: lea     edx, [edx+edx-1]
0x99BA9A: test    edx, edx
0x99BA9C: jz      short loc_99BAA2
0x99BA9E: mov     eax, edx
0x99BAA0: jmp     short loc_99BABF
0x99BAA2: movzx   eax, byte ptr [eax-1]
0x99BAA6: movzx   ecx, byte ptr [ecx-1]
0x99BAAA: sub     eax, ecx
0x99BAAC: jz      short loc_99BABF
0x99BAAE: xor     ecx, ecx
0x99BAB0: test    eax, eax
0x99BAB2: setnle  cl
0x99BAB5: lea     ecx, [ecx+ecx-1]
0x99BAB9: mov     eax, ecx
0x99BABB: jmp     short loc_99BABF
0x99BABD: xor     eax, eax
0x99BABF: test    eax, eax
0x99BAC1: jnz     short loc_99BAC5
0x99BAC3: xor     eax, eax; jumptable 0099B6E9 default case, case 0
0x99BAC5: pop     ebx
0x99BAC6: jmp     loc_99C81E
0x99BACB: mov     edx, [eax-1Dh]; jumptable 0099B6E9 case 29
0x99BACE: cmp     edx, [ecx-1Dh]
0x99BAD1: jz      short loc_99BB50
0x99BAD3: movzx   esi, dl
0x99BAD6: movzx   edx, byte ptr [ecx-1Dh]
0x99BADA: sub     esi, edx
0x99BADC: jz      short loc_99BAF3
0x99BADE: xor     edx, edx
0x99BAE0: test    esi, esi
0x99BAE2: setnle  dl
0x99BAE5: lea     edx, [edx+edx-1]
0x99BAE9: mov     esi, edx
0x99BAEB: test    esi, esi
0x99BAED: jnz     loc_99B6F0
0x99BAF3: movzx   esi, byte ptr [eax-1Ch]
0x99BAF7: movzx   edx, byte ptr [ecx-1Ch]
0x99BAFB: sub     esi, edx
0x99BAFD: jz      short loc_99BB14
0x99BAFF: xor     edx, edx
0x99BB01: test    esi, esi
0x99BB03: setnle  dl
0x99BB06: lea     edx, [edx+edx-1]
0x99BB0A: mov     esi, edx
0x99BB0C: test    esi, esi
0x99BB0E: jnz     loc_99B6F0
0x99BB14: movzx   esi, byte ptr [eax-1Bh]
0x99BB18: movzx   edx, byte ptr [ecx-1Bh]
0x99BB1C: sub     esi, edx
0x99BB1E: jz      short loc_99BB35
0x99BB20: xor     edx, edx
0x99BB22: test    esi, esi
0x99BB24: setnle  dl
0x99BB27: lea     edx, [edx+edx-1]
0x99BB2B: mov     esi, edx
0x99BB2D: test    esi, esi
0x99BB2F: jnz     loc_99B6F0
0x99BB35: movzx   esi, byte ptr [eax-1Ah]
0x99BB39: movzx   edx, byte ptr [ecx-1Ah]
0x99BB3D: sub     esi, edx
0x99BB3F: jz      short loc_99BB52
0x99BB41: xor     edx, edx
0x99BB43: test    esi, esi
0x99BB45: setnle  dl
0x99BB48: lea     edx, [edx+edx-1]
0x99BB4C: mov     esi, edx
0x99BB4E: jmp     short loc_99BB52
0x99BB50: xor     esi, esi
0x99BB52: test    esi, esi
0x99BB54: jnz     loc_99B6F0
0x99BB5A: mov     edx, [eax-19h]; jumptable 0099B6E9 case 25
0x99BB5D: cmp     edx, [ecx-19h]
0x99BB60: jz      short loc_99BBDF
0x99BB62: movzx   esi, dl
0x99BB65: movzx   edx, byte ptr [ecx-19h]
0x99BB69: sub     esi, edx
0x99BB6B: jz      short loc_99BB82
0x99BB6D: xor     edx, edx
0x99BB6F: test    esi, esi
0x99BB71: setnle  dl
0x99BB74: lea     edx, [edx+edx-1]
0x99BB78: mov     esi, edx
0x99BB7A: test    esi, esi
0x99BB7C: jnz     loc_99B6F0
0x99BB82: movzx   esi, byte ptr [eax-18h]
0x99BB86: movzx   edx, byte ptr [ecx-18h]
0x99BB8A: sub     esi, edx
0x99BB8C: jz      short loc_99BBA3
0x99BB8E: xor     edx, edx
0x99BB90: test    esi, esi
0x99BB92: setnle  dl
0x99BB95: lea     edx, [edx+edx-1]
0x99BB99: mov     esi, edx
0x99BB9B: test    esi, esi
0x99BB9D: jnz     loc_99B6F0
0x99BBA3: movzx   esi, byte ptr [eax-17h]
0x99BBA7: movzx   edx, byte ptr [ecx-17h]
0x99BBAB: sub     esi, edx
0x99BBAD: jz      short loc_99BBC4
0x99BBAF: xor     edx, edx
0x99BBB1: test    esi, esi
0x99BBB3: setnle  dl
0x99BBB6: lea     edx, [edx+edx-1]
0x99BBBA: mov     esi, edx
0x99BBBC: test    esi, esi
0x99BBBE: jnz     loc_99B6F0
0x99BBC4: movzx   esi, byte ptr [eax-16h]
0x99BBC8: movzx   edx, byte ptr [ecx-16h]
0x99BBCC: sub     esi, edx
0x99BBCE: jz      short loc_99BBE1
0x99BBD0: xor     edx, edx
0x99BBD2: test    esi, esi
0x99BBD4: setnle  dl
0x99BBD7: lea     edx, [edx+edx-1]
0x99BBDB: mov     esi, edx
0x99BBDD: jmp     short loc_99BBE1
0x99BBDF: xor     esi, esi
0x99BBE1: test    esi, esi
0x99BBE3: jnz     loc_99B6F0
0x99BBE9: mov     edx, [eax-15h]; jumptable 0099B6E9 case 21
0x99BBEC: cmp     edx, [ecx-15h]
0x99BBEF: jz      short loc_99BC6E
0x99BBF1: movzx   esi, dl
0x99BBF4: movzx   edx, byte ptr [ecx-15h]
0x99BBF8: sub     esi, edx
0x99BBFA: jz      short loc_99BC11
0x99BBFC: xor     edx, edx
0x99BBFE: test    esi, esi
0x99BC00: setnle  dl
0x99BC03: lea     edx, [edx+edx-1]
0x99BC07: mov     esi, edx
0x99BC09: test    esi, esi
0x99BC0B: jnz     loc_99B6F0
0x99BC11: movzx   esi, byte ptr [eax-14h]
0x99BC15: movzx   edx, byte ptr [ecx-14h]
0x99BC19: sub     esi, edx
0x99BC1B: jz      short loc_99BC32
0x99BC1D: xor     edx, edx
0x99BC1F: test    esi, esi
0x99BC21: setnle  dl
0x99BC24: lea     edx, [edx+edx-1]
0x99BC28: mov     esi, edx
0x99BC2A: test    esi, esi
0x99BC2C: jnz     loc_99B6F0
0x99BC32: movzx   esi, byte ptr [eax-13h]
0x99BC36: movzx   edx, byte ptr [ecx-13h]
0x99BC3A: sub     esi, edx
0x99BC3C: jz      short loc_99BC53
0x99BC3E: xor     edx, edx
0x99BC40: test    esi, esi
0x99BC42: setnle  dl
0x99BC45: lea     edx, [edx+edx-1]
0x99BC49: mov     esi, edx
0x99BC4B: test    esi, esi
0x99BC4D: jnz     loc_99B6F0
0x99BC53: movzx   esi, byte ptr [eax-12h]
0x99BC57: movzx   edx, byte ptr [ecx-12h]
0x99BC5B: sub     esi, edx
0x99BC5D: jz      short loc_99BC70
0x99BC5F: xor     edx, edx
0x99BC61: test    esi, esi
0x99BC63: setnle  dl
0x99BC66: lea     edx, [edx+edx-1]
0x99BC6A: mov     esi, edx
0x99BC6C: jmp     short loc_99BC70
0x99BC6E: xor     esi, esi
0x99BC70: test    esi, esi
0x99BC72: jnz     loc_99B6F0
0x99BC78: mov     edx, [eax-11h]; jumptable 0099B6E9 case 17
0x99BC7B: cmp     edx, [ecx-11h]
0x99BC7E: jz      short loc_99BCFD
0x99BC80: movzx   esi, dl
0x99BC83: movzx   edx, byte ptr [ecx-11h]
0x99BC87: sub     esi, edx
0x99BC89: jz      short loc_99BCA0
0x99BC8B: xor     edx, edx
0x99BC8D: test    esi, esi
0x99BC8F: setnle  dl
0x99BC92: lea     edx, [edx+edx-1]
0x99BC96: mov     esi, edx
0x99BC98: test    esi, esi
0x99BC9A: jnz     loc_99B6F0
0x99BCA0: movzx   esi, byte ptr [eax-10h]
0x99BCA4: movzx   edx, byte ptr [ecx-10h]
0x99BCA8: sub     esi, edx
0x99BCAA: jz      short loc_99BCC1
0x99BCAC: xor     edx, edx
0x99BCAE: test    esi, esi
0x99BCB0: setnle  dl
0x99BCB3: lea     edx, [edx+edx-1]
0x99BCB7: mov     esi, edx
0x99BCB9: test    esi, esi
0x99BCBB: jnz     loc_99B6F0
0x99BCC1: movzx   esi, byte ptr [eax-0Fh]
0x99BCC5: movzx   edx, byte ptr [ecx-0Fh]
0x99BCC9: sub     esi, edx
0x99BCCB: jz      short loc_99BCE2
0x99BCCD: xor     edx, edx
0x99BCCF: test    esi, esi
0x99BCD1: setnle  dl
0x99BCD4: lea     edx, [edx+edx-1]
0x99BCD8: mov     esi, edx
0x99BCDA: test    esi, esi
0x99BCDC: jnz     loc_99B6F0
0x99BCE2: movzx   esi, byte ptr [eax-0Eh]
0x99BCE6: movzx   edx, byte ptr [ecx-0Eh]
0x99BCEA: sub     esi, edx
0x99BCEC: jz      short loc_99BCFF
0x99BCEE: xor     edx, edx
0x99BCF0: test    esi, esi
0x99BCF2: setnle  dl
0x99BCF5: lea     edx, [edx+edx-1]
0x99BCF9: mov     esi, edx
0x99BCFB: jmp     short loc_99BCFF
0x99BCFD: xor     esi, esi
0x99BCFF: test    esi, esi
0x99BD01: jnz     loc_99B6F0
0x99BD07: mov     edx, [eax-0Dh]; jumptable 0099B6E9 case 13
0x99BD0A: cmp     edx, [ecx-0Dh]
0x99BD0D: jz      short loc_99BD8C
0x99BD0F: movzx   esi, dl
0x99BD12: movzx   edx, byte ptr [ecx-0Dh]
0x99BD16: sub     esi, edx
0x99BD18: jz      short loc_99BD2F
0x99BD1A: xor     edx, edx
0x99BD1C: test    esi, esi
0x99BD1E: setnle  dl
0x99BD21: lea     edx, [edx+edx-1]
0x99BD25: mov     esi, edx
0x99BD27: test    esi, esi
0x99BD29: jnz     loc_99B6F0
0x99BD2F: movzx   esi, byte ptr [eax-0Ch]
0x99BD33: movzx   edx, byte ptr [ecx-0Ch]
0x99BD37: sub     esi, edx
0x99BD39: jz      short loc_99BD50
0x99BD3B: xor     edx, edx
0x99BD3D: test    esi, esi
0x99BD3F: setnle  dl
0x99BD42: lea     edx, [edx+edx-1]
0x99BD46: mov     esi, edx
0x99BD48: test    esi, esi
0x99BD4A: jnz     loc_99B6F0
0x99BD50: movzx   esi, byte ptr [eax-0Bh]
0x99BD54: movzx   edx, byte ptr [ecx-0Bh]
0x99BD58: sub     esi, edx
0x99BD5A: jz      short loc_99BD71
0x99BD5C: xor     edx, edx
0x99BD5E: test    esi, esi
0x99BD60: setnle  dl
0x99BD63: lea     edx, [edx+edx-1]
0x99BD67: mov     esi, edx
0x99BD69: test    esi, esi
0x99BD6B: jnz     loc_99B6F0
0x99BD71: movzx   esi, byte ptr [eax-0Ah]
0x99BD75: movzx   edx, byte ptr [ecx-0Ah]
0x99BD79: sub     esi, edx
0x99BD7B: jz      short loc_99BD8E
0x99BD7D: xor     edx, edx
0x99BD7F: test    esi, esi
0x99BD81: setnle  dl
0x99BD84: lea     edx, [edx+edx-1]
0x99BD88: mov     esi, edx
0x99BD8A: jmp     short loc_99BD8E
0x99BD8C: xor     esi, esi
0x99BD8E: test    esi, esi
0x99BD90: jnz     loc_99B6F0
0x99BD96: mov     edx, [eax-9]; jumptable 0099B6E9 case 9
0x99BD99: cmp     edx, [ecx-9]
0x99BD9C: jz      short loc_99BE1C
0x99BD9E: movzx   edx, byte ptr [ecx-9]
0x99BDA2: movzx   esi, byte ptr [eax-9]
0x99BDA6: sub     esi, edx
0x99BDA8: jz      short loc_99BDBF
0x99BDAA: xor     edx, edx
0x99BDAC: test    esi, esi
0x99BDAE: setnle  dl
0x99BDB1: lea     edx, [edx+edx-1]
0x99BDB5: mov     esi, edx
0x99BDB7: test    esi, esi
0x99BDB9: jnz     loc_99B6F0
0x99BDBF: movzx   esi, byte ptr [eax-8]
0x99BDC3: movzx   edx, byte ptr [ecx-8]
0x99BDC7: sub     esi, edx
0x99BDC9: jz      short loc_99BDE0
0x99BDCB: xor     edx, edx
0x99BDCD: test    esi, esi
0x99BDCF: setnle  dl
0x99BDD2: lea     edx, [edx+edx-1]
0x99BDD6: mov     esi, edx
0x99BDD8: test    esi, esi
0x99BDDA: jnz     loc_99B6F0
0x99BDE0: movzx   esi, byte ptr [eax-7]
0x99BDE4: movzx   edx, byte ptr [ecx-7]
0x99BDE8: sub     esi, edx
0x99BDEA: jz      short loc_99BE01
0x99BDEC: xor     edx, edx
0x99BDEE: test    esi, esi
0x99BDF0: setnle  dl
0x99BDF3: lea     edx, [edx+edx-1]
0x99BDF7: mov     esi, edx
0x99BDF9: test    esi, esi
0x99BDFB: jnz     loc_99B6F0
0x99BE01: movzx   esi, byte ptr [eax-6]
0x99BE05: movzx   edx, byte ptr [ecx-6]
0x99BE09: sub     esi, edx
0x99BE0B: jz      short loc_99BE1E
0x99BE0D: xor     edx, edx
0x99BE0F: test    esi, esi
0x99BE11: setnle  dl
0x99BE14: lea     edx, [edx+edx-1]
0x99BE18: mov     esi, edx
0x99BE1A: jmp     short loc_99BE1E
0x99BE1C: xor     esi, esi
0x99BE1E: test    esi, esi
0x99BE20: jnz     loc_99B6F0
0x99BE26: mov     edx, [eax-5]; jumptable 0099B6E9 case 5
0x99BE29: cmp     edx, [ecx-5]
0x99BE2C: jz      short loc_99BEAB
0x99BE2E: movzx   esi, dl
0x99BE31: movzx   edx, byte ptr [ecx-5]
0x99BE35: sub     esi, edx
0x99BE37: jz      short loc_99BE4E
0x99BE39: xor     edx, edx
0x99BE3B: test    esi, esi
0x99BE3D: setnle  dl
0x99BE40: lea     edx, [edx+edx-1]
0x99BE44: mov     esi, edx
0x99BE46: test    esi, esi
0x99BE48: jnz     loc_99B6F0
0x99BE4E: movzx   esi, byte ptr [eax-4]
0x99BE52: movzx   edx, byte ptr [ecx-4]
0x99BE56: sub     esi, edx
0x99BE58: jz      short loc_99BE6F
0x99BE5A: xor     edx, edx
0x99BE5C: test    esi, esi
0x99BE5E: setnle  dl
0x99BE61: lea     edx, [edx+edx-1]
0x99BE65: mov     esi, edx
0x99BE67: test    esi, esi
0x99BE69: jnz     loc_99B6F0
0x99BE6F: movzx   esi, byte ptr [eax-3]
0x99BE73: movzx   edx, byte ptr [ecx-3]
0x99BE77: sub     esi, edx
0x99BE79: jz      short loc_99BE90
0x99BE7B: xor     edx, edx
0x99BE7D: test    esi, esi
0x99BE7F: setnle  dl
0x99BE82: lea     edx, [edx+edx-1]
0x99BE86: mov     esi, edx
0x99BE88: test    esi, esi
0x99BE8A: jnz     loc_99B6F0
0x99BE90: movzx   esi, byte ptr [eax-2]
0x99BE94: movzx   edx, byte ptr [ecx-2]
0x99BE98: sub     esi, edx
0x99BE9A: jz      short loc_99BEAD
0x99BE9C: xor     edx, edx
0x99BE9E: test    esi, esi
0x99BEA0: setnle  dl
0x99BEA3: lea     edx, [edx+edx-1]
0x99BEA7: mov     esi, edx
0x99BEA9: jmp     short loc_99BEAD
0x99BEAB: xor     esi, esi
0x99BEAD: test    esi, esi
0x99BEAF: jnz     loc_99B6F0
0x99BEB5: movzx   ecx, byte ptr [ecx-1]; jumptable 0099B6E9 case 1
0x99BEB9: movzx   eax, byte ptr [eax-1]
0x99BEBD: sub     eax, ecx
0x99BEBF: jz      loc_99BAC5
0x99BEC5: xor     ecx, ecx
0x99BEC7: test    eax, eax
0x99BEC9: setnle  cl
0x99BECC: lea     ecx, [ecx+ecx-1]
0x99BED0: mov     eax, ecx
0x99BED2: jmp     loc_99BAC5
0x99BED7: mov     edx, [eax-1Eh]; jumptable 0099B6E9 case 30
0x99BEDA: cmp     edx, [ecx-1Eh]
0x99BEDD: jz      short loc_99BF5C
0x99BEDF: movzx   esi, dl
0x99BEE2: movzx   edx, byte ptr [ecx-1Eh]
0x99BEE6: sub     esi, edx
0x99BEE8: jz      short loc_99BEFF
0x99BEEA: xor     edx, edx
0x99BEEC: test    esi, esi
0x99BEEE: setnle  dl
0x99BEF1: lea     edx, [edx+edx-1]
0x99BEF5: mov     esi, edx
0x99BEF7: test    esi, esi
0x99BEF9: jnz     loc_99B6F0
0x99BEFF: movzx   esi, byte ptr [eax-1Dh]
0x99BF03: movzx   edx, byte ptr [ecx-1Dh]
0x99BF07: sub     esi, edx
0x99BF09: jz      short loc_99BF20
0x99BF0B: xor     edx, edx
0x99BF0D: test    esi, esi
0x99BF0F: setnle  dl
0x99BF12: lea     edx, [edx+edx-1]
0x99BF16: mov     esi, edx
0x99BF18: test    esi, esi
0x99BF1A: jnz     loc_99B6F0
0x99BF20: movzx   esi, byte ptr [eax-1Ch]
0x99BF24: movzx   edx, byte ptr [ecx-1Ch]
0x99BF28: sub     esi, edx
0x99BF2A: jz      short loc_99BF41
0x99BF2C: xor     edx, edx
0x99BF2E: test    esi, esi
0x99BF30: setnle  dl
0x99BF33: lea     edx, [edx+edx-1]
0x99BF37: mov     esi, edx
0x99BF39: test    esi, esi
0x99BF3B: jnz     loc_99B6F0
0x99BF41: movzx   esi, byte ptr [eax-1Bh]
0x99BF45: movzx   edx, byte ptr [ecx-1Bh]
0x99BF49: sub     esi, edx
0x99BF4B: jz      short loc_99BF5E
0x99BF4D: xor     edx, edx
0x99BF4F: test    esi, esi
0x99BF51: setnle  dl
0x99BF54: lea     edx, [edx+edx-1]
0x99BF58: mov     esi, edx
0x99BF5A: jmp     short loc_99BF5E
0x99BF5C: xor     esi, esi
0x99BF5E: test    esi, esi
0x99BF60: jnz     loc_99B6F0
0x99BF66: mov     edx, [eax-1Ah]; jumptable 0099B6E9 case 26
0x99BF69: cmp     edx, [ecx-1Ah]
0x99BF6C: jz      short loc_99BFEB
0x99BF6E: movzx   esi, dl
0x99BF71: movzx   edx, byte ptr [ecx-1Ah]
0x99BF75: sub     esi, edx
0x99BF77: jz      short loc_99BF8E
0x99BF79: xor     edx, edx
0x99BF7B: test    esi, esi
0x99BF7D: setnle  dl
0x99BF80: lea     edx, [edx+edx-1]
0x99BF84: mov     esi, edx
0x99BF86: test    esi, esi
0x99BF88: jnz     loc_99B6F0
0x99BF8E: movzx   esi, byte ptr [eax-19h]
0x99BF92: movzx   edx, byte ptr [ecx-19h]
0x99BF96: sub     esi, edx
0x99BF98: jz      short loc_99BFAF
0x99BF9A: xor     edx, edx
0x99BF9C: test    esi, esi
0x99BF9E: setnle  dl
0x99BFA1: lea     edx, [edx+edx-1]
0x99BFA5: mov     esi, edx
0x99BFA7: test    esi, esi
0x99BFA9: jnz     loc_99B6F0
0x99BFAF: movzx   esi, byte ptr [eax-18h]
0x99BFB3: movzx   edx, byte ptr [ecx-18h]
0x99BFB7: sub     esi, edx
0x99BFB9: jz      short loc_99BFD0
0x99BFBB: xor     edx, edx
0x99BFBD: test    esi, esi
0x99BFBF: setnle  dl
0x99BFC2: lea     edx, [edx+edx-1]
0x99BFC6: mov     esi, edx
0x99BFC8: test    esi, esi
0x99BFCA: jnz     loc_99B6F0
0x99BFD0: movzx   esi, byte ptr [eax-17h]
0x99BFD4: movzx   edx, byte ptr [ecx-17h]
0x99BFD8: sub     esi, edx
0x99BFDA: jz      short loc_99BFED
0x99BFDC: xor     edx, edx
0x99BFDE: test    esi, esi
0x99BFE0: setnle  dl
0x99BFE3: lea     edx, [edx+edx-1]
0x99BFE7: mov     esi, edx
0x99BFE9: jmp     short loc_99BFED
0x99BFEB: xor     esi, esi
0x99BFED: test    esi, esi
0x99BFEF: jnz     loc_99B6F0
0x99BFF5: mov     edx, [eax-16h]; jumptable 0099B6E9 case 22
0x99BFF8: cmp     edx, [ecx-16h]
0x99BFFB: jz      short loc_99C07A
0x99BFFD: movzx   esi, dl
0x99C000: movzx   edx, byte ptr [ecx-16h]
0x99C004: sub     esi, edx
0x99C006: jz      short loc_99C01D
0x99C008: xor     edx, edx
0x99C00A: test    esi, esi
0x99C00C: setnle  dl
0x99C00F: lea     edx, [edx+edx-1]
0x99C013: mov     esi, edx
0x99C015: test    esi, esi
0x99C017: jnz     loc_99B6F0
0x99C01D: movzx   esi, byte ptr [eax-15h]
0x99C021: movzx   edx, byte ptr [ecx-15h]
0x99C025: sub     esi, edx
0x99C027: jz      short loc_99C03E
0x99C029: xor     edx, edx
0x99C02B: test    esi, esi
0x99C02D: setnle  dl
0x99C030: lea     edx, [edx+edx-1]
0x99C034: mov     esi, edx
0x99C036: test    esi, esi
0x99C038: jnz     loc_99B6F0
0x99C03E: movzx   esi, byte ptr [eax-14h]
0x99C042: movzx   edx, byte ptr [ecx-14h]
0x99C046: sub     esi, edx
0x99C048: jz      short loc_99C05F
0x99C04A: xor     edx, edx
0x99C04C: test    esi, esi
0x99C04E: setnle  dl
0x99C051: lea     edx, [edx+edx-1]
0x99C055: mov     esi, edx
0x99C057: test    esi, esi
0x99C059: jnz     loc_99B6F0
0x99C05F: movzx   esi, byte ptr [eax-13h]
0x99C063: movzx   edx, byte ptr [ecx-13h]
0x99C067: sub     esi, edx
0x99C069: jz      short loc_99C07C
0x99C06B: xor     edx, edx
0x99C06D: test    esi, esi
0x99C06F: setnle  dl
0x99C072: lea     edx, [edx+edx-1]
0x99C076: mov     esi, edx
0x99C078: jmp     short loc_99C07C
0x99C07A: xor     esi, esi
0x99C07C: test    esi, esi
0x99C07E: jnz     loc_99B6F0
0x99C084: mov     edx, [eax-12h]; jumptable 0099B6E9 case 18
0x99C087: cmp     edx, [ecx-12h]
0x99C08A: jz      short loc_99C109
0x99C08C: movzx   esi, dl
0x99C08F: movzx   edx, byte ptr [ecx-12h]
0x99C093: sub     esi, edx
0x99C095: jz      short loc_99C0AC
0x99C097: xor     edx, edx
0x99C099: test    esi, esi
0x99C09B: setnle  dl
0x99C09E: lea     edx, [edx+edx-1]
0x99C0A2: mov     esi, edx
0x99C0A4: test    esi, esi
0x99C0A6: jnz     loc_99B6F0
0x99C0AC: movzx   esi, byte ptr [eax-11h]
0x99C0B0: movzx   edx, byte ptr [ecx-11h]
0x99C0B4: sub     esi, edx
0x99C0B6: jz      short loc_99C0CD
0x99C0B8: xor     edx, edx
0x99C0BA: test    esi, esi
0x99C0BC: setnle  dl
0x99C0BF: lea     edx, [edx+edx-1]
0x99C0C3: mov     esi, edx
0x99C0C5: test    esi, esi
0x99C0C7: jnz     loc_99B6F0
0x99C0CD: movzx   esi, byte ptr [eax-10h]
0x99C0D1: movzx   edx, byte ptr [ecx-10h]
0x99C0D5: sub     esi, edx
0x99C0D7: jz      short loc_99C0EE
0x99C0D9: xor     edx, edx
0x99C0DB: test    esi, esi
0x99C0DD: setnle  dl
0x99C0E0: lea     edx, [edx+edx-1]
0x99C0E4: mov     esi, edx
0x99C0E6: test    esi, esi
0x99C0E8: jnz     loc_99B6F0
0x99C0EE: movzx   esi, byte ptr [eax-0Fh]
0x99C0F2: movzx   edx, byte ptr [ecx-0Fh]
0x99C0F6: sub     esi, edx
0x99C0F8: jz      short loc_99C10B
0x99C0FA: xor     edx, edx
0x99C0FC: test    esi, esi
0x99C0FE: setnle  dl
0x99C101: lea     edx, [edx+edx-1]
0x99C105: mov     esi, edx
0x99C107: jmp     short loc_99C10B
0x99C109: xor     esi, esi
0x99C10B: test    esi, esi
0x99C10D: jnz     loc_99B6F0
0x99C113: mov     edx, [eax-0Eh]; jumptable 0099B6E9 case 14
0x99C116: cmp     edx, [ecx-0Eh]
0x99C119: jz      short loc_99C198
0x99C11B: movzx   esi, dl
0x99C11E: movzx   edx, byte ptr [ecx-0Eh]
0x99C122: sub     esi, edx
0x99C124: jz      short loc_99C13B
0x99C126: xor     edx, edx
0x99C128: test    esi, esi
0x99C12A: setnle  dl
0x99C12D: lea     edx, [edx+edx-1]
0x99C131: mov     esi, edx
0x99C133: test    esi, esi
0x99C135: jnz     loc_99B6F0
0x99C13B: movzx   esi, byte ptr [eax-0Dh]
0x99C13F: movzx   edx, byte ptr [ecx-0Dh]
0x99C143: sub     esi, edx
0x99C145: jz      short loc_99C15C
0x99C147: xor     edx, edx
0x99C149: test    esi, esi
0x99C14B: setnle  dl
0x99C14E: lea     edx, [edx+edx-1]
0x99C152: mov     esi, edx
0x99C154: test    esi, esi
0x99C156: jnz     loc_99B6F0
0x99C15C: movzx   esi, byte ptr [eax-0Ch]
0x99C160: movzx   edx, byte ptr [ecx-0Ch]
0x99C164: sub     esi, edx
0x99C166: jz      short loc_99C17D
0x99C168: xor     edx, edx
0x99C16A: test    esi, esi
0x99C16C: setnle  dl
0x99C16F: lea     edx, [edx+edx-1]
0x99C173: mov     esi, edx
0x99C175: test    esi, esi
0x99C177: jnz     loc_99B6F0
0x99C17D: movzx   esi, byte ptr [eax-0Bh]
0x99C181: movzx   edx, byte ptr [ecx-0Bh]
0x99C185: sub     esi, edx
0x99C187: jz      short loc_99C19A
0x99C189: xor     edx, edx
0x99C18B: test    esi, esi
0x99C18D: setnle  dl
0x99C190: lea     edx, [edx+edx-1]
0x99C194: mov     esi, edx
0x99C196: jmp     short loc_99C19A
0x99C198: xor     esi, esi
0x99C19A: test    esi, esi
0x99C19C: jnz     loc_99B6F0
0x99C1A2: mov     edx, [eax-0Ah]; jumptable 0099B6E9 case 10
0x99C1A5: cmp     edx, [ecx-0Ah]
0x99C1A8: jz      short loc_99C228
0x99C1AA: movzx   edx, byte ptr [ecx-0Ah]
0x99C1AE: movzx   esi, byte ptr [eax-0Ah]
0x99C1B2: sub     esi, edx
0x99C1B4: jz      short loc_99C1CB
0x99C1B6: xor     edx, edx
0x99C1B8: test    esi, esi
0x99C1BA: setnle  dl
0x99C1BD: lea     edx, [edx+edx-1]
0x99C1C1: mov     esi, edx
0x99C1C3: test    esi, esi
0x99C1C5: jnz     loc_99B6F0
0x99C1CB: movzx   edx, byte ptr [ecx-9]
0x99C1CF: movzx   esi, byte ptr [eax-9]
0x99C1D3: sub     esi, edx
0x99C1D5: jz      short loc_99C1EC
0x99C1D7: xor     edx, edx
0x99C1D9: test    esi, esi
0x99C1DB: setnle  dl
0x99C1DE: lea     edx, [edx+edx-1]
0x99C1E2: mov     esi, edx
0x99C1E4: test    esi, esi
0x99C1E6: jnz     loc_99B6F0
0x99C1EC: movzx   edx, byte ptr [ecx-8]
0x99C1F0: movzx   esi, byte ptr [eax-8]
0x99C1F4: sub     esi, edx
0x99C1F6: jz      short loc_99C20D
0x99C1F8: xor     edx, edx
0x99C1FA: test    esi, esi
0x99C1FC: setnle  dl
0x99C1FF: lea     edx, [edx+edx-1]
0x99C203: mov     esi, edx
0x99C205: test    esi, esi
0x99C207: jnz     loc_99B6F0
0x99C20D: movzx   edx, byte ptr [ecx-7]
0x99C211: movzx   esi, byte ptr [eax-7]
0x99C215: sub     esi, edx
0x99C217: jz      short loc_99C22A
0x99C219: xor     edx, edx
0x99C21B: test    esi, esi
0x99C21D: setnle  dl
0x99C220: lea     edx, [edx+edx-1]
0x99C224: mov     esi, edx
0x99C226: jmp     short loc_99C22A
0x99C228: xor     esi, esi
0x99C22A: test    esi, esi
0x99C22C: jnz     loc_99B6F0
0x99C232: mov     edx, [eax-6]; jumptable 0099B6E9 case 6
0x99C235: cmp     edx, [ecx-6]
0x99C238: jz      short loc_99C2B7
0x99C23A: movzx   esi, dl
0x99C23D: movzx   edx, byte ptr [ecx-6]
0x99C241: sub     esi, edx
0x99C243: jz      short loc_99C25A
0x99C245: xor     edx, edx
0x99C247: test    esi, esi
0x99C249: setnle  dl
0x99C24C: lea     edx, [edx+edx-1]
0x99C250: mov     esi, edx
0x99C252: test    esi, esi
0x99C254: jnz     loc_99B6F0
0x99C25A: movzx   esi, byte ptr [eax-5]
0x99C25E: movzx   edx, byte ptr [ecx-5]
0x99C262: sub     esi, edx
0x99C264: jz      short loc_99C27B
0x99C266: xor     edx, edx
0x99C268: test    esi, esi
0x99C26A: setnle  dl
0x99C26D: lea     edx, [edx+edx-1]
0x99C271: mov     esi, edx
0x99C273: test    esi, esi
0x99C275: jnz     loc_99B6F0
0x99C27B: movzx   esi, byte ptr [eax-4]
0x99C27F: movzx   edx, byte ptr [ecx-4]
0x99C283: sub     esi, edx
0x99C285: jz      short loc_99C29C
0x99C287: xor     edx, edx
0x99C289: test    esi, esi
0x99C28B: setnle  dl
0x99C28E: lea     edx, [edx+edx-1]
0x99C292: mov     esi, edx
0x99C294: test    esi, esi
0x99C296: jnz     loc_99B6F0
0x99C29C: movzx   esi, byte ptr [eax-3]
0x99C2A0: movzx   edx, byte ptr [ecx-3]
0x99C2A4: sub     esi, edx
0x99C2A6: jz      short loc_99C2B9
0x99C2A8: xor     edx, edx
0x99C2AA: test    esi, esi
0x99C2AC: setnle  dl
0x99C2AF: lea     edx, [edx+edx-1]
0x99C2B3: mov     esi, edx
0x99C2B5: jmp     short loc_99C2B9
0x99C2B7: xor     esi, esi
0x99C2B9: test    esi, esi
0x99C2BB: jnz     loc_99B6F0
0x99C2C1: mov     dx, [eax-2]; jumptable 0099B6E9 case 2
0x99C2C5: cmp     dx, [ecx-2]
0x99C2C9: jz      _memcmp___$LN132; jumptable 0099B6E9 default case, case 0
0x99C2CF: movzx   edx, byte ptr [ecx-2]
0x99C2D3: movzx   esi, byte ptr [eax-2]
0x99C2D7: sub     esi, edx
0x99C2D9: jz      _memcmp___$LN103; jumptable 0099B6E9 case 1
0x99C2DF: xor     edx, edx
0x99C2E1: test    esi, esi
0x99C2E3: setnle  dl
0x99C2E6: lea     edx, [edx+edx-1]
0x99C2EA: test    edx, edx
0x99C2EC: jnz     loc_99C705
0x99C2F2: jmp     _memcmp___$LN103; jumptable 0099B6E9 case 1
0x99C2F7: mov     edx, [eax-1Fh]; jumptable 0099B6E9 case 31
0x99C2FA: cmp     edx, [ecx-1Fh]
0x99C2FD: jz      short loc_99C37D
0x99C2FF: movzx   edx, byte ptr [ecx-1Fh]
0x99C303: movzx   esi, byte ptr [eax-1Fh]
0x99C307: sub     esi, edx
0x99C309: jz      short loc_99C320
0x99C30B: xor     edx, edx
0x99C30D: test    esi, esi
0x99C30F: setnle  dl
0x99C312: lea     edx, [edx+edx-1]
0x99C316: mov     esi, edx
0x99C318: test    esi, esi
0x99C31A: jnz     loc_99B6F0
0x99C320: movzx   esi, byte ptr [eax-1Eh]
0x99C324: movzx   edx, byte ptr [ecx-1Eh]
0x99C328: sub     esi, edx
0x99C32A: jz      short loc_99C341
0x99C32C: xor     edx, edx
0x99C32E: test    esi, esi
0x99C330: setnle  dl
0x99C333: lea     edx, [edx+edx-1]
0x99C337: mov     esi, edx
0x99C339: test    esi, esi
0x99C33B: jnz     loc_99B6F0
0x99C341: movzx   esi, byte ptr [eax-1Dh]
0x99C345: movzx   edx, byte ptr [ecx-1Dh]
0x99C349: sub     esi, edx
0x99C34B: jz      short loc_99C362
0x99C34D: xor     edx, edx
0x99C34F: test    esi, esi
0x99C351: setnle  dl
0x99C354: lea     edx, [edx+edx-1]
0x99C358: mov     esi, edx
0x99C35A: test    esi, esi
0x99C35C: jnz     loc_99B6F0
0x99C362: movzx   esi, byte ptr [eax-1Ch]
0x99C366: movzx   edx, byte ptr [ecx-1Ch]
0x99C36A: sub     esi, edx
0x99C36C: jz      short loc_99C37F
0x99C36E: xor     edx, edx
0x99C370: test    esi, esi
0x99C372: setnle  dl
0x99C375: lea     edx, [edx+edx-1]
0x99C379: mov     esi, edx
0x99C37B: jmp     short loc_99C37F
0x99C37D: xor     esi, esi
0x99C37F: test    esi, esi
0x99C381: jnz     loc_99B6F0
0x99C387: mov     edx, [eax-1Bh]; jumptable 0099B6E9 case 27
0x99C38A: cmp     edx, [ecx-1Bh]
0x99C38D: jz      short loc_99C40C
0x99C38F: movzx   esi, dl
0x99C392: movzx   edx, byte ptr [ecx-1Bh]
0x99C396: sub     esi, edx
0x99C398: jz      short loc_99C3AF
0x99C39A: xor     edx, edx
0x99C39C: test    esi, esi
0x99C39E: setnle  dl
0x99C3A1: lea     edx, [edx+edx-1]
0x99C3A5: mov     esi, edx
0x99C3A7: test    esi, esi
0x99C3A9: jnz     loc_99B6F0
0x99C3AF: movzx   esi, byte ptr [eax-1Ah]
0x99C3B3: movzx   edx, byte ptr [ecx-1Ah]
0x99C3B7: sub     esi, edx
0x99C3B9: jz      short loc_99C3D0
0x99C3BB: xor     edx, edx
0x99C3BD: test    esi, esi
0x99C3BF: setnle  dl
0x99C3C2: lea     edx, [edx+edx-1]
0x99C3C6: mov     esi, edx
0x99C3C8: test    esi, esi
0x99C3CA: jnz     loc_99B6F0
0x99C3D0: movzx   esi, byte ptr [eax-19h]
0x99C3D4: movzx   edx, byte ptr [ecx-19h]
0x99C3D8: sub     esi, edx
0x99C3DA: jz      short loc_99C3F1
0x99C3DC: xor     edx, edx
0x99C3DE: test    esi, esi
0x99C3E0: setnle  dl
0x99C3E3: lea     edx, [edx+edx-1]
0x99C3E7: mov     esi, edx
0x99C3E9: test    esi, esi
0x99C3EB: jnz     loc_99B6F0
0x99C3F1: movzx   esi, byte ptr [eax-18h]
0x99C3F5: movzx   edx, byte ptr [ecx-18h]
0x99C3F9: sub     esi, edx
0x99C3FB: jz      short loc_99C40E
0x99C3FD: xor     edx, edx
0x99C3FF: test    esi, esi
0x99C401: setnle  dl
0x99C404: lea     edx, [edx+edx-1]
0x99C408: mov     esi, edx
0x99C40A: jmp     short loc_99C40E
0x99C40C: xor     esi, esi
0x99C40E: test    esi, esi
0x99C410: jnz     loc_99B6F0
0x99C416: mov     edx, [eax-17h]; jumptable 0099B6E9 case 23
0x99C419: cmp     edx, [ecx-17h]
0x99C41C: jz      short loc_99C49B
0x99C41E: movzx   esi, dl
0x99C421: movzx   edx, byte ptr [ecx-17h]
0x99C425: sub     esi, edx
0x99C427: jz      short loc_99C43E
0x99C429: xor     edx, edx
0x99C42B: test    esi, esi
0x99C42D: setnle  dl
0x99C430: lea     edx, [edx+edx-1]
0x99C434: mov     esi, edx
0x99C436: test    esi, esi
0x99C438: jnz     loc_99B6F0
0x99C43E: movzx   esi, byte ptr [eax-16h]
0x99C442: movzx   edx, byte ptr [ecx-16h]
0x99C446: sub     esi, edx
0x99C448: jz      short loc_99C45F
0x99C44A: xor     edx, edx
0x99C44C: test    esi, esi
0x99C44E: setnle  dl
0x99C451: lea     edx, [edx+edx-1]
0x99C455: mov     esi, edx
0x99C457: test    esi, esi
0x99C459: jnz     loc_99B6F0
0x99C45F: movzx   esi, byte ptr [eax-15h]
0x99C463: movzx   edx, byte ptr [ecx-15h]
0x99C467: sub     esi, edx
0x99C469: jz      short loc_99C480
0x99C46B: xor     edx, edx
0x99C46D: test    esi, esi
0x99C46F: setnle  dl
0x99C472: lea     edx, [edx+edx-1]
0x99C476: mov     esi, edx
0x99C478: test    esi, esi
0x99C47A: jnz     loc_99B6F0
0x99C480: movzx   esi, byte ptr [eax-14h]
0x99C484: movzx   edx, byte ptr [ecx-14h]
0x99C488: sub     esi, edx
0x99C48A: jz      short loc_99C49D
0x99C48C: xor     edx, edx
0x99C48E: test    esi, esi
0x99C490: setnle  dl
0x99C493: lea     edx, [edx+edx-1]
0x99C497: mov     esi, edx
0x99C499: jmp     short loc_99C49D
0x99C49B: xor     esi, esi
0x99C49D: test    esi, esi
0x99C49F: jnz     loc_99B6F0
0x99C4A5: mov     edx, [eax-13h]; jumptable 0099B6E9 case 19
0x99C4A8: cmp     edx, [ecx-13h]
0x99C4AB: jz      short loc_99C52A
0x99C4AD: movzx   esi, dl
0x99C4B0: movzx   edx, byte ptr [ecx-13h]
0x99C4B4: sub     esi, edx
0x99C4B6: jz      short loc_99C4CD
0x99C4B8: xor     edx, edx
0x99C4BA: test    esi, esi
0x99C4BC: setnle  dl
0x99C4BF: lea     edx, [edx+edx-1]
0x99C4C3: mov     esi, edx
0x99C4C5: test    esi, esi
0x99C4C7: jnz     loc_99B6F0
0x99C4CD: movzx   esi, byte ptr [eax-12h]
0x99C4D1: movzx   edx, byte ptr [ecx-12h]
0x99C4D5: sub     esi, edx
0x99C4D7: jz      short loc_99C4EE
0x99C4D9: xor     edx, edx
0x99C4DB: test    esi, esi
0x99C4DD: setnle  dl
0x99C4E0: lea     edx, [edx+edx-1]
0x99C4E4: mov     esi, edx
0x99C4E6: test    esi, esi
0x99C4E8: jnz     loc_99B6F0
0x99C4EE: movzx   esi, byte ptr [eax-11h]
0x99C4F2: movzx   edx, byte ptr [ecx-11h]
0x99C4F6: sub     esi, edx
0x99C4F8: jz      short loc_99C50F
0x99C4FA: xor     edx, edx
0x99C4FC: test    esi, esi
0x99C4FE: setnle  dl
0x99C501: lea     edx, [edx+edx-1]
0x99C505: mov     esi, edx
0x99C507: test    esi, esi
0x99C509: jnz     loc_99B6F0
0x99C50F: movzx   esi, byte ptr [eax-10h]
0x99C513: movzx   edx, byte ptr [ecx-10h]
0x99C517: sub     esi, edx
0x99C519: jz      short loc_99C52C
0x99C51B: xor     edx, edx
0x99C51D: test    esi, esi
0x99C51F: setnle  dl
0x99C522: lea     edx, [edx+edx-1]
0x99C526: mov     esi, edx
0x99C528: jmp     short loc_99C52C
0x99C52A: xor     esi, esi
0x99C52C: test    esi, esi
0x99C52E: jnz     loc_99B6F0
0x99C534: mov     edx, [eax-0Fh]; jumptable 0099B6E9 case 15
0x99C537: cmp     edx, [ecx-0Fh]
0x99C53A: jz      short loc_99C5BA
0x99C53C: movzx   edx, byte ptr [ecx-0Fh]
0x99C540: movzx   esi, byte ptr [eax-0Fh]
0x99C544: sub     esi, edx
0x99C546: jz      short loc_99C55D
0x99C548: xor     edx, edx
0x99C54A: test    esi, esi
0x99C54C: setnle  dl
0x99C54F: lea     edx, [edx+edx-1]
0x99C553: mov     esi, edx
0x99C555: test    esi, esi
0x99C557: jnz     loc_99B6F0
0x99C55D: movzx   esi, byte ptr [eax-0Eh]
0x99C561: movzx   edx, byte ptr [ecx-0Eh]
0x99C565: sub     esi, edx
0x99C567: jz      short loc_99C57E
0x99C569: xor     edx, edx
0x99C56B: test    esi, esi
0x99C56D: setnle  dl
0x99C570: lea     edx, [edx+edx-1]
0x99C574: mov     esi, edx
0x99C576: test    esi, esi
0x99C578: jnz     loc_99B6F0
0x99C57E: movzx   esi, byte ptr [eax-0Dh]
0x99C582: movzx   edx, byte ptr [ecx-0Dh]
0x99C586: sub     esi, edx
0x99C588: jz      short loc_99C59F
0x99C58A: xor     edx, edx
0x99C58C: test    esi, esi
0x99C58E: setnle  dl
0x99C591: lea     edx, [edx+edx-1]
0x99C595: mov     esi, edx
0x99C597: test    esi, esi
0x99C599: jnz     loc_99B6F0
0x99C59F: movzx   esi, byte ptr [eax-0Ch]
0x99C5A3: movzx   edx, byte ptr [ecx-0Ch]
0x99C5A7: sub     esi, edx
0x99C5A9: jz      short loc_99C5BC
0x99C5AB: xor     edx, edx
0x99C5AD: test    esi, esi
0x99C5AF: setnle  dl
0x99C5B2: lea     edx, [edx+edx-1]
0x99C5B6: mov     esi, edx
0x99C5B8: jmp     short loc_99C5BC
0x99C5BA: xor     esi, esi
0x99C5BC: test    esi, esi
0x99C5BE: jnz     loc_99B6F0
0x99C5C4: mov     edx, [eax-0Bh]; jumptable 0099B6E9 case 11
0x99C5C7: cmp     edx, [ecx-0Bh]
0x99C5CA: jz      short loc_99C649
0x99C5CC: movzx   esi, dl
0x99C5CF: movzx   edx, byte ptr [ecx-0Bh]
0x99C5D3: sub     esi, edx
0x99C5D5: jz      short loc_99C5EC
0x99C5D7: xor     edx, edx
0x99C5D9: test    esi, esi
0x99C5DB: setnle  dl
0x99C5DE: lea     edx, [edx+edx-1]
0x99C5E2: mov     esi, edx
0x99C5E4: test    esi, esi
0x99C5E6: jnz     loc_99B6F0
0x99C5EC: movzx   esi, byte ptr [eax-0Ah]
0x99C5F0: movzx   edx, byte ptr [ecx-0Ah]
0x99C5F4: sub     esi, edx
0x99C5F6: jz      short loc_99C60D
0x99C5F8: xor     edx, edx
0x99C5FA: test    esi, esi
0x99C5FC: setnle  dl
0x99C5FF: lea     edx, [edx+edx-1]
0x99C603: mov     esi, edx
0x99C605: test    esi, esi
0x99C607: jnz     loc_99B6F0
0x99C60D: movzx   esi, byte ptr [eax-9]
0x99C611: movzx   edx, byte ptr [ecx-9]
0x99C615: sub     esi, edx
0x99C617: jz      short loc_99C62E
0x99C619: xor     edx, edx
0x99C61B: test    esi, esi
0x99C61D: setnle  dl
0x99C620: lea     edx, [edx+edx-1]
0x99C624: mov     esi, edx
0x99C626: test    esi, esi
0x99C628: jnz     loc_99B6F0
0x99C62E: movzx   esi, byte ptr [eax-8]
0x99C632: movzx   edx, byte ptr [ecx-8]
0x99C636: sub     esi, edx
0x99C638: jz      short loc_99C64B
0x99C63A: xor     edx, edx
0x99C63C: test    esi, esi
0x99C63E: setnle  dl
0x99C641: lea     edx, [edx+edx-1]
0x99C645: mov     esi, edx
0x99C647: jmp     short loc_99C64B
0x99C649: xor     esi, esi
0x99C64B: test    esi, esi
0x99C64D: jnz     loc_99B6F0
0x99C653: mov     edx, [eax-7]; jumptable 0099B6E9 case 7
0x99C656: cmp     edx, [ecx-7]
0x99C659: jz      short loc_99C6D8
0x99C65B: movzx   esi, dl
0x99C65E: movzx   edx, byte ptr [ecx-7]
0x99C662: sub     esi, edx
0x99C664: jz      short loc_99C67B
0x99C666: xor     edx, edx
0x99C668: test    esi, esi
0x99C66A: setnle  dl
0x99C66D: lea     edx, [edx+edx-1]
0x99C671: mov     esi, edx
0x99C673: test    esi, esi
0x99C675: jnz     loc_99B6F0
0x99C67B: movzx   esi, byte ptr [eax-6]
0x99C67F: movzx   edx, byte ptr [ecx-6]
0x99C683: sub     esi, edx
0x99C685: jz      short loc_99C69C
0x99C687: xor     edx, edx
0x99C689: test    esi, esi
0x99C68B: setnle  dl
0x99C68E: lea     edx, [edx+edx-1]
0x99C692: mov     esi, edx
0x99C694: test    esi, esi
0x99C696: jnz     loc_99B6F0
0x99C69C: movzx   esi, byte ptr [eax-5]
0x99C6A0: movzx   edx, byte ptr [ecx-5]
0x99C6A4: sub     esi, edx
0x99C6A6: jz      short loc_99C6BD
0x99C6A8: xor     edx, edx
0x99C6AA: test    esi, esi
0x99C6AC: setnle  dl
0x99C6AF: lea     edx, [edx+edx-1]
0x99C6B3: mov     esi, edx
0x99C6B5: test    esi, esi
0x99C6B7: jnz     loc_99B6F0
0x99C6BD: movzx   esi, byte ptr [eax-4]
0x99C6C1: movzx   edx, byte ptr [ecx-4]
0x99C6C5: sub     esi, edx
0x99C6C7: jz      short loc_99C6DA
0x99C6C9: xor     edx, edx
0x99C6CB: test    esi, esi
0x99C6CD: setnle  dl
0x99C6D0: lea     edx, [edx+edx-1]
0x99C6D4: mov     esi, edx
0x99C6D6: jmp     short loc_99C6DA
0x99C6D8: xor     esi, esi
0x99C6DA: test    esi, esi
0x99C6DC: jnz     loc_99B6F0
0x99C6E2: movzx   esi, byte ptr [eax-3]; jumptable 0099B6E9 case 3
0x99C6E6: movzx   edx, byte ptr [ecx-3]
0x99C6EA: sub     esi, edx
0x99C6EC: jz      loc_99C2CF
0x99C6F2: xor     edx, edx
0x99C6F4: test    esi, esi
0x99C6F6: setnle  dl
0x99C6F9: lea     edx, [edx+edx-1]
0x99C6FD: test    edx, edx
0x99C6FF: jz      loc_99C2CF
0x99C705: mov     eax, edx
0x99C707: jmp     loc_99BAC5
0x99C70C: mov     ecx, [ebp+Buf1]
0x99C70F: mov     esi, [ebp+Buf2]
0x99C712: movzx   eax, byte ptr [ecx]
0x99C715: movzx   edx, byte ptr [esi]
0x99C718: sub     eax, edx
0x99C71A: jz      short loc_99C731
0x99C71C: xor     edx, edx
0x99C71E: test    eax, eax
0x99C720: setnle  dl
0x99C723: lea     edx, [edx+edx-1]
0x99C727: mov     eax, edx
0x99C729: test    eax, eax
0x99C72B: jnz     loc_99C81E
0x99C731: movzx   eax, byte ptr [ecx+1]
0x99C735: movzx   edx, byte ptr [esi+1]
0x99C739: sub     eax, edx
0x99C73B: jz      short loc_99C752
0x99C73D: xor     edx, edx
0x99C73F: test    eax, eax
0x99C741: setnle  dl
0x99C744: lea     edx, [edx+edx-1]
0x99C748: mov     eax, edx
0x99C74A: test    eax, eax
0x99C74C: jnz     loc_99C81E
0x99C752: movzx   eax, byte ptr [ecx+2]
0x99C756: movzx   edx, byte ptr [esi+2]
0x99C75A: sub     eax, edx
0x99C75C: jz      short loc_99C773
0x99C75E: xor     edx, edx
0x99C760: test    eax, eax
0x99C762: setnle  dl
0x99C765: lea     edx, [edx+edx-1]
0x99C769: mov     eax, edx
0x99C76B: test    eax, eax
0x99C76D: jnz     loc_99C81E
0x99C773: movzx   eax, byte ptr [ecx+3]
0x99C777: movzx   ecx, byte ptr [esi+3]
0x99C77B: sub     eax, ecx
0x99C77D: jz      loc_99C81E
0x99C783: xor     ecx, ecx
0x99C785: test    eax, eax
0x99C787: setnle  cl
0x99C78A: lea     ecx, [ecx+ecx-1]
0x99C78E: mov     eax, ecx
0x99C790: jmp     loc_99C81E
0x99C795: mov     ecx, [ebp+Buf1]
0x99C798: mov     esi, [ebp+Buf2]
0x99C79B: movzx   eax, byte ptr [ecx]
0x99C79E: movzx   edx, byte ptr [esi]
0x99C7A1: sub     eax, edx
0x99C7A3: jz      short loc_99C7B6
0x99C7A5: xor     edx, edx
0x99C7A7: test    eax, eax
0x99C7A9: setnle  dl
0x99C7AC: lea     edx, [edx+edx-1]
0x99C7B0: mov     eax, edx
0x99C7B2: test    eax, eax
0x99C7B4: jnz     short loc_99C81E
0x99C7B6: movzx   eax, byte ptr [ecx+1]
0x99C7BA: movzx   edx, byte ptr [esi+1]
0x99C7BE: sub     eax, edx
0x99C7C0: jz      short loc_99C7D3
0x99C7C2: xor     edx, edx
0x99C7C4: test    eax, eax
0x99C7C6: setnle  dl
0x99C7C9: lea     edx, [edx+edx-1]
0x99C7CD: mov     eax, edx
0x99C7CF: test    eax, eax
0x99C7D1: jnz     short loc_99C81E
0x99C7D3: movzx   eax, byte ptr [ecx+2]
0x99C7D7: movzx   ecx, byte ptr [esi+2]
0x99C7DB: jmp     short loc_99C77B
0x99C7DD: mov     ecx, [ebp+Buf1]
0x99C7E0: mov     esi, [ebp+Buf2]
0x99C7E3: movzx   eax, byte ptr [ecx]
0x99C7E6: movzx   edx, byte ptr [esi]
0x99C7E9: sub     eax, edx
0x99C7EB: jz      short loc_99C7FE
0x99C7ED: xor     edx, edx
0x99C7EF: test    eax, eax
0x99C7F1: setnle  dl
0x99C7F4: lea     edx, [edx+edx-1]
0x99C7F8: mov     eax, edx
0x99C7FA: test    eax, eax
0x99C7FC: jnz     short loc_99C81E
0x99C7FE: movzx   eax, byte ptr [ecx+1]
0x99C802: movzx   ecx, byte ptr [esi+1]
0x99C806: jmp     loc_99C77B
0x99C80B: mov     eax, [ebp+Buf1]
0x99C80E: mov     ecx, [ebp+Buf2]
0x99C811: movzx   eax, byte ptr [eax]
0x99C814: movzx   ecx, byte ptr [ecx]
0x99C817: jmp     loc_99C77B
0x99C81C: xor     eax, eax
0x99C81E: pop     edi
0x99C81F: pop     esi
0x99C820: pop     ebp
0x99C821: retn
