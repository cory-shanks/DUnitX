{***************************************************************************}
{                                                                           }
{           DUnitX                                                          }
{                                                                           }
{           Copyright (C) 2013 Vincent Parrett                              }
{                                                                           }
{           vincent@finalbuilder.com                                        }
{           http://www.finalbuilder.com                                     }
{                                                                           }
{                                                                           }
{***************************************************************************}
{                                                                           }
{  Licensed under the Apache License, Version 2.0 (the "License");          }
{  you may not use this file except in compliance with the License.         }
{  You may obtain a copy of the License at                                  }
{                                                                           }
{      http://www.apache.org/licenses/LICENSE-2.0                           }
{                                                                           }
{  Unless required by applicable law or agreed to in writing, software      }
{  distributed under the License is distributed on an "AS IS" BASIS,        }
{  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. }
{  See the License for the specific language governing permissions and      }
{  limitations under the License.                                           }
{                                                                           }
{***************************************************************************}

{$DEFINE UNSUPPORTED_COMPILER_VERSION}
{$DEFINE DELPHI_XE5_DOWN}
{$DEFINE DELPHI_XE4_DOWN}
{$DEFINE DELPHI_XE3_DOWN}
{$DEFINE DELPHI_XE2_DOWN}
{$DEFINE DELPHI_XE_DOWN}
{$DEFINE DELPHI_2010_DOWN}

{$IFDEF VER210} // RAD Studio 2010
  {$DEFINE DELPHI_2010}
  {$DEFINE DELPHI_2010_UP}
  {$DEFINE CPUX86}
  {$UNDEF UNSUPPORTED_COMPILER_VERSION}
{$ENDIF VER210}

{$IFDEF VER220} // RAD Studio XE
  {$DEFINE DELPHI_2010_UP}
  {$DEFINE DELPHI_XE}
  {$DEFINE DELPHI_XE_UP}
  {$DEFINE SUPPORTS_REGEX}
  {$DEFINE CPUX86}
  {$UNDEF UNSUPPORTED_COMPILER_VERSION}
  {$UNDEF DELPHI_2010_DOWN}
{$ENDIF VER220}

{$IFDEF VER230} // RAD Studio XE2
  {$DEFINE DELPHI_2010_UP}
  {$DEFINE DELPHI_XE_UP}
  {$DEFINE DELPHI_XE2}
  {$DEFINE DELPHI_XE2_UP}
  {$DEFINE SUPPORTS_REGEX}
  {$UNDEF UNSUPPORTED_COMPILER_VERSION}
  {$UNDEF DELPHI_2010_DOWN}
  {$UNDEF DELPHI_XE_DOWN}
{$ENDIF VER230}

{$IFDEF VER240} // RAD Studio XE3
  {$DEFINE DELPHI_2010_UP}
  {$DEFINE DELPHI_XE_UP}
  {$DEFINE DELPHI_XE2_UP}
  {$DEFINE DELPHI_XE3}
  {$DEFINE DELPHI_XE3_UP}
  {$DEFINE SUPPORTS_REGEX}
  {$UNDEF UNSUPPORTED_COMPILER_VERSION}
  {$UNDEF DELPHI_2010_DOWN}
  {$UNDEF DELPHI_XE_DOWN}
  {$UNDEF DELPHI_XE2_DOWN}
{$ENDIF VER240}

{$IFDEF VER250} // RAD Studio XE4
  {$DEFINE DELPHI_2010_UP}
  {$DEFINE DELPHI_XE_UP}
  {$DEFINE DELPHI_XE2_UP}
  {$DEFINE DELPHI_XE3_UP}
  {$DEFINE DELPHI_XE4}
  {$DEFINE DELPHI_XE4_UP}
  {$DEFINE SUPPORTS_REGEX}
  {$UNDEF UNSUPPORTED_COMPILER_VERSION}
  {$UNDEF DELPHI_2010_DOWN}
  {$UNDEF DELPHI_XE_DOWN}
  {$UNDEF DELPHI_XE2_DOWN}
  {$UNDEF DELPHI_XE3_DOWN}
{$ENDIF VER250}

{$IFDEF VER260} // RAD Studio XE5
  {$DEFINE DELPHI_2010_UP}
  {$DEFINE DELPHI_XE_UP}
  {$DEFINE DELPHI_XE2_UP}
  {$DEFINE DELPHI_XE3_UP}
  {$DEFINE DELPHI_XE4_UP}
  {$DEFINE DELPHI_XE5}
  {$DEFINE DELPHI_XE5_UP}
  {$DEFINE SUPPORTS_REGEX}
  {$UNDEF UNSUPPORTED_COMPILER_VERSION}
  {$UNDEF DELPHI_2010_DOWN}
  {$UNDEF DELPHI_XE_DOWN}
  {$UNDEF DELPHI_XE2_DOWN}
  {$UNDEF DELPHI_XE3_DOWN}
  {$UNDEF DELPHI_XE4_DOWN}
{$ENDIF VER260}


{$IFDEF UNSUPPORTED_COMPILER_VERSION}
  Unsupported Compiler Version (Delphi 2010 or later required!)
{$ENDIF}

{$I DUnitX.Stacktrace.inc}
{$I DUnitX.MemoryLeaks.inc}

