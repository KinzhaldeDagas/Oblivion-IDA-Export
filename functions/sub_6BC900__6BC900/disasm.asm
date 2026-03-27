0x6BC900: push    0FFFFFFFFh
0x6BC902: push    offset SEH_6E3250
0x6BC907: mov     eax, large fs:0
0x6BC90D: push    eax
0x6BC90E: push    esi
0x6BC90F: push    edi
0x6BC910: mov     eax, ds:0B30AACh
0x6BC915: xor     eax, esp
0x6BC917: push    eax
0x6BC918: lea     eax, [esp+18h+var_C]
0x6BC91C: mov     large fs:0, eax
0x6BC922: mov     edi, [esp+18h+size]
0x6BC926: xor     ecx, ecx
0x6BC928: mov     eax, edi
0x6BC92A: mov     edx, 40h ; '@'
0x6BC92F: mul     edx
0x6BC931: seto    cl
0x6BC934: neg     ecx
0x6BC936: or      ecx, eax
0x6BC938: xor     eax, eax
0x6BC93A: add     ecx, 4
0x6BC93D: setb    al
0x6BC940: neg     eax
0x6BC942: or      eax, ecx
0x6BC944: push    eax; Size
0x6BC945: call    FormHeapAlloc
0x6BC94A: add     esp, 4
0x6BC94D: mov     [esp+18h+size], eax
0x6BC951: test    eax, eax
0x6BC953: mov     [esp+18h+var_4], 0
0x6BC95B: jz      short loc_6BC989
0x6BC95D: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6BC962: push    offset sub_7616D0; a4
0x6BC967: push    edi; size
0x6BC968: lea     esi, [eax+4]
0x6BC96B: push    40h ; '@'; a2
0x6BC96D: push    esi; a1
0x6BC96E: mov     [eax], edi
0x6BC970: call    ArrayConstructor
0x6BC975: mov     eax, esi
0x6BC977: mov     ecx, [esp+18h+var_C]
0x6BC97B: mov     large fs:0, ecx
0x6BC982: pop     ecx
0x6BC983: pop     edi
0x6BC984: pop     esi
0x6BC985: add     esp, 0Ch
0x6BC988: retn
0x6BC989: xor     eax, eax
0x6BC98B: mov     ecx, [esp+18h+var_C]
0x6BC98F: mov     large fs:0, ecx
0x6BC996: pop     ecx
0x6BC997: pop     edi
0x6BC998: pop     esi
0x6BC999: add     esp, 0Ch
0x6BC99C: retn
