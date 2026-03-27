0x4EE8C0: push    ebx
0x4EE8C1: push    esi
0x4EE8C2: xor     ebx, ebx
0x4EE8C4: mov     esi, ecx
0x4EE8C6: push    ebx; a3
0x4EE8C7: push    offset aSkyCloudscloud; "Sky\\CloudsCloudy.dds"
0x4EE8CC: lea     ecx, [esi+28h]; this
0x4EE8CF: call    BSStringT_Set
0x4EE8D4: push    ebx; a3
0x4EE8D5: push    offset aSkyCloudsclear; "Sky\\CloudsClear.dds"
0x4EE8DA: lea     ecx, [esi+1Ch]; this
0x4EE8DD: call    BSStringT_Set
0x4EE8E2: fld     dword ptr ds:0A47E74h
0x4EE8E8: mov     al, 33h ; '3'
0x4EE8EA: fst     dword ptr [esi+60h]
0x4EE8ED: mov     [esi+48h], al
0x4EE8F0: fstp    dword ptr [esi+58h]
0x4EE8F3: mov     [esi+49h], al
0x4EE8F6: fld     dword ptr ds:0A3F4F0h
0x4EE8FC: mov     [esi+4Ah], al
0x4EE8FF: fst     dword ptr [esi+64h]
0x4EE902: mov     al, 0FFh
0x4EE904: fstp    dword ptr [esi+5Ch]
0x4EE907: mov     [esi+4Bh], al
0x4EE90A: mov     [esi+4Ch], al
0x4EE90D: mov     [esi+4Dh], al
0x4EE910: mov     [esi+4Fh], al
0x4EE913: mov     [esi+51h], al
0x4EE916: mov     eax, offset off_846C66
0x4EE91B: mov     [esi+0D8h], eax
0x4EE921: mov     [esi+68h], eax
0x4EE924: mov     eax, offset byte_71533E
0x4EE929: mov     [esi+0DCh], eax
0x4EE92F: mov     [esi+6Ch], eax
0x4EE932: mov     eax, (offset loc_846D65+1)
0x4EE937: mov     [esi+0E0h], eax
0x4EE93D: mov     [esi+70h], eax
0x4EE940: mov     eax, 100A05h
0x4EE945: mov     [esi+0E4h], eax
0x4EE94B: mov     [esi+74h], eax
0x4EE94E: mov     eax, (offset loc_5F6DB5+1)
0x4EE953: mov     [esi+0E8h], eax
0x4EE959: mov     [esi+78h], eax
0x4EE95C: mov     eax, 0D19A83h
0x4EE961: mov     [esi+0ECh], eax
0x4EE967: mov     [esi+7Ch], eax
0x4EE96A: mov     eax, (offset loc_5782A7+1)
0x4EE96F: mov     [esi+0F0h], eax
0x4EE975: mov     [esi+80h], eax
0x4EE97B: mov     eax, 261B0Fh
0x4EE980: mov     [esi+0F4h], eax
0x4EE986: mov     [esi+84h], eax
0x4EE98C: mov     eax, (offset loc_5B4B44+2)
0x4EE991: mov     [esi+0F8h], eax
0x4EE997: mov     [esi+88h], eax
0x4EE99D: mov     eax, (offset SEH_9E4F30+1)
0x4EE9A2: mov     [esi+0FCh], eax
0x4EE9A8: mov     [esi+8Ch], eax
0x4EE9AE: mov     eax, (offset loc_6C5952+1)
0x4EE9B3: mov     [esi+100h], eax
0x4EE9B9: mov     [esi+90h], eax
0x4EE9BF: mov     eax, 1C140Fh
0x4EE9C4: mov     [esi+4Eh], bl
0x4EE9C7: mov     [esi+50h], bl
0x4EE9CA: mov     byte ptr [esi+52h], 32h ; '2'
0x4EE9CE: mov     [esi+53h], bl
0x4EE9D1: mov     [esi+104h], eax
0x4EE9D7: mov     [esi+94h], eax
0x4EE9DD: mov     dword ptr [esi+98h], 252212h
0x4EE9E7: mov     dword ptr [esi+9Ch], (offset loc_857063+2)
0x4EE9F1: mov     dword ptr [esi+0A0h], 35221Ah
0x4EE9FB: mov     dword ptr [esi+0A4h], 281C15h
0x4EEA05: mov     dword ptr [esi+0A8h], (offset loc_79A5FD+2)
0x4EEA0F: mov     dword ptr [esi+0ACh], 0CAEDFFh
0x4EEA19: mov     dword ptr [esi+0B0h], 499AE2h
0x4EEA23: mov     dword ptr [esi+0B4h], (offset loc_764D30+4)
0x4EEA2D: mov     dword ptr [esi+0B8h], (offset loc_779FF0+2)
0x4EEA37: mov     dword ptr [esi+0BCh], 0BED9DEh
0x4EEA41: mov     dword ptr [esi+0C0h], (offset loc_9DBDFA+5)
0x4EEA4B: mov     [esi+0C4h], ebx
0x4EEA51: pop     esi
0x4EEA52: pop     ebx
0x4EEA53: retn
