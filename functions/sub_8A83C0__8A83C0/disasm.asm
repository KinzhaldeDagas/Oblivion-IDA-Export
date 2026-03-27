0x8A83C0: push    ebx
0x8A83C1: push    ebp
0x8A83C2: push    esi
0x8A83C3: push    edi
0x8A83C4: push    80h ; '€'
0x8A83C9: push    0
0x8A83CB: push    offset dword_BA7E30
0x8A83D0: call    __memset
0x8A83D5: push    80h ; '€'
0x8A83DA: push    0FFh
0x8A83DF: push    offset dword_BA7DB0
0x8A83E4: call    __memset
0x8A83E9: push    80h ; '€'
0x8A83EE: push    0
0x8A83F0: push    offset dword_BA7EB0
0x8A83F5: call    __memset
0x8A83FA: mov     eax, ds:0BA7E34h
0x8A83FF: or      eax, 40h
0x8A8402: or      eax, 1000h
0x8A8407: or      eax, 80h
0x8A840C: or      eax, 2000h
0x8A8411: or      eax, 20000h
0x8A8416: mov     ds:0BA7E34h, eax
0x8A841B: mov     eax, ds:0BA7E38h
0x8A8420: or      eax, 40h
0x8A8423: or      eax, 1000h
0x8A8428: or      eax, 80h
0x8A842D: mov     edi, ds:0BA7E48h
0x8A8433: or      eax, 2000h
0x8A8438: mov     ebx, ds:0BA7E60h
0x8A843E: mov     edx, ds:0BA7E64h
0x8A8444: mov     ds:0BA7E38h, eax
0x8A8449: mov     eax, ds:0BA7E3Ch
0x8A844E: mov     ecx, ds:0BA7E4Ch
0x8A8454: mov     esi, ds:0BA7E74h
0x8A845A: or      eax, 40h
0x8A845D: or      eax, 1000h
0x8A8462: or      eax, 80h
0x8A8467: or      eax, 2000h
0x8A846C: mov     ebp, ds:0BA7E50h
0x8A8472: mov     ds:0BA7E3Ch, eax
0x8A8477: mov     eax, ds:0BA7E40h
0x8A847C: or      eax, 40h
0x8A847F: or      eax, 1000h
0x8A8484: or      edi, 2
0x8A8487: or      eax, 80h
0x8A848C: or      edi, 4
0x8A848F: or      ebx, 2
0x8A8492: or      edx, 2
0x8A8495: or      eax, 2000h
0x8A849A: or      edi, 8
0x8A849D: or      ebx, 4
0x8A84A0: or      edx, 4
0x8A84A3: or      eax, 20000h
0x8A84A8: or      edi, 10h
0x8A84AB: or      ecx, 2
0x8A84AE: or      ebx, 8
0x8A84B1: or      edx, 8
0x8A84B4: mov     ds:0BA7E40h, eax
0x8A84B9: mov     eax, ds:0BA7E44h
0x8A84BE: or      esi, 2
0x8A84C1: or      edi, 1000h
0x8A84C7: or      ecx, 4
0x8A84CA: or      ebx, 10h
0x8A84CD: or      edx, 10h
0x8A84D0: or      esi, 10h
0x8A84D3: or      eax, 1000h
0x8A84D8: or      edi, 2000h
0x8A84DE: or      ecx, 8
0x8A84E1: or      ebx, 20h
0x8A84E4: or      edx, 20h
0x8A84E7: or      eax, 2000h
0x8A84EC: or      esi, 40h
0x8A84EF: or      edi, 20000h
0x8A84F5: add     esp, 24h
0x8A84F8: or      ecx, 10h
0x8A84FB: or      ebx, 40h
0x8A84FE: or      edx, 40h
0x8A8501: mov     ds:0BA7E44h, eax
0x8A8506: mov     ds:0BA7E74h, esi
0x8A850C: or      edi, 100h
0x8A8512: mov     eax, ds:0BA7E7Ch
0x8A8517: or      dword ptr ds:0BA7E58h, 80h
0x8A8521: or      dword ptr ds:0BA7E58h, 80000h
0x8A852B: mov     esi, ds:0BA7E68h
0x8A8531: or      eax, 2000h
0x8A8536: or      dword ptr ds:0BA7E54h, 80h
0x8A8540: or      dword ptr ds:0BA7E6Ch, 80h
0x8A854A: or      eax, 100h
0x8A854F: or      dword ptr ds:0BA7E54h, 80000h
0x8A8559: or      dword ptr ds:0BA7E6Ch, 80000h
0x8A8563: or      dword ptr ds:0BA7E70h, 80h
0x8A856D: or      eax, 4000h
0x8A8572: or      dword ptr ds:0BA7E54h, 8000h
0x8A857C: or      dword ptr ds:0BA7E6Ch, 200h
0x8A8586: or      eax, 200h
0x8A858B: or      dword ptr ds:0BA7E70h, 80000h
0x8A8595: or      dword ptr ds:0BA7E54h, 4000h
0x8A859F: or      dword ptr ds:0BA7E6Ch, 400h
0x8A85A9: or      dword ptr ds:0BA7E74h, 1000h
0x8A85B3: or      esi, 40h
0x8A85B6: mov     ds:0BA7E7Ch, eax
0x8A85BB: mov     eax, ds:0BA7E58h
0x8A85C0: or      dword ptr ds:0BA7E7Ch, 8000h
0x8A85CA: or      dword ptr ds:0BA7E7Ch, 400h
0x8A85D4: or      dword ptr ds:0BA7E7Ch, 10000h
0x8A85DE: or      dword ptr ds:0BA7E7Ch, 400000h
0x8A85E8: or      esi, 80h
0x8A85EE: or      eax, 4000h
0x8A85F3: or      esi, 80000h
0x8A85F9: or      ecx, 2000h
0x8A85FF: or      eax, 8000h
0x8A8604: or      esi, 100h
0x8A860A: or      edx, 80h
0x8A8610: or      ecx, 100h
0x8A8616: mov     ds:0BA7E58h, eax
0x8A861B: mov     eax, ds:0BA7E5Ch
0x8A8620: or      esi, 200h
0x8A8626: or      ecx, 4000h
0x8A862C: or      edx, 80000h
0x8A8632: or      esi, 400h
0x8A8638: or      eax, 40h
0x8A863B: or      ebp, 40h
0x8A863E: or      ecx, 200h
0x8A8644: or      edx, 100h
0x8A864A: or      eax, 80h
0x8A864F: or      esi, 1000h
0x8A8655: or      ebp, 80h
0x8A865B: or      ecx, 8000h
0x8A8661: or      ebx, 40h
0x8A8664: or      edx, 4000h
0x8A866A: mov     ds:0BA7E5Ch, eax
0x8A866F: mov     eax, 2000h
0x8A8674: or      ds:0BA7E54h, eax
0x8A867A: or      ds:0BA7E6Ch, eax
0x8A8680: or      ds:0BA7E58h, eax
0x8A8686: or      ds:0BA7E70h, eax
0x8A868C: or      esi, eax
0x8A868E: or      ecx, 400h
0x8A8694: or      ebp, 80000h
0x8A869A: or      ebx, 80h
0x8A86A0: or      edx, 200h
0x8A86A6: or      edi, 4000h
0x8A86AC: mov     ds:0BA7E68h, esi
0x8A86B2: mov     esi, ds:0BA7E88h
0x8A86B8: or      ecx, 10000h
0x8A86BE: or      ebp, 4000h
0x8A86C4: or      ebx, 20000h
0x8A86CA: or      edx, 8000h
0x8A86D0: or      edi, 800h
0x8A86D6: or      ecx, 800h
0x8A86DC: or      ebx, 4000h
0x8A86E2: or      ebp, 1000h
0x8A86E8: or      edx, 400h
0x8A86EE: or      esi, 80000h
0x8A86F4: or      edi, 1000h
0x8A86FA: or      ecx, 1000h
0x8A8700: or      ebx, 100h
0x8A8706: or      ebp, eax
0x8A8708: or      edx, 10000h
0x8A870E: or      esi, 40h
0x8A8711: or      edi, 400000h
0x8A8717: or      dword ptr ds:0BA7E70h, 400000h
0x8A8721: mov     eax, ds:0BA7E70h
0x8A8726: or      eax, 100h
0x8A872B: or      eax, 200h
0x8A8730: mov     ds:0BA7E70h, eax
0x8A8735: mov     eax, ds:0BA7E78h
0x8A873A: or      eax, 100h
0x8A873F: or      eax, 200h
0x8A8744: mov     ds:0BA7E78h, eax
0x8A8749: mov     eax, ds:0BA7E90h
0x8A874E: or      eax, 80h
0x8A8753: or      eax, 20h
0x8A8756: or      eax, 40h
0x8A8759: or      eax, 2000h
0x8A875E: or      eax, 800h
0x8A8763: or      dword ptr ds:0BA7E54h, 400000h
0x8A876D: or      dword ptr ds:0BA7E6Ch, 400000h
0x8A8777: or      dword ptr ds:0BA7E58h, 400000h
0x8A8781: or      dword ptr ds:0BA7E54h, 10000h
0x8A878B: or      eax, 1000h
0x8A8790: or      dword ptr ds:0BA7E44h, 400000h
0x8A879A: or      dword ptr ds:0BA7E40h, 400000h
0x8A87A4: or      dword ptr ds:0BA7E3Ch, 400000h
0x8A87AE: or      dword ptr ds:0BA7E38h, 400000h
0x8A87B8: or      dword ptr ds:0BA7E68h, 400000h
0x8A87C2: or      dword ptr ds:0BA7E6Ch, 100h
0x8A87CC: or      dword ptr ds:0BA7E54h, 40000h
0x8A87D6: or      dword ptr ds:0BA7E78h, 400h
0x8A87E0: or      dword ptr ds:0BA7E58h, 40000h
0x8A87EA: or      eax, 2
0x8A87ED: or      dword ptr ds:0BA7E44h, 1000000h
0x8A87F7: or      esi, 20h
0x8A87FA: or      eax, 10h
0x8A87FD: or      esi, 10h
0x8A8800: or      eax, 8
0x8A8803: or      esi, 8
0x8A8806: or      eax, 4
0x8A8809: or      esi, 4
0x8A880C: or      eax, 100h
0x8A8811: or      esi, 80h
0x8A8817: or      eax, 200h
0x8A881C: or      esi, 100h
0x8A8822: or      eax, 400h
0x8A8827: or      ebp, 400000h
0x8A882D: or      esi, 4000h
0x8A8833: or      eax, 4000h
0x8A8838: or      ecx, 400000h
0x8A883E: or      ebp, 8000h
0x8A8844: or      esi, 200h
0x8A884A: or      eax, 8000h
0x8A884F: or      ecx, 1000000h
0x8A8855: or      ebp, 10000h
0x8A885B: or      esi, 8000h
0x8A8861: or      eax, 10000h
0x8A8866: or      ebp, 40000h
0x8A886C: mov     ds:0BA7E4Ch, ecx
0x8A8872: mov     ecx, 1000000h
0x8A8877: or      ds:0BA7E5Ch, ecx
0x8A887D: or      ds:0BA7E34h, ecx
0x8A8883: or      ds:0BA7E40h, ecx
0x8A8889: or      ds:0BA7E3Ch, ecx
0x8A888F: or      ds:0BA7E38h, ecx
0x8A8895: or      ds:0BA7E54h, ecx
0x8A889B: or      ds:0BA7E58h, ecx
0x8A88A1: or      ds:0BA7E68h, ecx
0x8A88A7: or      ds:0BA7E6Ch, ecx
0x8A88AD: or      ds:0BA7E70h, ecx
0x8A88B3: or      ds:0BA7E78h, ecx
0x8A88B9: or      esi, 400h
0x8A88BF: or      eax, 40000h
0x8A88C4: or      edi, ecx
0x8A88C6: or      edx, ecx
0x8A88C8: or      ebx, ecx
0x8A88CA: or      ebp, ecx
0x8A88CC: or      esi, 10000h
0x8A88D2: or      eax, 80000h
0x8A88D7: or      ds:0BA7E7Ch, ecx
0x8A88DD: mov     ds:0BA7E48h, edi
0x8A88E3: mov     ds:0BA7E64h, edx
0x8A88E9: mov     ds:0BA7E60h, ebx
0x8A88EF: mov     ds:0BA7E50h, ebp
0x8A88F5: or      ds:0BA7E8Ch, ecx
0x8A88FB: or      ds:0BA7E74h, ecx
0x8A8901: or      esi, ecx
0x8A8903: mov     ecx, ds:0BA7DF8h
0x8A8909: and     ecx, 0FFFFFFFDh
0x8A890C: and     ecx, 0FFF7FFFFh
0x8A8912: and     ecx, 0FFFFFFFBh
0x8A8915: and     ecx, 0FFFFFFF7h
0x8A8918: and     ecx, 0FFFFFFEFh
0x8A891B: and     ecx, 0FFFFFFDFh
0x8A891E: and     ecx, 0FFFFFFBFh
0x8A8921: and     ecx, 0FFFFFF7Fh
0x8A8927: and     ecx, 0FFFFFEFFh
0x8A892D: and     ecx, 0FFFFFDFFh
0x8A8933: and     ecx, 0FFFFFBFFh
0x8A8939: and     ecx, 0FFFFF7FFh
0x8A893F: and     ecx, 0FFFFEFFFh
0x8A8945: and     ecx, 0FFFFDFFFh
0x8A894B: mov     edx, ds:0BA7E00h
0x8A8951: and     ecx, 0FFFFBFFFh
0x8A8957: mov     ebp, 0FFFBFFFFh
0x8A895C: and     ecx, 0FFFF7FFFh
0x8A8962: and     ds:0BA7DB4h, ebp
0x8A8968: and     ds:0BA7DFCh, ebp
0x8A896E: and     ecx, 0FFFDFFFFh
0x8A8974: mov     ebx, ds:0BA7E18h
0x8A897A: mov     edi, ds:0BA7E1Ch
0x8A8980: or      eax, 400000h
0x8A8985: and     ds:0BA7DB8h, ebp
0x8A898B: and     ds:0BA7DBCh, ebp
0x8A8991: and     ds:0BA7DC0h, ebp
0x8A8997: and     ds:0BA7DC4h, ebp
0x8A899D: and     ds:0BA7DC8h, ebp
0x8A89A3: and     ds:0BA7DCCh, ebp
0x8A89A9: and     ds:0BA7DD4h, ebp
0x8A89AF: and     ds:0BA7DD8h, ebp
0x8A89B5: and     ds:0BA7DDCh, ebp
0x8A89BB: and     ds:0BA7DE4h, ebp
0x8A89C1: and     ds:0BA7DE8h, ebp
0x8A89C7: and     ds:0BA7DF4h, ebp
0x8A89CD: and     ds:0BA7DF0h, ebp
0x8A89D3: and     ds:0BA7E10h, ebp
0x8A89D9: and     ds:0BA7E20h, ebp
0x8A89DF: and     ds:0BA7E24h, ebp
0x8A89E5: and     dword ptr ds:0BA7DB4h, 0FFFF7FFFh
0x8A89EF: and     dword ptr ds:0BA7DFCh, 0FFFF7FFFh
0x8A89F9: and     ecx, 0FFFAFFFFh
0x8A89FF: or      eax, offset loc_800000
0x8A8A04: and     ecx, 0FFEFFFFFh
0x8A8A0A: or      eax, 20000h
0x8A8A0F: and     ecx, 0FFDFFFFFh
0x8A8A15: mov     ds:0BA7E90h, eax
0x8A8A1A: mov     eax, ds:0BA7DD0h
0x8A8A1F: and     ecx, 0FEFFFFFFh
0x8A8A25: and     eax, 0FFEFFFFFh
0x8A8A2A: and     ecx, 0FBFFFFFFh
0x8A8A30: and     eax, ebp
0x8A8A32: and     ecx, 0F7FFFFFFh
0x8A8A38: mov     ds:0BA7DD0h, eax
0x8A8A3D: mov     eax, ds:0BA7DECh
0x8A8A42: and     ecx, 0EFFFFFFFh
0x8A8A48: and     edx, 0FFFFFEFFh
0x8A8A4E: and     ecx, 0DFFFFFFFh
0x8A8A54: and     eax, ebp
0x8A8A56: and     edx, ebp
0x8A8A58: and     ecx, 0BFFFFFFFh
0x8A8A5E: and     eax, 0FFFFFFFDh
0x8A8A61: mov     ds:0BA7E88h, esi
0x8A8A67: mov     esi, ds:0BA7DE0h
0x8A8A6D: mov     ds:0BA7E00h, edx
0x8A8A73: mov     edx, ds:0BA7E04h
0x8A8A79: mov     ds:0BA7DF8h, ecx
0x8A8A7F: mov     ecx, ds:0BA7E28h
0x8A8A85: and     eax, 0FFF7FFFFh
0x8A8A8A: and     esi, ebp
0x8A8A8C: and     edx, ebp
0x8A8A8E: and     ebx, ebp
0x8A8A90: and     edi, ebp
0x8A8A92: and     ecx, ebp
0x8A8A94: and     eax, 0FFFFFFFBh
0x8A8A97: and     dword ptr ds:0BA7DB8h, 0FFFF7FFFh
0x8A8AA1: and     eax, 0FFFFFFF7h
0x8A8AA4: and     eax, 0FFFFFFEFh
0x8A8AA7: and     eax, 0FFFFFFDFh
0x8A8AAA: and     eax, 0FFFFFFBFh
0x8A8AAD: and     eax, 0FFFFFF7Fh
0x8A8AB2: and     eax, 0FFFFFEFFh
0x8A8AB7: and     dword ptr ds:0BA7E10h, 0FFFF7FFFh
0x8A8AC1: and     dword ptr ds:0BA7E10h, 0FFFFFF7Fh
0x8A8ACB: and     eax, 0FFFFFDFFh
0x8A8AD0: mov     ebp, ds:0BA7E10h
0x8A8AD6: and     eax, 0FFFFFBFFh
0x8A8ADB: and     dword ptr ds:0BA7DCCh, 0FFFF7FFFh
0x8A8AE5: and     dword ptr ds:0BA7E14h, 0FFFFFF7Fh
0x8A8AEF: and     eax, 0FFFFF7FFh
0x8A8AF4: and     dword ptr ds:0BA7DCCh, 0FEFFFFFFh
0x8A8AFE: and     dword ptr ds:0BA7DDCh, 0FFFF7FFFh
0x8A8B08: and     eax, 0FFFFEFFFh
0x8A8B0D: and     dword ptr ds:0BA7DCCh, 0FDFFFFFFh
0x8A8B17: and     dword ptr ds:0BA7DBCh, 0FFFF7FFFh
0x8A8B21: and     dword ptr ds:0BA7DC0h, 0FFFF7FFFh
0x8A8B2B: and     dword ptr ds:0BA7DC4h, 0FFFF7FFFh
0x8A8B35: and     dword ptr ds:0BA7DC8h, 0FFFF7FFFh
0x8A8B3F: and     dword ptr ds:0BA7E00h, 0FFFF7FFFh
0x8A8B49: and     dword ptr ds:0BA7DDCh, 0FDFFFFFFh
0x8A8B53: and     dword ptr ds:0BA7DCCh, 0FBFFFFFFh
0x8A8B5D: and     eax, 0FFFFDFFFh
0x8A8B62: and     dword ptr ds:0BA7DD0h, 0FFFF7FFFh
0x8A8B6C: and     dword ptr ds:0BA7DD4h, 0FFFF7FFFh
0x8A8B76: and     dword ptr ds:0BA7DD8h, 0FFFF7FFFh
0x8A8B80: and     dword ptr ds:0BA7DE4h, 0FFFF7FFFh
0x8A8B8A: and     dword ptr ds:0BA7DE8h, 0FFFF7FFFh
0x8A8B94: and     dword ptr ds:0BA7DF4h, 0FFFF7FFFh
0x8A8B9E: and     dword ptr ds:0BA7DF0h, 0FFFF7FFFh
0x8A8BA8: and     dword ptr ds:0BA7E20h, 0FFFF7FFFh
0x8A8BB2: and     dword ptr ds:0BA7E24h, 0FFFF7FFFh
0x8A8BBC: and     dword ptr ds:0BA7DBCh, 0FBFFFFFFh
0x8A8BC6: and     dword ptr ds:0BA7DDCh, 0FBFFFFFFh
0x8A8BD0: and     dword ptr ds:0BA7E00h, 0FBFFFFFFh
0x8A8BDA: and     dword ptr ds:0BA7DC0h, 0F7FFFFFFh
0x8A8BE4: and     dword ptr ds:0BA7DC4h, 0F7FFFFFFh
0x8A8BEE: and     dword ptr ds:0BA7DC8h, 0F7FFFFFFh
0x8A8BF8: and     dword ptr ds:0BA7DCCh, 0F7FFFFFFh
0x8A8C02: and     eax, 0FFFFBFFFh
0x8A8C07: and     eax, 0FFFD7FFFh
0x8A8C0C: and     eax, 0FFFEFFFFh
0x8A8C11: and     eax, 0FFEFFFFFh
0x8A8C16: and     eax, 0FFDFFFFFh
0x8A8C1B: and     edi, 0FFFF7FFFh
0x8A8C21: and     eax, 0FEFFFFFFh
0x8A8C26: and     ebx, 0FFFF7FFFh
0x8A8C2C: and     edi, 0FFDFFFFFh
0x8A8C32: and     ebp, 0FFFFEFFFh
0x8A8C38: and     eax, 0FBFFFFFFh
0x8A8C3D: and     ebp, 0FEFFFFFFh
0x8A8C43: and     ebx, 0FFFFFFF7h
0x8A8C46: and     edi, 0FFFFFFEFh
0x8A8C49: and     esi, 0FFFF7FFFh
0x8A8C4F: and     eax, 0F7FFFFFFh
0x8A8C54: and     ebx, 0FFFFFF7Fh
0x8A8C5A: and     edi, 0FFFFFFDFh
0x8A8C5D: mov     ds:0BA7E10h, ebp
0x8A8C63: mov     ebp, ds:0BA7E14h
0x8A8C69: and     eax, 0EFFFFFFFh
0x8A8C6E: and     esi, 0FEFFFFFFh
0x8A8C74: and     ebx, 0FFFFF7FFh
0x8A8C7A: and     edi, 0FFFFFFBFh
0x8A8C7D: and     ebp, 0FFFFEFFFh
0x8A8C83: and     edx, 0FFFF7FFFh
0x8A8C89: and     eax, 0DFFFFFFFh
0x8A8C8E: and     esi, 0FDFFFFFFh
0x8A8C94: and     ebx, 0FFFFEFFFh
0x8A8C9A: and     edi, 0FFFFFF7Fh
0x8A8CA0: and     ebp, 0FFFFF7FFh
0x8A8CA6: and     eax, 0BFFFFFFFh
0x8A8CAB: and     ecx, 0FFFF7FFFh
0x8A8CB1: and     esi, 0FBFFFFFFh
0x8A8CB7: and     ebx, 0FFEFFFFFh
0x8A8CBD: and     edx, 0F7FFFFFFh
0x8A8CC3: and     edi, 0FFFFFEFFh
0x8A8CC9: and     dword ptr ds:0BA7DD0h, 0F7FFFFFFh
0x8A8CD3: mov     ds:0BA7E14h, ebp
0x8A8CD9: and     edx, 0FFDFFFFDh
0x8A8CDF: and     edx, 0FFFFFFEFh
0x8A8CE2: and     edx, 0FFFFFFDFh
0x8A8CE5: and     ecx, 0F7FFFFFFh
0x8A8CEB: and     edx, 0FFFFFFBFh
0x8A8CEE: and     ecx, 0FFDFFFFFh
0x8A8CF4: and     dword ptr ds:0BA7E10h, 0F7FFFFFFh
0x8A8CFE: and     dword ptr ds:0BA7E14h, 0F7FFFFFFh
0x8A8D08: and     dword ptr ds:0BA7DC8h, 0FFDFFFFFh
0x8A8D12: and     edx, 0FFFFFF7Fh
0x8A8D18: and     dword ptr ds:0BA7DD8h, 0F7FFFFFFh
0x8A8D22: and     dword ptr ds:0BA7DB4h, 0FFDFFFFFh
0x8A8D2C: and     dword ptr ds:0BA7DCCh, 0FFDFFFFFh
0x8A8D36: and     dword ptr ds:0BA7DD4h, 0FFDFFFFFh
0x8A8D40: and     dword ptr ds:0BA7DDCh, 0FFDFFFFFh
0x8A8D4A: and     dword ptr ds:0BA7DE4h, 0FFDFFFFFh
0x8A8D54: and     dword ptr ds:0BA7DF4h, 0FFDFFFFFh
0x8A8D5E: and     dword ptr ds:0BA7E10h, 0FFDFFFFFh
0x8A8D68: and     dword ptr ds:0BA7E14h, 0FFDFFFFFh
0x8A8D72: and     ecx, 0FFFFFFFDh
0x8A8D75: mov     ebp, ds:0BA7DC8h
0x8A8D7B: and     edx, 0FFFFFEFFh
0x8A8D81: and     dword ptr ds:0BA7E00h, 0F7FFFFFFh
0x8A8D8B: and     dword ptr ds:0BA7DE8h, 0F7FFFFFFh
0x8A8D95: and     dword ptr ds:0BA7DF0h, 0F7FFFFFFh
0x8A8D9F: and     dword ptr ds:0BA7DC0h, 0FFDFFFFFh
0x8A8DA9: and     dword ptr ds:0BA7DC4h, 0FFDFFFFFh
0x8A8DB3: and     dword ptr ds:0BA7DD0h, 0FFDFFFFFh
0x8A8DBD: and     dword ptr ds:0BA7DD8h, 0FFDFFFFFh
0x8A8DC7: and     dword ptr ds:0BA7DB4h, 0BFFFFFFFh
0x8A8DD1: and     dword ptr ds:0BA7DBCh, 0BFFFFFFFh
0x8A8DDB: and     dword ptr ds:0BA7DCCh, 0BFFFFFFFh
0x8A8DE5: and     dword ptr ds:0BA7DD4h, 0BFFFFFFFh
0x8A8DEF: and     dword ptr ds:0BA7DDCh, 0BFFFFFFFh
0x8A8DF9: and     dword ptr ds:0BA7DE4h, 0BFFFFFFFh
0x8A8E03: and     dword ptr ds:0BA7DF4h, 0BFFFFFFFh
0x8A8E0D: and     dword ptr ds:0BA7E10h, 0BFFFFFFFh
0x8A8E17: and     dword ptr ds:0BA7E14h, 0BFFFFFFFh
0x8A8E21: and     ecx, 0FFF7FFFFh
0x8A8E27: and     edx, 0FFFFFDFFh
0x8A8E2D: and     ecx, 0FFFFFFF7h
0x8A8E30: and     edx, 0FFFFFBFFh
0x8A8E36: and     ecx, 0FFFFFFBFh
0x8A8E39: and     edi, 0FFEFFFFFh
0x8A8E3F: and     edx, 0FFFFF7FFh
0x8A8E45: and     ecx, 0FFFFFF7Fh
0x8A8E4B: and     edi, 0FFFFFBFFh
0x8A8E51: and     edx, 0FFFFDFFFh
0x8A8E57: and     ecx, 0FFFFFDFFh
0x8A8E5D: and     edi, 0FEFFFFFFh
0x8A8E63: and     edx, 0FFFF7FFFh
0x8A8E69: and     ecx, 0FFFFF7FFh
0x8A8E6F: and     edi, 0FFFFEFFFh
0x8A8E75: and     edx, 0FFFDFFFFh
0x8A8E7B: and     ecx, 0FFFFDFFFh
0x8A8E81: and     edi, 0FFFFBFFFh
0x8A8E87: and     eax, 0FFDFFFFFh
0x8A8E8C: and     edx, 0FFF7FFFFh
0x8A8E92: and     ecx, 0FFFDFFFFh
0x8A8E98: and     edi, 0FFFEFFFFh
0x8A8E9E: and     edx, 0FEFFFFFFh
0x8A8EA4: mov     ds:0BA7DECh, eax
0x8A8EA9: mov     eax, ds:0BA7DFCh
0x8A8EAE: and     ecx, 0FEFFFFFFh
0x8A8EB4: and     edi, 0BFFFFFFFh
0x8A8EBA: and     ebx, 0F7FFFFFFh
0x8A8EC0: and     edx, 0BFFFFFFFh
0x8A8EC6: and     eax, 0FFDFFFFFh
0x8A8ECB: and     ecx, 0FDFFFFFFh
0x8A8ED1: and     edi, 0FDFFFFFFh
0x8A8ED7: and     edx, 0FDFFFFFFh
0x8A8EDD: and     ebx, 0FFDFFFFFh
0x8A8EE3: and     eax, 0BFFFFFFFh
0x8A8EE8: and     ecx, 0FBFFFFFFh
0x8A8EEE: and     esi, 0F7FFFFFFh
0x8A8EF4: and     edi, 0FBFFFFFFh
0x8A8EFA: and     edx, 0FBFFFFFFh
0x8A8F00: and     ebp, 0BFFFFFFFh
0x8A8F06: and     ebx, 0BFFFFFFFh
0x8A8F0C: mov     ds:0BA7DFCh, eax
0x8A8F11: and     ecx, 0EFFFFFFFh
0x8A8F17: mov     eax, ds:0BA7E2Ch
0x8A8F1C: and     esi, 0FFFFFFFDh
0x8A8F1F: and     esi, 0FFF7FFFFh
0x8A8F25: and     esi, 0FFFFFFFBh
0x8A8F28: and     esi, 0FFFFFFF7h
0x8A8F2B: and     esi, 0FFFFFDFFh
0x8A8F31: and     esi, 0FFFFFBFFh
0x8A8F37: and     dword ptr ds:0BA7DDCh, 0FFFFEFFFh
0x8A8F41: and     esi, 0FFFFF7FFh
0x8A8F47: and     dword ptr ds:0BA7DCCh, 0FFFFFFBFh
0x8A8F4E: and     dword ptr ds:0BA7DF0h, 0FFFFFFBFh
0x8A8F55: and     dword ptr ds:0BA7DBCh, 0FFFFFFBFh
0x8A8F5C: and     dword ptr ds:0BA7DBCh, 0FFFFEFFFh
0x8A8F66: and     esi, 0FFFFDFFFh
0x8A8F6C: and     dword ptr ds:0BA7DF0h, 0FFFFEFFFh
0x8A8F76: and     dword ptr ds:0BA7DCCh, 0FFFEFF7Fh
0x8A8F80: and     dword ptr ds:0BA7E20h, 0BFFFFFFFh
0x8A8F8A: and     dword ptr ds:0BA7E24h, 0BFFFFFFFh
0x8A8F94: and     dword ptr ds:0BA7DB4h, 0FFFFEFFFh
0x8A8F9E: and     dword ptr ds:0BA7DFCh, 0FFFFEFFFh
0x8A8FA8: and     dword ptr ds:0BA7DB8h, 0FFFFEFFFh
0x8A8FB2: and     dword ptr ds:0BA7DD4h, 0FFFFEFFFh
0x8A8FBC: and     dword ptr ds:0BA7DD8h, 0FFFFEFFFh
0x8A8FC6: and     dword ptr ds:0BA7DE4h, 0FFFFEFFFh
0x8A8FD0: and     dword ptr ds:0BA7DF4h, 0FFFFEFFFh
0x8A8FDA: and     dword ptr ds:0BA7E14h, 0FFFFEFFFh
0x8A8FE4: and     dword ptr ds:0BA7DF0h, 0FFFFFF7Fh
0x8A8FEE: and     dword ptr ds:0BA7DCCh, 0FFFFFFF7h
0x8A8FF5: and     dword ptr ds:0BA7DBCh, 0FFFFFF7Fh
0x8A8FFF: and     dword ptr ds:0BA7DC0h, 7FFFFFFFh
0x8A9009: and     esi, 0FFFEFFFFh
0x8A900F: and     eax, 0FFFFEFFFh
0x8A9014: and     esi, 0FFFDFFFFh
0x8A901A: and     eax, 0FFFFFFEFh
0x8A901D: and     esi, 0F7FFFFFFh
0x8A9023: and     eax, 0FFFFFFBFh
0x8A9026: and     esi, 7FFFFFFFh
0x8A902C: and     eax, 0FFFFFFDFh
0x8A902F: and     esi, 0FBFFFFFFh
0x8A9035: and     esi, 0FDFFFFFFh
0x8A903B: and     eax, 0FFFFF7FFh
0x8A9040: and     edi, 0BFFFFFFFh
0x8A9046: and     ebp, 0FFFFFF3Fh
0x8A904C: and     ecx, 0DFFFFFFFh
0x8A9052: mov     ds:0BA7DE0h, esi
0x8A9058: mov     esi, 7FFFFFFFh
0x8A905D: and     ds:0BA7DC4h, esi
0x8A9063: and     ds:0BA7DDCh, esi
0x8A9069: and     ds:0BA7E10h, esi
0x8A906F: and     eax, 0FFDFFFFFh
0x8A9074: and     edi, 0FFFFEFFFh
0x8A907A: and     ebp, 0FFFEFFFFh
0x8A9080: and     edi, esi
0x8A9082: and     ecx, 0F7FFFFFFh
0x8A9088: and     eax, 0F7FFFFFFh
0x8A908D: and     ebp, 0FFFFFFF7h
0x8A9090: and     ebx, 0FFFFEFFFh
0x8A9096: and     ecx, 0BFFFFFFFh
0x8A909C: and     ebp, esi
0x8A909E: mov     ds:0BA7E1Ch, edi
0x8A90A4: pop     edi
0x8A90A5: and     eax, 0FEFFFFFFh
0x8A90AA: and     ebx, esi
0x8A90AC: and     edx, esi
0x8A90AE: and     ecx, esi
0x8A90B0: pop     esi
0x8A90B1: and     eax, 0BFFFFFFFh
0x8A90B6: mov     ds:0BA7DC8h, ebp
0x8A90BC: and     eax, 0FBFFFFFFh
0x8A90C1: pop     ebp
0x8A90C2: mov     ds:0BA7E18h, ebx
0x8A90C8: mov     ds:0BA7E04h, edx
0x8A90CE: mov     ds:0BA7E28h, ecx
0x8A90D4: mov     ds:0BA7E2Ch, eax
0x8A90D9: mov     dword ptr ds:0BA7EE4h, 2
0x8A90E3: mov     dword ptr ds:0BA7ED4h, 3
0x8A90ED: mov     dword ptr ds:0BA7EDCh, 4
0x8A90F7: pop     ebx
0x8A90F8: retn
