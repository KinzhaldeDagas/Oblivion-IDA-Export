TerrainLODQuadLoadTask *__thiscall TerrainLODQuadLoadTask::TerrainLODQuadLoadTask(
        TerrainLODQuadLoadTask *this,
        int a2,
        int a3,
        int a4,
        int a5)
{
  int v7; // [esp-10h] [ebp-134h]
  int v8; // [esp-Ch] [ebp-130h]
  int v9; // [esp-8h] [ebp-12Ch]
  char v10[260]; // [esp+10h] [ebp-114h] BYREF
  int v11; // [esp+120h] [ebp-4h]

  sub_436FA0((IOTask *)this, 3u);
  *((_DWORD *)this + 0xB) = a3;
  *(_DWORD *)this = &TerrainLODQuadLoadTask::`vftable';
  *((_BYTE *)this + 0x28) = 0;
  *((_DWORD *)this + 0xC) = a4;
  *((_DWORD *)this + 0xD) = a5;
  *((_DWORD *)this + 0xE) = a2;
  v11 = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  v9 = *((_DWORD *)this + 0xD);
  v8 = *((_DWORD *)this + 0xC);
  v7 = *((_DWORD *)this + 0xB);
  LOBYTE(v11) = 3;
  _sprintf(v10, "Meshes\\Landscape\\LOD\\%i.%02i.%02i.%i.NIF", v7, v8, v9, 0x20);
  sub_434600(this, v10);
  sub_434CB0((int **)this, 0, 1);
  return this;
}
