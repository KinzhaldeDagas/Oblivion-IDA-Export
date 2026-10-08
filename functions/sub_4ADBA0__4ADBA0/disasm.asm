0x4ADBA0: fld     dword ptr [ecx+98h]; Verified (Oblivion): returns the animated particle-level value using TESEffectShader::Data fade-in/full/fade-out times, full/persistent values, deltaSeconds, elapsedSeconds, and finished state. MagicShaderHitEffect_Update writes this result to ParticleShaderProperty::currentParticleLevel_80.
0x4ADBA6: mov     eax, dword ptr [esp+bFinished]
0x4ADBAA: sub     esp, 14h
0x4ADBAD: fstp    [esp+14h+persistentValue]; persistentValue
0x4ADBB1: fld     dword ptr [ecx+94h]
0x4ADBB7: fstp    [esp+14h+fullValue]; fullValue
0x4ADBBB: fld     dword ptr [ecx+8Ch]
0x4ADBC1: fstp    [esp+14h+fullTime]; fullTime
0x4ADBC5: fld     dword ptr [ecx+90h]
0x4ADBCB: fstp    [esp+14h+fadeOutTime]; fadeOutTime
0x4ADBCF: fld     dword ptr [ecx+88h]
0x4ADBD5: fstp    [esp+14h+fadeInTime]; fadeInTime
0x4ADBD8: push    eax; bFinished
0x4ADBD9: fld     [esp+18h+elapsedSeconds]
0x4ADBDD: sub     esp, 0Ch
0x4ADBE0: fstp    [esp+24h+var_1C]; elapsedSeconds
0x4ADBE4: fld     [esp+24h+deltaSeconds]
0x4ADBE8: fstp    [esp+24h+var_20]; deltaSeconds
0x4ADBEC: fld     [esp+24h+currentValue]
0x4ADBF0: fstp    [esp+24h+var_24]; currentValue
0x4ADBF3: call    TESEffectShader_AnimateValue; Verified (Oblivion): generic animation helper interpolates from zero through the configured full value to the persistent value across fade-in/full/fade-out intervals; when finished it applies the fade-out interpolation.
0x4ADBF8: retn    10h
