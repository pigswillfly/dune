//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: dfb6dc079c26181fd4318e8cc63b33ea                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.399131684805);
    msg.setSource(16709U);
    msg.setSourceEntity(205U);
    msg.setDestination(32204U);
    msg.setDestinationEntity(100U);
    msg.state = 121U;
    msg.flags = 23U;
    msg.description.assign("DVGHOINFTQVTKTICVSNGPDPCHVMYYIGZCKGMYIAXLOQKPJQEXVS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.785367236311);
    msg.setSource(25014U);
    msg.setSourceEntity(33U);
    msg.setDestination(3401U);
    msg.setDestinationEntity(23U);
    msg.state = 31U;
    msg.flags = 250U;
    msg.description.assign("YOLMHCXMMBXWYDAVBWAACPRKJKPUYQYJRAFTVBVDWURKXGPNCGMOZVZFKVDLFBUUTKZLBGBANJZVNKLSCLDOHTSFPFNTBZGSMFWUIBZZERFNSDVGAFVYYXQXGGTLJECUPOHNEQNCBOQROLHVKFUYIOJQUJMDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.120378545215);
    msg.setSource(48545U);
    msg.setSourceEntity(181U);
    msg.setDestination(57782U);
    msg.setDestinationEntity(34U);
    msg.state = 189U;
    msg.flags = 75U;
    msg.description.assign("XRFKGTVQHQRWFBRMMWEYWZVZXHJSIHBCLGOUSOKNLOKRIPDNAHKUAJNIDEDAGVFNPNVTBTDJFMDULSFFICADHSSEIKLEDKGYGSYZLXJCPOQPMPYQORNTUEKVAXCZCLNUOGQGMHMAL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.0632916162777);
    msg.setSource(11643U);
    msg.setSourceEntity(159U);
    msg.setDestination(40024U);
    msg.setDestinationEntity(19U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.7189449144);
    msg.setSource(32099U);
    msg.setSourceEntity(47U);
    msg.setDestination(12662U);
    msg.setDestinationEntity(170U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.939917392415);
    msg.setSource(42603U);
    msg.setSourceEntity(91U);
    msg.setDestination(7694U);
    msg.setDestinationEntity(99U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.528430966811);
    msg.setSource(18023U);
    msg.setSourceEntity(236U);
    msg.setDestination(29633U);
    msg.setDestinationEntity(116U);
    msg.id = 243U;
    msg.label.assign("CXUWLYTBZIEJPRXWXQQWZMAPWHNSKYVETTXOIKRIBENEJAHFDSEFURUVWDYGIGJDCKWNQAFEAKRWPRYGVOUHGZJUFLTOIDVMBDYCLYZPWNCKUFHBPCCLSRUZBOJXSBOATCWHTPBQFGJLDAHYYHDHJXHSDTKFV");
    msg.component.assign("SIPGKHXYPMJKYKOJONHCGTWMHKPYJDSTLECZICVHKRRWFQSLMJEXFDFCWZCTOB");
    msg.act_time = 45169U;
    msg.deact_time = 39185U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.487054549497);
    msg.setSource(459U);
    msg.setSourceEntity(236U);
    msg.setDestination(63097U);
    msg.setDestinationEntity(188U);
    msg.id = 84U;
    msg.label.assign("PKWXSSGVXFLENFLSWDTWOUKDDQQNVZCXQORTIESIHSGFBNWFTEHFGLRWAVTGRAUJFKLMRGBNJXGEIIPPRAMHWWUEBIFQYYQHFPBYVFBLWKSOYLIDZYRPQCBHMRARXOWTCZSCQBLKLQERVOTIZPHOONAJCYAMZTAGTYDMNYNIVAXJVPOXKGDYDIWFQSVDLKNKKKMAJUUQHYBHPSCGVJCCMMJXZSVBEPNORTUMOLXAIHNZDPDUUCUE");
    msg.component.assign("GOXXZMPFSOBLIAYFHAHCQJVGYKAKBE");
    msg.act_time = 26767U;
    msg.deact_time = 24267U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.481513814378);
    msg.setSource(13098U);
    msg.setSourceEntity(81U);
    msg.setDestination(56814U);
    msg.setDestinationEntity(33U);
    msg.id = 162U;
    msg.label.assign("TIVCEQLRSVIUBJRRPMDGCUQYDISNTRMEQGU");
    msg.component.assign("KGFVZCHFNAEBTHTXMLWVIKFLXHRHNOEVFPDOXZXTCPCSRWOCRWXPWDVTBDHWMFOQVXAYUSPBHASSYJXANZEZUTNDCNIUKHWMREICLRZDJMKOOLYYVWRZUBERTVYKQPYQJYDWGJKZOJSIHNCGVTN");
    msg.act_time = 43766U;
    msg.deact_time = 49896U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.482407379948);
    msg.setSource(24769U);
    msg.setSourceEntity(159U);
    msg.setDestination(10746U);
    msg.setDestinationEntity(197U);
    msg.id = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.594071556156);
    msg.setSource(45601U);
    msg.setSourceEntity(211U);
    msg.setDestination(26702U);
    msg.setDestinationEntity(190U);
    msg.id = 39U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.212412421615);
    msg.setSource(29881U);
    msg.setSourceEntity(129U);
    msg.setDestination(58727U);
    msg.setDestinationEntity(73U);
    msg.id = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.143901816529);
    msg.setSource(2549U);
    msg.setSourceEntity(238U);
    msg.setDestination(55783U);
    msg.setDestinationEntity(28U);
    msg.op = 96U;
    msg.list.assign("LCLZBCVMXFRHVUJTNLWJMGHDZRJYUBEUSVPOQKDIHDIPIQNYMSVOBZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.866015187021);
    msg.setSource(32321U);
    msg.setSourceEntity(203U);
    msg.setDestination(4099U);
    msg.setDestinationEntity(155U);
    msg.op = 74U;
    msg.list.assign("QBHNAHMYHHAPEKIXGXCKFQWFNHYUESTARNMJCIUUBSTDURVZLGGPOOPDCGHZGALJAJYOYGXQKCWKQQTGCYBXNFPVVKRIJYMIHZEWFTWQVCLHDSBERJFJSZJGIIFSXPBEDM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.45404052442);
    msg.setSource(35750U);
    msg.setSourceEntity(50U);
    msg.setDestination(37292U);
    msg.setDestinationEntity(177U);
    msg.op = 203U;
    msg.list.assign("ROPTYGTXIUBSSTYAEFGHTDXLCTIFNZQVUUKEILYZQOWMAUDKLBHZYJFTMVTFKGVQRVPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.53898921028);
    msg.setSource(32113U);
    msg.setSourceEntity(242U);
    msg.setDestination(45805U);
    msg.setDestinationEntity(252U);
    msg.value = 245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.488595109558);
    msg.setSource(52727U);
    msg.setSourceEntity(58U);
    msg.setDestination(21297U);
    msg.setDestinationEntity(227U);
    msg.value = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.914764673691);
    msg.setSource(46032U);
    msg.setSourceEntity(164U);
    msg.setDestination(17329U);
    msg.setDestinationEntity(202U);
    msg.value = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.687859707353);
    msg.setSource(59597U);
    msg.setSourceEntity(88U);
    msg.setDestination(11011U);
    msg.setDestinationEntity(209U);
    msg.consumer.assign("HBECOXGVMDMBRKEHVTFMAEOC");
    msg.message_id = 42976U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.0309987526884);
    msg.setSource(12070U);
    msg.setSourceEntity(126U);
    msg.setDestination(48718U);
    msg.setDestinationEntity(54U);
    msg.consumer.assign("OZLPWYBRWUIHKKKYJQRWHXTQLNMLNOXPQIAGCFFKCSUAPSVLPCMMKZLFQXNSUVURBUHBATKSPZIDNDWQVHBZIZOPNFNJLSEADEFBMNLZNRCNEEBYFGLVNHUQAGTFRSGDRXVRZPCSAGGZFQKRIGEEJO");
    msg.message_id = 25472U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.199542787392);
    msg.setSource(26420U);
    msg.setSourceEntity(32U);
    msg.setDestination(56963U);
    msg.setDestinationEntity(165U);
    msg.consumer.assign("SHMGOMXHERSKETKSAKUEBNHTLGEFPZRIKBYUCNCZNNIAITDWQYGXLDVGWXVEZBGQRBWKREVPMZILOHJHONNIYDBCVJPBXUPEOZVOJOWRCGSRBFIFXHWUY");
    msg.message_id = 4979U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.699324621143);
    msg.setSource(29071U);
    msg.setSourceEntity(189U);
    msg.setDestination(12842U);
    msg.setDestinationEntity(160U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.940287166948);
    msg.setSource(14626U);
    msg.setSourceEntity(192U);
    msg.setDestination(24364U);
    msg.setDestinationEntity(50U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.753632446513);
    msg.setSource(41646U);
    msg.setSourceEntity(65U);
    msg.setDestination(46083U);
    msg.setDestinationEntity(226U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.592326759094);
    msg.setSource(58878U);
    msg.setSourceEntity(79U);
    msg.setDestination(64009U);
    msg.setDestinationEntity(105U);
    msg.op = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.203825844355);
    msg.setSource(34925U);
    msg.setSourceEntity(249U);
    msg.setDestination(58586U);
    msg.setDestinationEntity(86U);
    msg.op = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.42079287755);
    msg.setSource(500U);
    msg.setSourceEntity(185U);
    msg.setDestination(45668U);
    msg.setDestinationEntity(7U);
    msg.op = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.321316138025);
    msg.setSource(29068U);
    msg.setSourceEntity(251U);
    msg.setDestination(12765U);
    msg.setDestinationEntity(20U);
    msg.total_steps = 129U;
    msg.step_number = 160U;
    msg.step.assign("LADKBPKOAJXOBZMMCTHPBUUUJOZBWRCLCKIYNGUTXRDHKFETHFYBRJLAVIVCUZRIFEVYOHCQIRBKTCWKGGFDQNR");
    msg.flags = 209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.699121747194);
    msg.setSource(35073U);
    msg.setSourceEntity(160U);
    msg.setDestination(1572U);
    msg.setDestinationEntity(248U);
    msg.total_steps = 42U;
    msg.step_number = 65U;
    msg.step.assign("HWCTITFJVMANWDWBQLYJBRIDVKLFXGVNCIBQZURPIGNFFGRRIJQDRGIQJJUOCCUXLOSMMHSDMPHGMEWBRDLXETLKNSZKYBHBAQEHENFCNPKSBMCGDPSXGFLHLIYGCSLJUJAUXMNKVQQZORPIKVAYJDEBUPVWXCDKATECZAPFVQZTMIRHZQOTUYLGESMSDPOUWYAJTDHSNXUOEZAXWKXQYRHYAFKVOHBXKVTWLFIAENTSPORUTYNPWJEOZZBYWC");
    msg.flags = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.0855136770097);
    msg.setSource(24780U);
    msg.setSourceEntity(226U);
    msg.setDestination(59297U);
    msg.setDestinationEntity(14U);
    msg.total_steps = 164U;
    msg.step_number = 9U;
    msg.step.assign("LSYJEYRMMBZTYUGHVSZFKLJDZQGERJQQEFYWCNVBQEPUTLFKCLW");
    msg.flags = 111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.076475564328);
    msg.setSource(23952U);
    msg.setSourceEntity(147U);
    msg.setDestination(41980U);
    msg.setDestinationEntity(232U);
    msg.state = 150U;
    msg.error.assign("KJTBMHMGWGFFLYEGUXAIXBWVMKQELCIWCHBQRJCXYTSHRDDNEAALNEHZTBWZYTJOLFIBVDNAPXUSWULCUGXGETPGCSTIDHRXOQPBSXOJQHYMTYKMXRSVOZILKXLPBZODDPUYUWZOAFMYQHJSVYCEKWZCPAFFXOUQGTFZFERJWENEMNCKRDUZGVSCBRQAIALKZEBDLPMNHUOVFOSNPQNKJJNRF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.237985990362);
    msg.setSource(22473U);
    msg.setSourceEntity(160U);
    msg.setDestination(5993U);
    msg.setDestinationEntity(123U);
    msg.state = 73U;
    msg.error.assign("VKXJMOLIGBFEKJUZBHVZBZOABDWA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.783304588998);
    msg.setSource(55339U);
    msg.setSourceEntity(245U);
    msg.setDestination(19422U);
    msg.setDestinationEntity(24U);
    msg.state = 204U;
    msg.error.assign("ZTUJPEFOVTIGOFYHJDAZKXMZYFWARCBBCMSIFZDYYGPXUODSJCNFNCEZDCBSQIRYNYVJLW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.897508359815);
    msg.setSource(41024U);
    msg.setSourceEntity(8U);
    msg.setDestination(40100U);
    msg.setDestinationEntity(39U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.204844597544);
    msg.setSource(63779U);
    msg.setSourceEntity(192U);
    msg.setDestination(15431U);
    msg.setDestinationEntity(13U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.177209136122);
    msg.setSource(3363U);
    msg.setSourceEntity(85U);
    msg.setDestination(7574U);
    msg.setDestinationEntity(182U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.644256170797);
    msg.setSource(58118U);
    msg.setSourceEntity(46U);
    msg.setDestination(20786U);
    msg.setDestinationEntity(247U);
    msg.op = 247U;
    msg.speed_min = 0.172377375179;
    msg.speed_max = 0.161762241371;
    msg.long_accel = 0.129136403299;
    msg.alt_max_msl = 0.0557320454806;
    msg.dive_fraction_max = 0.196149851673;
    msg.climb_fraction_max = 0.78057750343;
    msg.bank_max = 0.74345526274;
    msg.p_max = 0.298420395767;
    msg.pitch_min = 0.793756111302;
    msg.pitch_max = 0.0235776503629;
    msg.q_max = 0.631366646908;
    msg.g_min = 0.439052669161;
    msg.g_max = 0.947249451497;
    msg.g_lat_max = 0.770364380161;
    msg.rpm_min = 0.554419840151;
    msg.rpm_max = 0.226548246682;
    msg.rpm_rate_max = 0.880430680591;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.369708041399);
    msg.setSource(8559U);
    msg.setSourceEntity(19U);
    msg.setDestination(63028U);
    msg.setDestinationEntity(92U);
    msg.op = 138U;
    msg.speed_min = 0.261836553907;
    msg.speed_max = 0.955456854853;
    msg.long_accel = 0.603225912708;
    msg.alt_max_msl = 0.254469867378;
    msg.dive_fraction_max = 0.652882957015;
    msg.climb_fraction_max = 0.289007331734;
    msg.bank_max = 0.355072834559;
    msg.p_max = 0.497371226159;
    msg.pitch_min = 0.66924996236;
    msg.pitch_max = 0.906776262063;
    msg.q_max = 0.431175534772;
    msg.g_min = 0.190192933184;
    msg.g_max = 0.924814316902;
    msg.g_lat_max = 0.279352151164;
    msg.rpm_min = 0.700300986588;
    msg.rpm_max = 0.669923836408;
    msg.rpm_rate_max = 0.500502344233;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.903956326467);
    msg.setSource(64282U);
    msg.setSourceEntity(64U);
    msg.setDestination(25732U);
    msg.setDestinationEntity(128U);
    msg.op = 99U;
    msg.speed_min = 0.0983943181795;
    msg.speed_max = 0.0493899785655;
    msg.long_accel = 0.0625302987218;
    msg.alt_max_msl = 0.520534870421;
    msg.dive_fraction_max = 0.173257302396;
    msg.climb_fraction_max = 0.955463368393;
    msg.bank_max = 0.831084124889;
    msg.p_max = 0.824203056045;
    msg.pitch_min = 0.420585435709;
    msg.pitch_max = 0.559357644074;
    msg.q_max = 0.999620910595;
    msg.g_min = 0.58652369941;
    msg.g_max = 0.45443787835;
    msg.g_lat_max = 0.55516516278;
    msg.rpm_min = 0.174374050909;
    msg.rpm_max = 0.978400460952;
    msg.rpm_rate_max = 0.672858387896;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.976269801322);
    msg.setSource(30763U);
    msg.setSourceEntity(187U);
    msg.setDestination(41826U);
    msg.setDestinationEntity(160U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.0796746823739);
    msg.setSource(38949U);
    msg.setSourceEntity(218U);
    msg.setDestination(39486U);
    msg.setDestinationEntity(202U);
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 41608U;
    tmp_msg_0.bearing = 0.816358052526;
    tmp_msg_0.elevation = 0.0885173340216;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.713310839836);
    msg.setSource(15653U);
    msg.setSourceEntity(26U);
    msg.setDestination(62035U);
    msg.setDestinationEntity(186U);
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 200U;
    tmp_msg_0.period = 78807916U;
    tmp_msg_0.duty_cycle = 230697047U;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.250252847512);
    msg.setSource(22962U);
    msg.setSourceEntity(87U);
    msg.setDestination(55039U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.0453085574128;
    msg.lon = 0.238789771948;
    msg.height = 0.893098254084;
    msg.x = 0.457351188589;
    msg.y = 0.997230231587;
    msg.z = 0.646681155275;
    msg.phi = 0.228981109431;
    msg.theta = 0.192864452493;
    msg.psi = 0.924150459622;
    msg.u = 0.858644543967;
    msg.v = 0.297445873677;
    msg.w = 0.99435493071;
    msg.p = 0.472117944358;
    msg.q = 0.472514195322;
    msg.r = 0.358078211836;
    msg.svx = 0.286857790113;
    msg.svy = 0.411858656278;
    msg.svz = 0.5579549597;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.998968592264);
    msg.setSource(18175U);
    msg.setSourceEntity(117U);
    msg.setDestination(35225U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.40569959576;
    msg.lon = 0.764911318553;
    msg.height = 0.115239124133;
    msg.x = 0.433554793818;
    msg.y = 0.729985668706;
    msg.z = 0.106088425085;
    msg.phi = 0.797048510161;
    msg.theta = 0.64951609021;
    msg.psi = 0.0588048785602;
    msg.u = 0.403980946195;
    msg.v = 0.537322305178;
    msg.w = 0.604841397098;
    msg.p = 0.96019071647;
    msg.q = 0.152953239749;
    msg.r = 0.993856042358;
    msg.svx = 0.321378642434;
    msg.svy = 0.861151541599;
    msg.svz = 0.209374649179;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.131218493722);
    msg.setSource(31046U);
    msg.setSourceEntity(132U);
    msg.setDestination(44360U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.167110505417;
    msg.lon = 0.587105983903;
    msg.height = 0.0107859447388;
    msg.x = 0.157686984545;
    msg.y = 0.618324303013;
    msg.z = 0.445805631426;
    msg.phi = 0.550976761411;
    msg.theta = 0.687343111817;
    msg.psi = 0.626174853938;
    msg.u = 0.809411250313;
    msg.v = 0.213601986833;
    msg.w = 0.905609399448;
    msg.p = 0.985942737045;
    msg.q = 0.685896604416;
    msg.r = 0.903081231598;
    msg.svx = 0.778637051294;
    msg.svy = 0.562155869349;
    msg.svz = 0.29049737495;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.105296675093);
    msg.setSource(34963U);
    msg.setSourceEntity(94U);
    msg.setDestination(2378U);
    msg.setDestinationEntity(126U);
    msg.op = 79U;
    msg.entities.assign("ABBIDDZORVWAXBPRJZKNCASSGVESMLGIKOCZBOJRZNIOXGYZTADVZYPFKCBQLYFZEMDOCSENOHMMJCXLBQVKVXQT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.123146970858);
    msg.setSource(41393U);
    msg.setSourceEntity(168U);
    msg.setDestination(1302U);
    msg.setDestinationEntity(132U);
    msg.op = 209U;
    msg.entities.assign("VNURXXMNMKZRAKARXIYCLHLDZHHGJRBPYQBRTVVWAOKEPPEOTFUOZNTCFYZXZFEJDVBCDYAMNBKAQQIIQDIFBQNYXOCGHOLHBJYABXTGZXSYVANWZLQSSOENTADALOSMEYRWZUXRNUPJMFILTKYHFVKMIGRDELZGGQUPPJQGUMECSNBJXDFIHCEMVCCJIWTWPGJFMQFQDPPMENWDRBKTLHUDTISOTBHUCUSSAKPJKKIVOSUFVYE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.453514323026);
    msg.setSource(46396U);
    msg.setSourceEntity(222U);
    msg.setDestination(17084U);
    msg.setDestinationEntity(28U);
    msg.op = 130U;
    msg.entities.assign("IIFBTEAXKKJZVTDEEDUBXDLTDYECPVJYQUMXAYRSSVKLWTNHKCSZFPCPDYBTONMSBOUIPXIGJFUPJONALWFWXAFQFELCXWCZUCFUBXCOGSGMUHPLNEHEPOFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.421572147356);
    msg.setSource(31683U);
    msg.setSourceEntity(232U);
    msg.setDestination(25323U);
    msg.setDestinationEntity(154U);
    msg.type = 50U;
    msg.speed = 5320U;
    const char tmp_msg_0[] = {114, 34, -46, -92, 101, -59, 19, 119, 7, -122, -5, -78, 80, 115, 17, 72, -68, 48, 60, 36, 17, 5, 44, -15, 101, -4, 107, 57, 55, -114, 29, 97, -56, 37, -19, 29, -128, 21, -60, -25, -85, -123, 8};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.522949614267);
    msg.setSource(37377U);
    msg.setSourceEntity(172U);
    msg.setDestination(60786U);
    msg.setDestinationEntity(123U);
    msg.type = 232U;
    msg.speed = 12905U;
    const char tmp_msg_0[] = {-11, 90, -106, 15, -58, -34, -26, 69, 36, 12, 3, 85, 25, -79, 122, 75, -88, -23, -71, -84, 116, 19, 6, 83, -50, 87, -2, -9, -32, -79, -101, 82, -81, -57, -37, -52, -64, 86, 4, 92, -70, 81, -7, 1, -30, 46, -107, -111, -42, 106, -21, 83, -89, -119, -108, 82, -121, 59, -67, -7, -22, 53, 78, 68, 11, -35, -10, -99, -52, -21, -51, -25, -94, 64, 118, -10, -87, 18, -20, -43, -99, -63, -51, 83, -8, -45, -126, -115, -61, 28, -6, 57, -53, 86, -74, 40, 89, -50, 9, 67, 2, -123, 70, -88, 64, -19, -102, 88, -101, -73, -16, 98, -64, -88, 18};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.511826093562);
    msg.setSource(20386U);
    msg.setSourceEntity(21U);
    msg.setDestination(31343U);
    msg.setDestinationEntity(117U);
    msg.type = 147U;
    msg.speed = 60541U;
    const char tmp_msg_0[] = {-87, -122, -42, 14, 23, 15, 98, -105, 64, -12, -19, -41, -67, -41, 72, -58, -63, 30, 109, 5, -110, 15, -4, 44, 27, 126, 106, 75, 106, 33, 99, -29, 126, -44, -89, -29, 80, 75, 40, 91, 5, 52, -24, -123, -121, -83, 116, 120, 56, 49, -55, -54, -104, 105, -24, -6, -64, -1, 31, 120, 56, 84, -98, -101, -40, 111, -85, -47, 65, 22, -81, -2, -96, -12, 31, -93, 16, 99, -48, -26, -6, 57, -12, 106, 74, 14, -89, 3, -127, 1, 62, -73, 106, -10, -75, -53, -7, -103, -52, 68, 109, 59, -75, -31, -68, 53, 71, 37, -12, -107, -36, 93, 100, 96, 113, 103, 125, -57, -58, 15, 89, 43, 23, 22, -103, -113, -34, -14, 106, -78, 115, -101, -119, -66, -80, 2, 76, -104, -61, -32, -23, -96, -80, -68, 38, -127, 80, -118, 38, -109, 121, 10, 73, 0, 78, -80, -99, -78, -83, 54, -49, -119, -76, -82, -53, -17, 68, 61, 93, -101, 3, -75, 76, 103, -107, -125, 125, -8, 62, -48, 97, -65, -59, -29, -98, -3, 26, 39, 47, 45, -88, -46, 104, 85, 62, 115, 101, 93, 122, 10, -49, -38, -45, -53, 91, 33, 82, -125, 29, 3, 90, -35, 37, 88, -33, 0, 119, 6, 65, 21, 70, 24, -4, 80, -69, 31, -28, -10, -17, 49, 34, -25, 114, 101, 32, -46, 104, 94, 125, 42, 23, 114, -89, 3, 28, 93, -109};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.428188293042);
    msg.setSource(63895U);
    msg.setSourceEntity(93U);
    msg.setDestination(59917U);
    msg.setDestinationEntity(122U);
    msg.op = 216U;
    msg.tas2acc_pgain = 0.369484210815;
    msg.bank2p_pgain = 0.0823224027181;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.432769526643);
    msg.setSource(706U);
    msg.setSourceEntity(115U);
    msg.setDestination(36196U);
    msg.setDestinationEntity(178U);
    msg.op = 31U;
    msg.tas2acc_pgain = 0.273454814541;
    msg.bank2p_pgain = 0.0435145819967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.604805321595);
    msg.setSource(52155U);
    msg.setSourceEntity(219U);
    msg.setDestination(19038U);
    msg.setDestinationEntity(68U);
    msg.op = 81U;
    msg.tas2acc_pgain = 0.958270950329;
    msg.bank2p_pgain = 0.369672883793;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.269755476304);
    msg.setSource(23056U);
    msg.setSourceEntity(51U);
    msg.setDestination(58015U);
    msg.setDestinationEntity(215U);
    msg.available = 9036060U;
    msg.value = 78U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.742178767887);
    msg.setSource(11827U);
    msg.setSourceEntity(8U);
    msg.setDestination(40288U);
    msg.setDestinationEntity(165U);
    msg.available = 2725960219U;
    msg.value = 77U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.767269342249);
    msg.setSource(35157U);
    msg.setSourceEntity(9U);
    msg.setDestination(48422U);
    msg.setDestinationEntity(138U);
    msg.available = 2751973987U;
    msg.value = 167U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.268971581391);
    msg.setSource(29041U);
    msg.setSourceEntity(172U);
    msg.setDestination(17949U);
    msg.setDestinationEntity(44U);
    msg.op = 13U;
    msg.snapshot.assign("YTDVMTVBZWVPVCZXDADHQZLWROAPVQLIMRBECVUMTKJAJOITEQSZNOGOECMTYXDBAKTPHOWYDSQHDISOFFTNG");
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.507008712717;
    tmp_msg_0.x = 0.64066287596;
    tmp_msg_0.y = 0.768230815543;
    tmp_msg_0.z = 0.900699817808;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.974030773357);
    msg.setSource(6870U);
    msg.setSourceEntity(141U);
    msg.setDestination(63985U);
    msg.setDestinationEntity(59U);
    msg.op = 240U;
    msg.snapshot.assign("VSKPUQJHTDSEXBXFPMKNUHYZICRLZGENRQROYHJEONLMPFKSROXCZJIZMCKVMAMZPHLWFCPZNUSLUDKBZFPSSWYQQIUXFGJYWQKROVUDYUSAXLFWIWOVBHPZALXCYAYQWQJOYDDSKGEAWFQTXBAITFPBTDHFLHTGITDYJVDWITUZCGNRAGXBGBDWJMOJQJLMCFGRNGOVPHJVTPBRLVEHESRKNKMYMNGTEHSXCVNRWIZUMEAXE");
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.708588451853;
    tmp_msg_0.lon = 0.206577526434;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.871762319261);
    msg.setSource(21016U);
    msg.setSourceEntity(11U);
    msg.setDestination(17175U);
    msg.setDestinationEntity(223U);
    msg.op = 143U;
    msg.snapshot.assign("DDYOEPFBCTDEZFVHRFWBQOOXBXMSJOAHBIKQSYVWXATMLBYZGZFHUBCNJKBZYSPWDTKRFRYCLMGARMXMKJVPLECZUGAAKNHQIUJFETYIVLBNJVDISIFWXTBAWWZRRQYNCTQ");
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.611329929121;
    tmp_msg_0.lon = 0.223919964106;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.734764136073);
    msg.setSource(20457U);
    msg.setSourceEntity(159U);
    msg.setDestination(21975U);
    msg.setDestinationEntity(207U);
    msg.op = 171U;
    msg.name.assign("NUKZSFGURQLRPHOWMQNFZNKJTJEWZTBYJIMJGQWRXIFHRXQGNBGBGRSXDYMVARMCYPPUEKX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.884421054347);
    msg.setSource(56797U);
    msg.setSourceEntity(132U);
    msg.setDestination(41822U);
    msg.setDestinationEntity(155U);
    msg.op = 15U;
    msg.name.assign("UFYDZQEAJLWWRWMTASTXZBWQC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.0515462481164);
    msg.setSource(44418U);
    msg.setSourceEntity(136U);
    msg.setDestination(64727U);
    msg.setDestinationEntity(17U);
    msg.op = 119U;
    msg.name.assign("XFKXKDEPFQZFLLBQCGCEGKDFEFISGGSNXTHQKHOBVSAUTNTDXCYJRYOGCMMPRWEOQHIPJDQZKVNSWVVMQAUYUWNLZSJRZKRMRHBCYZECOXIUXXTALJIQPMHY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.971656377821);
    msg.setSource(36910U);
    msg.setSourceEntity(241U);
    msg.setDestination(33860U);
    msg.setDestinationEntity(95U);
    msg.type = 24U;
    msg.htime = 0.79479738309;
    msg.context.assign("CGSRHFXQDNDVEJHYKJWSGVOPYXKDYGYMUVPZNDIZLARECR");
    msg.text.assign("CIRXSMKVXYRKJRHZPFODTHCANL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.576028842199);
    msg.setSource(15110U);
    msg.setSourceEntity(92U);
    msg.setDestination(8015U);
    msg.setDestinationEntity(157U);
    msg.type = 214U;
    msg.htime = 0.941904724519;
    msg.context.assign("MFIOJKEINZXKNRMXOJYQHGOIGLRXBXDDIXFOESVQGWPJQXMQRCLVDBAPKAPAMDYECMNHEZTPYUCPYDNUNMJNLYWRPEGIZKMRVYEWWOLPDZKSWJATSBMFBAWSIVHOFGTCRRVUHJVTHYFLFEGCAGCKVQSDIBASEELMBGIQJTHMOSUVICTBZXFOHJOKZLHSQLPLZRWNTUEFBDYGXAZKPRCDNFBJQUKOAZSHUSFWVTUNJQUCYTGWBXNAQCZPYVT");
    msg.text.assign("DCEPENWEQVBDSXQUTLEUJAIVIRWIZEPLAZLRSCUUCTMTZBYOMCYFIBSOSUQKNNRJKGYSMKCEVTLWOPVTHRFWJJXBILAMESPIOLAPQWVMEGBHOMNWLDCEBICALFRPSUXJGYXNZCHOIRKUZXORKTVIVQJNPMGUAFFWEC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.717845608711);
    msg.setSource(18274U);
    msg.setSourceEntity(107U);
    msg.setDestination(52121U);
    msg.setDestinationEntity(163U);
    msg.type = 193U;
    msg.htime = 0.3469389269;
    msg.context.assign("NQSFIQNGHWADZOAGRIZGBXHXFFGSJMICDRFBDOAPZBCXLTNMEUSVEKCAVVRURIYQJPLXAJJZWYSBKH");
    msg.text.assign("QDOKUHLXEDLMDBGNUTFXVGAMPEPJZHRYQKYJRMRTEJZTZPSGESSJRHGOZXOLAFKWYMCQFIRARPGPCWVWLANDMPSOIYLJGEJXNACIXSMHUJASIKXHZUTSUNJYPYSSNGHTCBPNIWNUVVYEOQJYUMYICZXA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.239257061836);
    msg.setSource(18807U);
    msg.setSourceEntity(21U);
    msg.setDestination(40346U);
    msg.setDestinationEntity(39U);
    msg.command = 244U;
    msg.htime = 0.387155857115;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 116U;
    tmp_msg_0.htime = 0.0313483841648;
    tmp_msg_0.context.assign("CWWRVWBNEIASMYJBHNYSXCAQENTULHKVKUQJTKZFYWMOJIARREZEBGTLGZGWLGCOAZAGKZNFLOALUECFOHHXVBKYJNHISHSAQEQSVVDLFEFWBTTILYRZLORMVDIKHWRNCTUUKASSRQOQZINPXPCXBIPPPDIDNBTUXMFDXADPOBBCDMELOQXKPVRPYZCZOGGDUQORJEMVFJBHAVTWHJVYIMSDXXQ");
    tmp_msg_0.text.assign("FWEAEFZBFFZEOGXGB");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.607080475586);
    msg.setSource(48892U);
    msg.setSourceEntity(107U);
    msg.setDestination(37145U);
    msg.setDestinationEntity(194U);
    msg.command = 65U;
    msg.htime = 0.515972866602;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.243623439648);
    msg.setSource(28629U);
    msg.setSourceEntity(232U);
    msg.setDestination(350U);
    msg.setDestinationEntity(69U);
    msg.command = 37U;
    msg.htime = 0.935559289056;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 14U;
    tmp_msg_0.htime = 0.198921079954;
    tmp_msg_0.context.assign("UZLGRRZIPFQYWKOTBDUMTNZDKVCJEBFMFMJTMEEFSWEOJTVQNDQQJCBDRXRMJZPJLQENKHREJITPSRLKICRELTODXXSZXYVPYKORNHEZMXXMGHUUNICWMXJPBUSWAVBTMOANGSNKUFCJHHJDSPSYMDBAIFPOKGLDTPSTYXCVBVVCKUXVNOWOWYBHCGNGUHLIQULFORHRPGAWYFIHWLFGEHCVBATVAYWAISYDYFQZKAZQCKDASWZQL");
    tmp_msg_0.text.assign("MOVKJABQXFWBXCVGTWVZYQSKNBTWYBASXLVHRTIZZGUFEJDHRYDQMNLISYUAUSLUEJRHHTBAIJZKCQANZLCMWWWVSGPSTIPBTIHDVRFJGAVXMOAKPKGEJFNJOLFEHOLENOLBPDFRRYNIDCMOQEWTYYJZETPUG");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.53546777069);
    msg.setSource(13878U);
    msg.setSourceEntity(223U);
    msg.setDestination(57524U);
    msg.setDestinationEntity(143U);
    msg.op = 223U;
    msg.file.assign("TGXMXOJDNUZHPHAWGILBGWWANDIECRJPYTWJRORKUVKJBGPHJYPYF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.0142559257056);
    msg.setSource(11563U);
    msg.setSourceEntity(27U);
    msg.setDestination(54879U);
    msg.setDestinationEntity(107U);
    msg.op = 20U;
    msg.file.assign("CLUYCLHUALYAU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.333255202781);
    msg.setSource(35411U);
    msg.setSourceEntity(202U);
    msg.setDestination(39478U);
    msg.setDestinationEntity(17U);
    msg.op = 236U;
    msg.file.assign("WTXIEUTIDGMJKTQVLSOCMNZDAGAQWVGMQRZWGHLYPBXTGQOEVFFDSXQHMTTPANRNCZHUHWAGQKHIWZBOIXHZYKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.515614972138);
    msg.setSource(1126U);
    msg.setSourceEntity(214U);
    msg.setDestination(24054U);
    msg.setDestinationEntity(228U);
    msg.op = 37U;
    msg.clock = 0.404447210159;
    msg.tz = -63;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.522801357673);
    msg.setSource(39657U);
    msg.setSourceEntity(173U);
    msg.setDestination(1655U);
    msg.setDestinationEntity(39U);
    msg.op = 164U;
    msg.clock = 0.158636517668;
    msg.tz = -18;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.758360621478);
    msg.setSource(20U);
    msg.setSourceEntity(204U);
    msg.setDestination(31950U);
    msg.setDestinationEntity(56U);
    msg.op = 121U;
    msg.clock = 0.401189661122;
    msg.tz = 114;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.529139295892);
    msg.setSource(12149U);
    msg.setSourceEntity(62U);
    msg.setDestination(32602U);
    msg.setDestinationEntity(81U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.631450523443);
    msg.setSource(53843U);
    msg.setSourceEntity(21U);
    msg.setDestination(10060U);
    msg.setDestinationEntity(29U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.519799031416);
    msg.setSource(5658U);
    msg.setSourceEntity(136U);
    msg.setDestination(54762U);
    msg.setDestinationEntity(110U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.175659123537);
    msg.setSource(15561U);
    msg.setSourceEntity(196U);
    msg.setDestination(9978U);
    msg.setDestinationEntity(70U);
    msg.sys_name.assign("UOEDIRXFSDCGBTQCSJAQLTXIGCLZBFMJGIIONEMXWPPUGVEFUXIPVZMQBYYHJKMAUFTPFJJNTRONKCMNNNTHUSSCRFYGEERZGGVALTMOMQQXKSNUTYEOYDBVLIBADWICKKHJXCPIFGSHMAJIVHDVBQEOYAWMTRQWRPQLJYEESHMVXSFZIDPFLQWRFRNUSJXKPBHXRDLVYYXZQOGCWLAGAVUKBHSWBYKZBWJNLZKCARDLPWT");
    msg.sys_type = 30U;
    msg.owner = 21677U;
    msg.lat = 0.529060862936;
    msg.lon = 0.613708097617;
    msg.height = 0.236934237781;
    msg.services.assign("QLUHJPLTXORZZQSWEGNXKCHROWWVSKCWINAYGEANUQCVZVCWUHENTBDQUKHMFBPQHJXYIFJKPPIFPFWXMXFZKBLAKYVZTTLXITYWVYPMUZWBIMMEJZDKOYZSSTUOLAAOMYGAZDBGNCUNFSLHAJBGRRDPPKCEUZSSNQYNHSVEDDRTILHAIJOCEMEDTKGCNDGRDCKVYGEOJRLBXMYJVOMIBQRVLSGQJFTHTUWNEFDIRXAXQX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.550881318491);
    msg.setSource(60588U);
    msg.setSourceEntity(78U);
    msg.setDestination(18463U);
    msg.setDestinationEntity(157U);
    msg.sys_name.assign("BEHWQCFBXVRPCLQXAILCLGKEMYSYUFTJHSAHUMVDDXPTRSVBDTUKZGJJMJYIKYDNTWIAFZALVUQHHFYGEHGJSODKVOJCRWSXIEIESZZMYKALBGQMXLEHMPSAAPYKINNBBKQC");
    msg.sys_type = 61U;
    msg.owner = 22174U;
    msg.lat = 0.807386167265;
    msg.lon = 0.672412372205;
    msg.height = 0.196655186814;
    msg.services.assign("PRFVAOSXMIVUBPMYDGDOKOTETPHDODREJRLFVOJVF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.824474570168);
    msg.setSource(11819U);
    msg.setSourceEntity(117U);
    msg.setDestination(25913U);
    msg.setDestinationEntity(176U);
    msg.sys_name.assign("WRQQRBYXTWCUGDOYHBAMTQJIWEBQIJMFSGFVGVXNZQWBDMGKZVMONPHNEZPIZYMYUQGPCLPKNFWEPLCBVXZQYLUKKAFURVUJECDSWEDFEWFRXDK");
    msg.sys_type = 1U;
    msg.owner = 29306U;
    msg.lat = 0.937965960031;
    msg.lon = 0.0321200513662;
    msg.height = 0.515452541717;
    msg.services.assign("HIGRFEBARVYWDGQULJFNVTGTSBRCYQSXBUSXVZCUVYKXYJBHUKPWSCMQNZCJPBHBYSTLTBEHILKDFTUTTXCLNWRNSODHQPPOKIWYMRZXLDKFVSYHQCXOZEOAIHVVNSRMIQWRJBRKAPMZXAHJPZAVFMMPIFUEGWOYYDCUBDOVWUJPOTTDFAJWFMOKDX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.312688387508);
    msg.setSource(29877U);
    msg.setSourceEntity(32U);
    msg.setDestination(8855U);
    msg.setDestinationEntity(62U);
    msg.service.assign("COBXZMITSIDCUJCSWZDDOSCHMJHQCJGAJKNXTBKCQRZIGURPHGSMNPLNLEMURAOEZTUEGYJYS");
    msg.service_type = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.49012877169);
    msg.setSource(18234U);
    msg.setSourceEntity(93U);
    msg.setDestination(51253U);
    msg.setDestinationEntity(148U);
    msg.service.assign("ERNVANMOLXNTCIBJOAZIIMINTIZOVYLWRJUOQNPVQSRYGVWHSUGMLLQABYTDWADPOCYGABZUSTXSICLQQUEWPXXKRVWMLKFKHTJBLMMCZJEUVQSOCMXEDKJORDFPGYRCHUHJABUXAJWINQWHNPOZUWCJKXKBBSTQEMSKPVOGZIFQFGLTQZFFOHDEILEZXTYAWHDFARKSRVSVDUIFGPCGNHBHYLBEURYDPCTKEPYNWYMG");
    msg.service_type = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.289299187822);
    msg.setSource(14418U);
    msg.setSourceEntity(213U);
    msg.setDestination(41372U);
    msg.setDestinationEntity(24U);
    msg.service.assign("HKONMHVWWJNHPBKUUCRJIUHRUVRZZGZOEODJELFDTGCIACYMJAMMBSDGDMIXANEORZAEPXVOHUYVZ");
    msg.service_type = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.710876895785);
    msg.setSource(44074U);
    msg.setSourceEntity(69U);
    msg.setDestination(20816U);
    msg.setDestinationEntity(61U);
    msg.value = 0.737823227073;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.033653042968);
    msg.setSource(14551U);
    msg.setSourceEntity(133U);
    msg.setDestination(7748U);
    msg.setDestinationEntity(176U);
    msg.value = 0.565920860284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.925162368854);
    msg.setSource(55864U);
    msg.setSourceEntity(162U);
    msg.setDestination(19351U);
    msg.setDestinationEntity(224U);
    msg.value = 0.382518759632;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.971720084715);
    msg.setSource(2124U);
    msg.setSourceEntity(238U);
    msg.setDestination(51515U);
    msg.setDestinationEntity(112U);
    msg.value = 0.726793900494;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.220001281414);
    msg.setSource(8369U);
    msg.setSourceEntity(215U);
    msg.setDestination(21453U);
    msg.setDestinationEntity(31U);
    msg.value = 0.615224678122;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.543979863363);
    msg.setSource(62680U);
    msg.setSourceEntity(173U);
    msg.setDestination(4860U);
    msg.setDestinationEntity(41U);
    msg.value = 0.491485356798;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.038917639388);
    msg.setSource(27189U);
    msg.setSourceEntity(248U);
    msg.setDestination(61061U);
    msg.setDestinationEntity(124U);
    msg.value = 0.565461726165;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.364410558831);
    msg.setSource(11255U);
    msg.setSourceEntity(0U);
    msg.setDestination(65524U);
    msg.setDestinationEntity(142U);
    msg.value = 0.444739238058;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.172935426719);
    msg.setSource(12129U);
    msg.setSourceEntity(67U);
    msg.setDestination(25508U);
    msg.setDestinationEntity(188U);
    msg.value = 0.470141286243;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.0905991802003);
    msg.setSource(14332U);
    msg.setSourceEntity(16U);
    msg.setDestination(60448U);
    msg.setDestinationEntity(96U);
    msg.number.assign("ECAPBZMWRUKJKUADSYPLWLOMLHBQKEUNEMWKILIBAZYFNJCRXMEAZNYGPZVJWWZLYCCOISBKRJQWWMYFPVNFNJEHXPVSXVNCJPRQEOMRUCSLDGBJFWDVDVXYHEFBHSAQMIGOJTMLDCIYQZLOAXHZSTNORUUTUYCGSOZCGSFBHQETKWQQIHTBXFDTLTPXKPDOQXWGSIMGJXR");
    msg.timeout = 16768U;
    msg.contents.assign("LGATUHISUUMJTOECRLEJGJWNBXTNCXKMJCVWNVAWDIFQQFOMELHEOPIIFNKVZNZTWYMBZUAWOHQZNRSDOKPMEGFRGCJBINMFTOQCVMZCZWAVDLECPQYXAACEXILBGBUHZGWIYRDWHCUTHKIAIEPYLBOADVFKYQKASKVBGSBZTDPS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.369798126945);
    msg.setSource(7028U);
    msg.setSourceEntity(78U);
    msg.setDestination(61725U);
    msg.setDestinationEntity(141U);
    msg.number.assign("AQBNDJLNUMFXBKAFDTHZDMQTBWGINGALVMQXNLKZGKBDWIRKSBSDWFZONVPWNCLXSYYFCKXNGSDCTCCUUFTPMMLIJLIYSACRUHQUZWLWECVDWBYNFPKYNOQAITGK");
    msg.timeout = 50034U;
    msg.contents.assign("KZLAXOWXMXSKJSKHQYFTAVTUDRHZEDAWJENKCYELBRXCYSFFVASXYHVFOFGAGOGYMPBOXMTPFYMLWJDWWGMTDFDKURPPXVZDQCYRFOMSVLNLHEGKZRIJFLZZNNDCNTHNQRNCCEGUIMESPPVRABQUKJHWOHTPZOQLOABPIFYYGCCUBIWQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.186029669652);
    msg.setSource(36571U);
    msg.setSourceEntity(32U);
    msg.setDestination(58670U);
    msg.setDestinationEntity(164U);
    msg.number.assign("NWHHIDGMOADGCPIBEGFSHMA");
    msg.timeout = 31680U;
    msg.contents.assign("NQXITKJELXXKVBGDSQMYFLNXTEYTPRANCBHGHRUTYROJWZMGGSKKBSAYJEHPNBTQLGAWSUDOVBOXIQMKWIAKJAVTVISYGYKOOAPLNREYDWMGLPAZUZLGXQEAROWUXIEVNDTKVUMAUJUSFHIIXDEWGIFUDHCPJLMRCZLRVBFUZPWSJQHRFFKTSJDCECDWQPB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.514589120111);
    msg.setSource(1540U);
    msg.setSourceEntity(170U);
    msg.setDestination(28354U);
    msg.setDestinationEntity(93U);
    msg.seq = 1401801486U;
    msg.destination.assign("MNOBRLVOZVFYCPCFYWMBIDDYJQCRCRUAHXTQEPEPBTZISEVONAGBLGSKFYDXIIPUFNDAVJBRZLSMEDXYLEHGYKJBVUEWNWJHJAETQZGASRNNSXHOPPVITXLQOLQEFITQDZLENQHBUMRYRQRXVWUIQKKTZZZYROYDKSKGNUISOHCAOGTBOYMKXCWTMDGLPCZWJWNCRVHMXUUJSFWFWUBIZGJVGBEUCGKLMHVAK");
    msg.timeout = 52332U;
    const char tmp_msg_0[] = {83, 62, 66, -69, 78, -74, -88, -57, -121, 102, -72, 101, 0, -107, 103, 93, -86, -86, -39, 80, 18, 26, 1, 69, -112, -120, -48, -108, 78, 38, -21, 14, -22, -103, -112, -38, 44, 33, -116, -37, -86, -62, 6, -126, -102, -3, -27, -43, -120, 10, -28, 109, -64, -21, -90, -36, 126, 64, 62, 126, 108, -119, 72, 99, 36, -28, -118, -7, -28, -89, -72, -81, 100, 19, -11, -76, -122, -73, -33, -81, -14, -95, -93, 110, 63, 117, -39, 36, -32, -13, -31, 20, 102, 101, -124, 102, -14, 6, 82, 115, 104, 52, -25, 26, 73, 99, 33, 109, -42, 57, -9, 64, -72, 126, -2, -93, 10, -47, 122, 41, -37, -67, 65, -94, -106, 75, 58, 51, 83, -82, 115, 72, -25, -91, 4, -122, 62, -39, -29, 91, 22, 60, -59, 113, -78, 46};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.243053302764);
    msg.setSource(41991U);
    msg.setSourceEntity(129U);
    msg.setDestination(8443U);
    msg.setDestinationEntity(0U);
    msg.seq = 773252575U;
    msg.destination.assign("ZCCBDFFWIXXYJZOJKCSAMTEUNV");
    msg.timeout = 8990U;
    const char tmp_msg_0[] = {-88, 62, -58, -114, -109, 25, 99, -6, -96, -111, -96, 0, -55, -20, -47};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.959264713779);
    msg.setSource(58420U);
    msg.setSourceEntity(138U);
    msg.setDestination(48528U);
    msg.setDestinationEntity(141U);
    msg.seq = 2380169515U;
    msg.destination.assign("MEJUYSWNVNNHXKVDPAAUVWRNBTWPMUQYDIOZOKBYLTPEJTHJQWUAVKEAESLJMBEFXTAYRIOQWELJ");
    msg.timeout = 6844U;
    const char tmp_msg_0[] = {102, 47, 75, 64, 47, -17, -93, 74, -102, -120, 14, 10, -50, -3, -82, 72, -77, 93, -75, -87, 20, 115, 12, -78, -128, -113, 63, -58, -16, 98, -11, -54, -106, -72, 49, -108, -128, 119, 67, -26, -60, -106, 0, -63, -97, -19, -35, 92, 82, -79, 93, -80, 77, -30, -121, 70, 122, 77, -55, -99, -104, 102, -96, -46, 98, -5, -88, 9, 1, 7, 91, 59, -104, -1, 116, 125, 44, 21, 40, 43, -78, 116, -92, 59, -48, 33, -20, 39, 12, -39, 111, -64, 23, 115, -85, 44, 48, 108, -23, -22, 28, 39, -6, -119, -20, 48, 98, 41, -7, 9, 101, -82, -48, -65, -36, -18, 70, -94, -91, -103, 58, -20, 50, 87, 112, -42, 44, -123, 28, -86, -38, -106, -117, 116, 3, 45, -65, -63, 85, -126, 103, 116, 112, 45, -11, -55, 34, -98, -21, 119, 120, 94, -17, -43, -71, -61, -117, -115, -128, -108, -57, -18, -33, -116, 86, -59, -104, -37, -11, 108, 37, 22, 87, -43, -68, -23, 64, -18, -109, 24, -84, 17, -93, -50, 33, -53, 93, -33, -13, 83, 83, 43, 77, 34, 123, -21, 109, 75, -46, -88, 25, 88, 111, -72, -44, -122, -11, -7, -62, -2, -72, -108, 4, -37, -7, 112, 64, 21, -6, 59, -64, 21, 82, 31, 105, 52, 14, 67, 100, -105, 108, 80, -125, -88, 53, 34, -27, -42, 56, 97, 37, 50, -60, -36, 24, 41, 86, 2, -2, -44, 36, -45};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.746025384654);
    msg.setSource(17385U);
    msg.setSourceEntity(119U);
    msg.setDestination(36178U);
    msg.setDestinationEntity(199U);
    msg.source.assign("CABSHFFDUTHHEXALIVMBRGEYNQYQXGADUWYDGNTPHLPUQQORNBESCTJSXLCVGDJOUAVBRNGKXEPMYXIOEIUUTJSRVXRAZZZKEHLIWVOJCBTAWFZMJKZKFVUMQLISNCAVECFDIKCBEQJRHRMGPJOFPCTPYFWKIWIXTSWYGZRHQMYTLBNPKPMANFSMAHQZNUKOZQWTSMLIWULDYLRJVSBNIDGOJMPVLRX");
    const char tmp_msg_0[] = {-17, 89, -56, 33, 45, -91, 52, -65, -92, 123, 96, -82, 78, -80, 91, -47, 56, -23, 81, -75, -125, -45, 112, -65, 108, 76, 108, 0, -80, 12, -128, 1, -114, -119, 20, -8, -2, -59, -69, 96, 45, 87, -100, 34, -128, 13, -32, -52, -1, -90, -64, 1, 97, 80, -74, -104, 43, 60, 58, 78, -128, 40, -96, 19, 18, -118, -43, -128, 39, 84, 121, -108, 51, -86, -74, -9, -26, 126, 22, -69, -35, 80, -60, 18, -56, 53, 18, 39, -59, 117, 121, 80, 66, -34, 106, -57, 52, -5, -108, 16, 72, -14, 110, 58, -7, -108, 102, -53, 103, -82, 67, 111, -45, -74, -55, 41, 56, 25, -111, 86, 23, -109, -8, 2, -125, 12, 90, 0, -97, 112, 63, -109, 111, -33, 64, -83, 67, -8, 102, -115, 50, -92, 2, -29, 72, -106, 18, 10, 99, 106, 82, 50, -124, -109, -42, 108, 59, -32, 99, 28, 103};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.932970346977);
    msg.setSource(25693U);
    msg.setSourceEntity(95U);
    msg.setDestination(20562U);
    msg.setDestinationEntity(149U);
    msg.source.assign("FNOLRKLLVJRCQNHGWAKZLATTZQOPEKYFFSOFMDZNDGHSTKNEQXRJINERVBURGEHJXSNSUDGDSCVTDHFJLHIFVGMPTQP");
    const char tmp_msg_0[] = {-56, -88, -123, -90, -95, -118, 6, 67, -67, 54, -94, -8, 3, -17, 63, -62, 100, -11, -76, 60, 75, 115, 36, -54, -19, 7, -16, 17, 108, -107, 100, -95, 91, -85, 122, -92, -123, -13, 95, 14, -73, 73, -81, 69, 98, -24, 60, -13, 73, 116, 14, -63, 68, -10, 10, -34, -126, -36, 66, -94, 55, 19, -9, -55, 117, 57, -93, -113, 33, -13, -113, 43, -15, 57, -72, -69, -83, 109, -58, -42, 18, 17, 17, -64, 113, -110, 27, -128, -23, -25, 39, 46, -77, -93, 55, -63, -103, 68, -84, -117, -53, 33, -114, -56, -67, 51, 76, 32, 119, -56, -53, 93, 18, 83, 46, -21, -55, -55, -105, -20, 78};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.457759259136);
    msg.setSource(46292U);
    msg.setSourceEntity(141U);
    msg.setDestination(35580U);
    msg.setDestinationEntity(77U);
    msg.source.assign("BAZGMVACQLHZTRARYXPREJRQZRKKVWVSHDDNHTKGEVIXCNMFESUHMEEGHWPSWGRJLVUOTTOQZMIJMLPTUFBDAMMPQABZOAQJCINNVASEQTJZGYLRAQKFOZCBYTNIHUFBSAVJUFSCJLLNXRFBBVNKQAPGECNULWGIFKOHDXCOXZWGPGYEWEBDYLMXYOJMXP");
    const char tmp_msg_0[] = {107, 78, -80, -87, -23, -58, 9, -3, -128, 88, -77, 9, 101, 105, 117, 73, -50, 50, 118, -98, -77, -28, 73, 0, 15, 107, 75, 14, 47, -71, 70, -35, 38, -30, -61, -42, 90};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.0708106545406);
    msg.setSource(115U);
    msg.setSourceEntity(86U);
    msg.setDestination(45829U);
    msg.setDestinationEntity(246U);
    msg.seq = 2400893674U;
    msg.state = 77U;
    msg.error.assign("YPNBNEKUMOCFRNLWPASMRCIWVPSZXHQZJOYERWPEXMHFPVPWACUFQUTFQZKVGKCREWLISFYTLMDZGIEVSBLVRLQDENJTTBHKMZBWBKPLLJPEBGTMUVLXOIZTCHDNUABRASHROQWFCDXWAPNGSLHYSTVHYGD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.777664453175);
    msg.setSource(42368U);
    msg.setSourceEntity(211U);
    msg.setDestination(43546U);
    msg.setDestinationEntity(230U);
    msg.seq = 2765452684U;
    msg.state = 15U;
    msg.error.assign("LELDQAWLQUHMVGLRWTZNCRVOHTOYKGCQPSTQILQVEZJCONORZVYBHUBNLOQAJXUTJBJDKSFZYONRWBMXCGAHJVDNRPGRCQSKUZMDSVYGKFTBBNXTFHXMNAHPUEIDPOVDBQTYGSXWJCPVARFQOZKENREWRHFYMMHPICJJFXKZBCKUPUZKSNEORAABJVMCMQLWEZUDHSG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.907349721538);
    msg.setSource(109U);
    msg.setSourceEntity(2U);
    msg.setDestination(654U);
    msg.setDestinationEntity(69U);
    msg.seq = 4071267423U;
    msg.state = 76U;
    msg.error.assign("LBVNRFWYQFTTRZNOTFEBBHRLJAFONZIFEHUGSXSEEHCDKDEFOAYWCEAQEGGEOWBQSDFZVGSTTMLUJGMARUITTJSXUJKTMGUHZMMCWPRQLMOCNRELJVYHBLXIPAHSPBSBDGXXQMPRXGZMU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.366514046833);
    msg.setSource(2066U);
    msg.setSourceEntity(101U);
    msg.setDestination(60212U);
    msg.setDestinationEntity(1U);
    msg.origin.assign("SQHFFAUSNZCPMWTDBIJSISMBMTNFGSMVEVKIGXFDKAUCLMMLWHOGDBSTQEKVEXSJPVRVHEZWYZVIX");
    msg.text.assign("ODQHRIFPHIXI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.68036247978);
    msg.setSource(53261U);
    msg.setSourceEntity(87U);
    msg.setDestination(4628U);
    msg.setDestinationEntity(212U);
    msg.origin.assign("ASWCFRLMYVTKKOBMIVQUAJ");
    msg.text.assign("DCPOCTNMZYWWUGAJPLXFRAZWVZWTCJMEAYOUVPSGKCHQYGSEHAVXRTAIGPVFH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.179062334246);
    msg.setSource(23118U);
    msg.setSourceEntity(120U);
    msg.setDestination(2363U);
    msg.setDestinationEntity(215U);
    msg.origin.assign("PEOWWBQYFBTWCRETNOQEVDMDWTTDCUNIJBCVQSYLFHWZMIOKNSRNQHSXHAKUOUFFQIJHPZUCGIKVMH");
    msg.text.assign("VQBMWFHHQNGQFEPNLPMWRLOICOZEFBXLHSOPXVFXHCSXUCPZUFKCINTKYYINWASAYWEEHUGMGVUDJQAMHTBYIHT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.906135436026);
    msg.setSource(50976U);
    msg.setSourceEntity(30U);
    msg.setDestination(18655U);
    msg.setDestinationEntity(59U);
    msg.origin.assign("KBEDVTPAHUAIPPTWIJRFCFHWQWKXGRXBHEGOYNDWHYLILVWODFXAYGEMNHXCNRJQNXSZBFTKNCLOAXSBQOEKKASRUPHQDLQRYUGAWZIMETSXULTOBPBDEVUITNGNXRHKYIODMRZFVJOFVYYGUHM");
    msg.htime = 0.28226325938;
    msg.lat = 0.752516441265;
    msg.lon = 0.764631385881;
    const char tmp_msg_0[] = {10, -119, 39, -95, 12, 82, -83, -124, -45, 40, -90, -73, 84, 66, -96, -98, -111, -78, 32, -125, 23, -41, -98, -23, -14, 90, -29, -122, 49, -65, 0, 4, 99, -109, 112, -124, 46, -19, -6, -38, -23, 103, -77, -32, 109, -120, -41, 74, -53, 54, 21, 54, 31, -34, -7, -113, 124, 88, 79, 18, 34, -28, -40, -39, 42, -71, -75, -38, 118, -18, -45, -42, 108, 123, 8, -26, -57, 16, 112, -79, -110, -109, 24, -78, -38, -75, -55, 41, 15, -61, 101, -79, 72, 82, -4, -49, -34, -39, -117, -22, -89, 7, -97, 116, -43, -27, 19, -12, -47, 35, -60, 72, 95, -19, -68, -30, -67, -44};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.793008172431);
    msg.setSource(4952U);
    msg.setSourceEntity(122U);
    msg.setDestination(40272U);
    msg.setDestinationEntity(88U);
    msg.origin.assign("UOQTDVSVURMZCLEUJDWYBPAGSSNQZKDBMFSYQHYZKKHYXGYUIEQGJYIJEGAPULFTBGQKNBTIGUERXPAXSPZZHRCEELFAIIKGDSOCMQRNCITPCLGDRNAXQOPOFSQDEIMABMNBRTWWLALKHPYHLJJBDJISWPPNVIRMEDXJCVHHXNXCWNVYTKTOPXMJQFACGUDFTFLVVKHW");
    msg.htime = 0.292451863153;
    msg.lat = 0.50013328403;
    msg.lon = 0.424474308073;
    const char tmp_msg_0[] = {56, -44, 117, 13, 92, -102, 78, -128, -98, -27, 53, -36, 28, 1, 65, -113, 110, 68, -85};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.908170000456);
    msg.setSource(60608U);
    msg.setSourceEntity(21U);
    msg.setDestination(26645U);
    msg.setDestinationEntity(17U);
    msg.origin.assign("KWONPFFBDC");
    msg.htime = 0.60518369793;
    msg.lat = 0.470201194345;
    msg.lon = 0.775192181954;
    const char tmp_msg_0[] = {-75, 73, 65, 80, 87, 27, -16, 99, -92, -52, -57, -18, -106, 56, -4, -92, -76, 105, 32, -49, -85, -45, 74, 27, -39, -80, -100, 92, 53, -72, 30, -13, -83, 86, -58, -75, 46, -31, 61, 100, -40, 17, -14, -39, 84, 52, 72, 56, 109, -64, 120, 75, -36, 34, -85, 32, -3, 110, 100, -126, 11, -26, -97, 101, 23, -91, 9, -37, -12, -64, 16, 70, -36, -18, -17, 100, -83, -53, -101, 73, 118, -75, -49, 2, -59, -11, 74, -21, -60, 68, 22, 56, -55, 98, -6, -92, -31, 65, 36, 107, 71, 89, -26, -114, 57, -45, 101, 99, 44, 99, -67, 2, 74, 119, -17, 25, -86, -69, 42, 31, -112, 102, -91, -72, 105, 25, -57, 2, 111, 122, -91, 4, -106, -100, -76, -47, 31, -110, -124, -94, 121, -121, 47, -49, -46, -2, -122, -2, -124, -21, -35, -20, -76, 86, -7, 64, -45, -71, -66, 51, 118, -105, -93, 89, -73, 107, -123, 17, -20, 91, 1, -73, -12, 83, -85, 56, -28, -98, -117, 99, -63, -49, -31, 61, -78, -48, -7, -72, 56, 39, 31, -27, 20, -64, 22, 5, 116, 10, 14, 26, -37, 126, 97, 18, 92, 51, -20, -37, -23, -67, 95, -116, -33, 125, 97, 25, 28, 45, 28, -76, 2, -91, 13, 73, 52, -45};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.169056245328);
    msg.setSource(19983U);
    msg.setSourceEntity(4U);
    msg.setDestination(37710U);
    msg.setDestinationEntity(199U);
    msg.req_id = 44220U;
    msg.ttl = 64060U;
    msg.destination.assign("ICJBRDRFLKYZWMUEDMQVXQDUXZYLJOAIXARNVSJKHDBTXTZCNPOEYTUEGOUJFFKHVZSEQCVOGSMONPHQYQCVRNSWQKUCLVNPNLYUXGVPMBNGDPZADCFMKSEKTUBKRYBWXGVGHCFXZZXOPNQHMIUYWPYJHHGAFAIKWOCDYLSCEIAHFEDALRFOESXJZWVNMITLMBORGIGZTVSBBKRZHNWUALJXMQELICTQBRRT");
    const char tmp_msg_0[] = {112, -24, 88, 71, -106, -5, -59, -91, 101, -84, 7, -77, 113, -71, 112, -18, 63, 25, 96, -108, -31, 15, 41, 40, -14, 8, 57, 51, 118, -79, -59, -89, 69, -78, 34, -10, -94, -20, -115, 47, 101, -105, -17, 122, 39, -53, 122, -70, -40, 119, -27, 53, 82, -19, 7, -80, 63, -72, -106, -4, 94, -90, -1, 25, 80, -72, -108, 116, -4, 44, -22, 59, 63, -60, -69, -33, -103, -30, 0, 4, -39, -118, -114, -5, -37, -52, 29, -55, 26, 31, -100, -113, -68, -75, -25, -102, -112, -116, -41, -49, 117, -58, -43, -54, 40, -35, 81, 35, 0, -26, 54, 112, 52, 51, -10, 76, -125, 115, -121, 58, -22, 78, 75, -99, 102, 2, -86, -119, -117, 96, 117, -124, 1, 95, -25, -42, -80, -114, 7, -12, 29, 18, -128, 11, -54, 126, 53, 124, -14, 39, 48, -60, -102, -51, 32, 6, -128, -41, 25, -108, -67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.128532033643);
    msg.setSource(2906U);
    msg.setSourceEntity(3U);
    msg.setDestination(35016U);
    msg.setDestinationEntity(241U);
    msg.req_id = 47278U;
    msg.ttl = 16922U;
    msg.destination.assign("EOKXDKCWAZHBLGCUGAEDXUDRZRRZBEMVWIISHYLVFYBETJWMJKJTCPCPHEPLWIRESKMLXJQRKCKSMTADECFEQFJAWBXPSGDTTIYGKGPHFVPSAKKONRZMPZXJXYGFMSCZGHWNCLGDLBVFMIHFVUDSOYLZVYUULYPADIZTOWRHRL");
    const char tmp_msg_0[] = {-81, 115, 114, -10, -17, -35, 9, 60, 22, -107, 21, 102, -22, 57, 31, -45, 94, 82, -59, 9, -39, 117, -45, 119, -78, 103, 110, -118, 7, -62, -122, -122, 53, -101, -82, -44, -9, 25, -114, -85, 28, 81, 72, 120, 86, -16, -80, -108, 29, -111, -111, 105, -57, 55, -4, -20, -78, 112, -92, -11, 4, 45, -96, -79, 78, -49, 35, -68, -23, -49, 81, -48, 84, 96, 80, -112, 107, 11, -46, -26, -65, 103, -116, -102, -44, -47, 106, -28, -72, -58, -17, 113, -71, -1, -122, -127, 111, 93, 110, 62, 119, 14, -104, 46, -66, -87, 74, 108, -98, -116, 38, -9, -73, -96, 89, -25, -30, 44, -49, 125, -83, -10, 11, -123, 12, 69, 53, -12, -87, 84, 41, -33, -73, -21, -53, -86, -69, -108, -71, 90, -16, 87, -87, -101, -100, -37, -39, 30, 104, -40, 85, -112, 75, 19, 117, 73, -15, 27, -103, 54, -84, 40, 8, 49, -13, -66, 5, -89, 116, -18, -55, 103, 113, 5, 118, -4, -100, -104, -87, 17, 119, 32, 35, 86, -34, 15, 102, 46, 118, 122, -44, -121, -98, -122, -122, -40, 55, 47, 33, -125, -114, -15, -128, -104, 98, 30, -15, -26, 102, -62, -77, 62, -43, 43, 76, 8, -114, 14, 28, -105, 36, 16, -39, -114, 126, -25, 104, 120, 3, 1, -118, 51, 9, 32, 70, 8, -24, 118, 85, -77, -84, 98, 92, 57, 55, 5};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.352557341769);
    msg.setSource(62120U);
    msg.setSourceEntity(201U);
    msg.setDestination(36151U);
    msg.setDestinationEntity(204U);
    msg.req_id = 30535U;
    msg.ttl = 5636U;
    msg.destination.assign("JGZWAUUCHQCOTZZPFBKAAHRCFKCJWPVZLXLGYOZTHHNUTHBSUTIBURVGPXVAZESINIVJBDYAHONE");
    const char tmp_msg_0[] = {-35, 7, 75, -127, -23, -120, 88, -106, 99, 38, -105, 51, -97, -61, -30, -23, 101, 43, 53, -122, 100, -17, 50, 95, -66, -106, -27, -75, -40, -78, -51, 2, -48, 99, 22, 87, -21, 56, 117, -12, 24, -48, 86, 5, -17, -21, -40, -24, 87, 71, 109, 22, 45, -128, 74, 48, -101, 90, -116, -62, 90, -38, 49, 92, 0, -114, -36, 111, 23, 70, 37, 56, 122, 65, 5, 44, -122, -99, 3, -53, -119, 24, 5, 112, 60, -120, -103, 90, 26, -125, 43, 67, 38, -23, -55, 34, -122, -42, 43, -85, -84, 115, -27, -53, -77, 2, -118, -54};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.033612633328);
    msg.setSource(50037U);
    msg.setSourceEntity(55U);
    msg.setDestination(64958U);
    msg.setDestinationEntity(30U);
    msg.req_id = 58921U;
    msg.status = 216U;
    msg.text.assign("ONJQBMGPOIYHXTWYBYON");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.786004708806);
    msg.setSource(6588U);
    msg.setSourceEntity(127U);
    msg.setDestination(6715U);
    msg.setDestinationEntity(161U);
    msg.req_id = 34203U;
    msg.status = 189U;
    msg.text.assign("AFZLSDEOBBWPRUYCXVEJLESELFCMAGNPDAEFHVQZSLQTBGUOXLSNETBYRKKOYRPGGVMITVFIZTX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.425775896799);
    msg.setSource(5092U);
    msg.setSourceEntity(230U);
    msg.setDestination(60011U);
    msg.setDestinationEntity(177U);
    msg.req_id = 10808U;
    msg.status = 214U;
    msg.text.assign("NIZJDBBVMTLWGMCU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.928793281823);
    msg.setSource(30970U);
    msg.setSourceEntity(187U);
    msg.setDestination(42088U);
    msg.setDestinationEntity(59U);
    msg.group_name.assign("UIPJVZXTJBNLYDSHDETSLLZFAVFUGWSADAOWNKWLOGUUBFBJETYJHKITAEWXSOYCEEIVDPOYFKKGFNWMBPJXCQGQPUWMDZRRKGPSKJAYMZXIXHQQSQDPYMQRMNBHPFSCDIXOZMGBLAGYVEX");
    msg.links = 4029935327U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.448132885822);
    msg.setSource(53502U);
    msg.setSourceEntity(98U);
    msg.setDestination(1545U);
    msg.setDestinationEntity(225U);
    msg.group_name.assign("CBKRDEGKZOJEJATNM");
    msg.links = 31360964U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.249902833439);
    msg.setSource(16383U);
    msg.setSourceEntity(56U);
    msg.setDestination(29702U);
    msg.setDestinationEntity(205U);
    msg.group_name.assign("BBVVXBPDIUDTFKRYURWGIVSTMSNLRYIEEVPOMSUWLZQZDVCHJIUBVJHJVJGNKOYLOWYFQHHOUKYWOPJCLECGIXUXBAARHCE");
    msg.links = 383507075U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.898866874408);
    msg.setSource(12413U);
    msg.setSourceEntity(28U);
    msg.setDestination(18968U);
    msg.setDestinationEntity(218U);
    msg.groupname.assign("MEPDYXMGKBPVLTZNYEQPBJEXZQDUFRRUEBNICLMRABXKNSGMIWECDJSETZJGCWNDTRCXJYZILQDFODBGOJASZXCAFLWGKVGTHFPOAAWJFQISCYUYCBGVRHLZULJYMEWYMVISBLYIZHQNFDZOOROJPMCKDKBCQBRGLDAAFBPYKGT");
    msg.action = 200U;
    msg.grouplist.assign("DZHVPZOKNQXPWSGKLEVPRBDPAYCMXEOSQLLOSMFSFNOTNBHYYNQTCXSTIKTRHAPLVBIIOFBRZKBAMBAGL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.671048234597);
    msg.setSource(33605U);
    msg.setSourceEntity(113U);
    msg.setDestination(13443U);
    msg.setDestinationEntity(193U);
    msg.groupname.assign("BKLNZCFXYCQVMBLMTHFAOKOJO");
    msg.action = 55U;
    msg.grouplist.assign("NVARKDAXKEDUHEZJJKFUZRFJRQYVGKTAAIRLCLWHFWVTITUWPEWCSQWMQFSXNSDNOOMZPXOOSJRDIPLTYDQBHIGPEOCCJPQNUHAYULGGITPPJMKYDAHFFDUEOHKECZFLVKSS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.529196124428);
    msg.setSource(34083U);
    msg.setSourceEntity(214U);
    msg.setDestination(39479U);
    msg.setDestinationEntity(68U);
    msg.groupname.assign("MCWJSSLKHLTLTAKOACCVYUNMNLGOEFDVGFQUYSSUDOVFLRYHYPJNARSHMFVBLRHLUDGODQFYGNPTJNJMAZWTSRHDCQXYIBQHDETEQRBZBGODVZUXBVWUGZXWZKBZDFRFKZMKWNOPJSQVPUPBMTRIIPNVYELAEXMIKAVNJIWQQLJGQWTWIJBHKZZILGXYVSETMFCJMPUBKXCZIWXQMDGAUPNHEEXS");
    msg.action = 107U;
    msg.grouplist.assign("YFPCXYUKXOOMXLKTFGTSYKFSBKMSVXOAGFLLWVCLVLFCZQEVXPQTJBHWXUJDQHPJSQGHVMZUEGRQILPIPFPORHMICUEGFMFDJKWKRTXJZYQMBJUZORUMSHYDVAEAEWEXSCVUHJZENAARTDEFLGXIBDCNHSWBKOBQGZOYRQPIOXLYDYBQBZRWJRUMSWNHBVDIAIRNNLUCQMYZDPJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.634442423457);
    msg.setSource(62771U);
    msg.setSourceEntity(196U);
    msg.setDestination(49019U);
    msg.setDestinationEntity(27U);
    msg.id = 204U;
    msg.range = 0.623462074151;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.449757549003);
    msg.setSource(38256U);
    msg.setSourceEntity(169U);
    msg.setDestination(57603U);
    msg.setDestinationEntity(97U);
    msg.id = 135U;
    msg.range = 0.611507764523;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.320362230625);
    msg.setSource(51490U);
    msg.setSourceEntity(212U);
    msg.setDestination(61616U);
    msg.setDestinationEntity(119U);
    msg.id = 229U;
    msg.range = 0.68423786174;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.458590315366);
    msg.setSource(44523U);
    msg.setSourceEntity(124U);
    msg.setDestination(20235U);
    msg.setDestinationEntity(26U);
    msg.beacon.assign("ITAFQZHWFWSNFMOWTXALMLIRINYEHVFYBDMSZEVDEBDDYTRJDIIOUSOKWLJLXAAGYBUYPLVZQKVUTJMSPXMVLEZJRAUCKGAPRUIFXZZMJJWFPEQTGBGOOJVTHNUJHO");
    msg.lat = 0.270946409684;
    msg.lon = 0.801385300513;
    msg.depth = 0.335592295799;
    msg.query_channel = 104U;
    msg.reply_channel = 129U;
    msg.transponder_delay = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.0169149794308);
    msg.setSource(57432U);
    msg.setSourceEntity(153U);
    msg.setDestination(53592U);
    msg.setDestinationEntity(47U);
    msg.beacon.assign("PHAESBPRPYIPSDKLIZLDOJUILTJRCXIBMXZFTQOSUTRQHUOCBNTAYRGHUVLFLG");
    msg.lat = 0.199223267689;
    msg.lon = 0.81920455655;
    msg.depth = 0.412562638642;
    msg.query_channel = 143U;
    msg.reply_channel = 53U;
    msg.transponder_delay = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.284864090123);
    msg.setSource(34124U);
    msg.setSourceEntity(51U);
    msg.setDestination(18379U);
    msg.setDestinationEntity(215U);
    msg.beacon.assign("DPHWECYRPZLQCVLQTVGOPEQZEAVPJTPOLIUFMKUSMMPUUCTKBTSMWMGNIONSAUJYRUICIHVMBLWWRLCKYVHCQRXZDAENLFIKYKGQIDBBSIAJHEXPFSDXSXTAJY");
    msg.lat = 0.640832997449;
    msg.lon = 0.753156892644;
    msg.depth = 0.278212473898;
    msg.query_channel = 244U;
    msg.reply_channel = 128U;
    msg.transponder_delay = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.704794277647);
    msg.setSource(7534U);
    msg.setSourceEntity(155U);
    msg.setDestination(34421U);
    msg.setDestinationEntity(167U);
    msg.op = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.826050624781);
    msg.setSource(58598U);
    msg.setSourceEntity(143U);
    msg.setDestination(56912U);
    msg.setDestinationEntity(26U);
    msg.op = 71U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FKIVKIQGXZMSZQKPNLZUNDCEUMUBTMJPSBNRGVQZHHFHEXMINVDXPAELBDTKBFGMLFBIOVGDTGOERYHUANPYAWFJHXJNSWPMKNVEPQVODDPFRCSYIVGLSRWJQCJEZRMMBQQRCCLHPWWBXTJYFJYQYLHXWOAJSLGWZFZKYTKCLVXTCXFSUMHUOOLORXRVJYDCEZYILFAHRIXQDATGSCO");
    tmp_msg_0.lat = 0.347890910526;
    tmp_msg_0.lon = 0.30325917086;
    tmp_msg_0.depth = 0.463429801361;
    tmp_msg_0.query_channel = 89U;
    tmp_msg_0.reply_channel = 157U;
    tmp_msg_0.transponder_delay = 21U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.114587572987);
    msg.setSource(20492U);
    msg.setSourceEntity(159U);
    msg.setDestination(51096U);
    msg.setDestinationEntity(123U);
    msg.op = 33U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.101988386642);
    msg.setSource(45350U);
    msg.setSourceEntity(180U);
    msg.setDestination(58482U);
    msg.setDestinationEntity(128U);
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.0861644143778;
    tmp_msg_0.ay_cmd = 0.147701221357;
    tmp_msg_0.az_cmd = 0.827370225717;
    tmp_msg_0.ax_des = 0.81793904251;
    tmp_msg_0.ay_des = 0.828244024453;
    tmp_msg_0.az_des = 0.407191324839;
    tmp_msg_0.virt_err_x = 0.336997484121;
    tmp_msg_0.virt_err_y = 0.853798139911;
    tmp_msg_0.virt_err_z = 0.515325751735;
    tmp_msg_0.surf_fdbk_x = 0.777711353211;
    tmp_msg_0.surf_fdbk_y = 0.5746062216;
    tmp_msg_0.surf_fdbk_z = 0.726463474071;
    tmp_msg_0.surf_unkn_x = 0.187815729902;
    tmp_msg_0.surf_unkn_y = 0.592201226462;
    tmp_msg_0.surf_unkn_z = 0.502192687327;
    tmp_msg_0.ss_x = 0.254178098712;
    tmp_msg_0.ss_y = 0.222941073888;
    tmp_msg_0.ss_z = 0.276815805927;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.131272504019);
    msg.setSource(55076U);
    msg.setSourceEntity(56U);
    msg.setDestination(13360U);
    msg.setDestinationEntity(11U);
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.183600153834;
    tmp_msg_0.y = 0.897012261066;
    tmp_msg_0.z = 0.461561769534;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.473241125866);
    msg.setSource(25039U);
    msg.setSourceEntity(13U);
    msg.setDestination(1519U);
    msg.setDestinationEntity(236U);
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("JNWVMFMVCIXSOSKSSQJRMUAOWNPREDYANZKFKEXDZZCQRPBIQUIZSCUQLEBJXTGYYOLXARNLXBJHDRQPHTWOBPOKOSQKJKDAWEINJUOHZBEKAFVKTQEFBLXTXGBIAPWZGUXQHBFMVULRRWNZTGEYIARTAKVAVMWTVUHCFYCZEIPCYDPPPIIFUWCMBGUVLTOJ");
    tmp_msg_0.data.assign("HUOCRYQWNWANEVFDPVQQKLCNVWEBOSBOYXPIZRQDIMGDEHDIXWKBVBVYCNAOEVXRDHFUGZCNQJLJMYCLT");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.42320271003);
    msg.setSource(53110U);
    msg.setSourceEntity(52U);
    msg.setDestination(31126U);
    msg.setDestinationEntity(241U);
    msg.op = 113U;
    msg.system.assign("MBKVEYZPGYYCGMFMAXSBTXNCEZVNTFTPHSDWFUMFGOBAFMQSBHKBICWIHUAPXZBJZYYIHZPOLKTUDEQRSZAPKQEUOOYGNXCEYVXITFGHMTJRXSETVQZLKDWVJIYRSYOJEDEGBCQHWUTHCZPEHBWLWPCQL");
    msg.range = 0.678031335326;
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.664145462449;
    tmp_msg_0.dist_min_abs = 0.136517503715;
    tmp_msg_0.dist_min_mean = 0.930800803342;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.811724893667);
    msg.setSource(18914U);
    msg.setSourceEntity(167U);
    msg.setDestination(18741U);
    msg.setDestinationEntity(44U);
    msg.op = 31U;
    msg.system.assign("EFBZYDHBCCRZNRMQDXHRVSHYEJNCENTWKGZXLYDNVXAPLSETVUYQWUKRNONKVUKJLQKVRQCADAJKZMIQFHAARYPUBDDVQZXFWKNLUSTGOTJOFLWADWEBKMRRQPSYFCETFLMSIPVNJAMPBWOPHXVTWYBJERBSCIGXM");
    msg.range = 0.860331171302;
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.122108411099;
    tmp_msg_0.v = 0.616654837125;
    tmp_msg_0.w = 0.860777598471;
    tmp_msg_0.p = 0.491981974401;
    tmp_msg_0.q = 0.720384809916;
    tmp_msg_0.r = 0.513389776441;
    tmp_msg_0.flags = 173U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.0323351778423);
    msg.setSource(33350U);
    msg.setSourceEntity(161U);
    msg.setDestination(55536U);
    msg.setDestinationEntity(148U);
    msg.op = 190U;
    msg.system.assign("KNWJOYXVMTITEHZJWTLCBUFFCDAJMAIJZEHAODCWDXVUOSDPWDSEJOBLSYEMCQJVRSLUAB");
    msg.range = 0.192238899608;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 17732U;
    tmp_msg_0.lat = 0.86071875571;
    tmp_msg_0.lon = 0.374928810051;
    tmp_msg_0.z = 0.0898302092818;
    tmp_msg_0.z_units = 122U;
    tmp_msg_0.speed = 0.503614812393;
    tmp_msg_0.speed_units = 50U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.334244442521;
    tmp_tmp_msg_0_0.y = 0.611637199401;
    tmp_tmp_msg_0_0.z = 0.82586540761;
    tmp_tmp_msg_0_0.t = 0.513441300472;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("FLGTOKKAGLMHHVKZGAETGXQBVPFWVQIVKWYZRCULROAPILQAKOAUTWCHIEJZEZUWOTTDGBNCDIZADINBRROHDZKKNEMSPHLSUUQCKPHGRNFGQEXFSPICMYSEOTWWDICRVUNTSSBVUWGJBJUHWYSQC");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.447461813503);
    msg.setSource(36716U);
    msg.setSourceEntity(191U);
    msg.setDestination(15111U);
    msg.setDestinationEntity(250U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.641474136624);
    msg.setSource(15813U);
    msg.setSourceEntity(81U);
    msg.setDestination(53563U);
    msg.setDestinationEntity(159U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.199581951384);
    msg.setSource(7625U);
    msg.setSourceEntity(50U);
    msg.setDestination(10758U);
    msg.setDestinationEntity(201U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.734045719374);
    msg.setSource(20786U);
    msg.setSourceEntity(228U);
    msg.setDestination(53882U);
    msg.setDestinationEntity(89U);
    msg.list.assign("EZHFTURDKVAYLGVNSHAPSBZIZAPRZJQQOMMXNHZWYQGJXBWBMRUQKVCGXGFKKAFIKREQGICCHLPRKDSADEYDUNQAHGKAWBOQWYCWQMYEVTUBYJCICMMBOOHOXOLIOEZFMFKLNBCTHEPSTKERXXTAUMGAJOJJHLXZC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.820658705375);
    msg.setSource(15742U);
    msg.setSourceEntity(43U);
    msg.setDestination(17159U);
    msg.setDestinationEntity(203U);
    msg.list.assign("ZIXNPTYZDARAFVMYVWFBXPRKOJAIEDKJZCLEQJYMNZMKOVCXZJPHIWLFQYZQOPZHUSCSNXFXZDFFHQUCWTGYCSUVHEGCCLWFVBPRAWTL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.632367584489);
    msg.setSource(57064U);
    msg.setSourceEntity(228U);
    msg.setDestination(34935U);
    msg.setDestinationEntity(32U);
    msg.list.assign("BQMLKBKFZROPXPIPLWJMPIBLWQJROTZUFELBZNRSLXKEJOVZNUTIWDOSOAEVFIMCKDZWZEFYVCCACJQJOSRYCTECYHGKTKGXRTXNCDADUNNQVSOKEBGLJYQZFTIWBLRGNYNSYQHPBUHPRSMXSOVHBAXFFRHDTLDRSVQMFTNYHDIGCIKHCYUFMOEKWJMZQIVUGDGYSLJWTUGYQMA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.530369683376);
    msg.setSource(15276U);
    msg.setSourceEntity(90U);
    msg.setDestination(53804U);
    msg.setDestinationEntity(152U);
    msg.value = 22827;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.161201868831);
    msg.setSource(58937U);
    msg.setSourceEntity(249U);
    msg.setDestination(38043U);
    msg.setDestinationEntity(4U);
    msg.value = 23783;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.0311337346845);
    msg.setSource(49253U);
    msg.setSourceEntity(148U);
    msg.setDestination(15010U);
    msg.setDestinationEntity(231U);
    msg.value = 8796;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.585435477421);
    msg.setSource(57843U);
    msg.setSourceEntity(241U);
    msg.setDestination(57265U);
    msg.setDestinationEntity(229U);
    msg.value = 0.837806462322;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.979038071647);
    msg.setSource(39067U);
    msg.setSourceEntity(18U);
    msg.setDestination(64969U);
    msg.setDestinationEntity(69U);
    msg.value = 0.213539317203;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.854564752564);
    msg.setSource(26264U);
    msg.setSourceEntity(253U);
    msg.setDestination(31250U);
    msg.setDestinationEntity(175U);
    msg.value = 0.0414734829764;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.414096749936);
    msg.setSource(4843U);
    msg.setSourceEntity(65U);
    msg.setDestination(44319U);
    msg.setDestinationEntity(224U);
    msg.value = 0.00584240252472;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.58258942336);
    msg.setSource(13986U);
    msg.setSourceEntity(214U);
    msg.setDestination(8420U);
    msg.setDestinationEntity(47U);
    msg.value = 0.951781542378;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.885642622567);
    msg.setSource(1380U);
    msg.setSourceEntity(242U);
    msg.setDestination(18945U);
    msg.setDestinationEntity(43U);
    msg.value = 0.847153525218;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.316624563618);
    msg.setSource(26803U);
    msg.setSourceEntity(121U);
    msg.setDestination(40638U);
    msg.setDestinationEntity(206U);
    msg.validity = 6769U;
    msg.type = 104U;
    msg.utc_year = 62042U;
    msg.utc_month = 13U;
    msg.utc_day = 254U;
    msg.utc_time = 0.925661384234;
    msg.lat = 0.0513583927814;
    msg.lon = 0.357422180955;
    msg.height = 0.75983699776;
    msg.satellites = 19U;
    msg.cog = 0.0772676144231;
    msg.sog = 0.0347442159538;
    msg.hdop = 0.932812549492;
    msg.vdop = 0.875563585441;
    msg.hacc = 0.271204006859;
    msg.vacc = 0.359978021411;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.821887084509);
    msg.setSource(1522U);
    msg.setSourceEntity(217U);
    msg.setDestination(41725U);
    msg.setDestinationEntity(67U);
    msg.validity = 50747U;
    msg.type = 66U;
    msg.utc_year = 45239U;
    msg.utc_month = 15U;
    msg.utc_day = 222U;
    msg.utc_time = 0.272406993574;
    msg.lat = 0.973195378166;
    msg.lon = 0.803201190225;
    msg.height = 0.340711252129;
    msg.satellites = 204U;
    msg.cog = 0.586276745728;
    msg.sog = 0.0789727915081;
    msg.hdop = 0.893478340286;
    msg.vdop = 0.0692559028035;
    msg.hacc = 0.828919047583;
    msg.vacc = 0.576809839715;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.321953181114);
    msg.setSource(4826U);
    msg.setSourceEntity(106U);
    msg.setDestination(2782U);
    msg.setDestinationEntity(15U);
    msg.validity = 320U;
    msg.type = 239U;
    msg.utc_year = 52994U;
    msg.utc_month = 32U;
    msg.utc_day = 8U;
    msg.utc_time = 0.675757128099;
    msg.lat = 0.577746386915;
    msg.lon = 0.723165475708;
    msg.height = 0.976271170539;
    msg.satellites = 113U;
    msg.cog = 0.300182548053;
    msg.sog = 0.389842102272;
    msg.hdop = 0.672753341756;
    msg.vdop = 0.501716819577;
    msg.hacc = 0.74484307904;
    msg.vacc = 0.571917950201;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.56038397352);
    msg.setSource(26681U);
    msg.setSourceEntity(103U);
    msg.setDestination(7426U);
    msg.setDestinationEntity(215U);
    msg.time = 0.67373409833;
    msg.phi = 0.475101238058;
    msg.theta = 0.927867201343;
    msg.psi = 0.388548958256;
    msg.psi_magnetic = 0.741968118898;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.443044172247);
    msg.setSource(8064U);
    msg.setSourceEntity(233U);
    msg.setDestination(16916U);
    msg.setDestinationEntity(127U);
    msg.time = 0.316122989557;
    msg.phi = 0.0514760477412;
    msg.theta = 0.0212154828872;
    msg.psi = 0.594112216322;
    msg.psi_magnetic = 0.672282925098;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.738225713276);
    msg.setSource(41301U);
    msg.setSourceEntity(42U);
    msg.setDestination(24290U);
    msg.setDestinationEntity(98U);
    msg.time = 0.216665467146;
    msg.phi = 0.595809325076;
    msg.theta = 0.103825322025;
    msg.psi = 0.120801465732;
    msg.psi_magnetic = 0.437688234724;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.706989705716);
    msg.setSource(12208U);
    msg.setSourceEntity(116U);
    msg.setDestination(16193U);
    msg.setDestinationEntity(197U);
    msg.time = 0.338906201709;
    msg.x = 0.81887417524;
    msg.y = 0.749432078929;
    msg.z = 0.235717293637;
    msg.timestep = 0.559306356414;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.0719086906182);
    msg.setSource(16301U);
    msg.setSourceEntity(137U);
    msg.setDestination(2467U);
    msg.setDestinationEntity(124U);
    msg.time = 0.575470849546;
    msg.x = 0.751807491438;
    msg.y = 0.902126427426;
    msg.z = 0.989581752318;
    msg.timestep = 0.0874912094313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.213722901095);
    msg.setSource(20039U);
    msg.setSourceEntity(180U);
    msg.setDestination(52923U);
    msg.setDestinationEntity(44U);
    msg.time = 0.0755078519208;
    msg.x = 0.159590971625;
    msg.y = 0.312253554956;
    msg.z = 0.674135752502;
    msg.timestep = 0.80964732232;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.798437779155);
    msg.setSource(44438U);
    msg.setSourceEntity(177U);
    msg.setDestination(57244U);
    msg.setDestinationEntity(65U);
    msg.time = 0.647850545008;
    msg.x = 0.0773996121537;
    msg.y = 0.920138950734;
    msg.z = 0.651953852659;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.527896368547);
    msg.setSource(3587U);
    msg.setSourceEntity(144U);
    msg.setDestination(61743U);
    msg.setDestinationEntity(228U);
    msg.time = 0.0860255113824;
    msg.x = 0.0293199103815;
    msg.y = 0.570561799404;
    msg.z = 0.149086210263;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.972646197749);
    msg.setSource(23735U);
    msg.setSourceEntity(99U);
    msg.setDestination(3329U);
    msg.setDestinationEntity(57U);
    msg.time = 0.291637826143;
    msg.x = 0.583766653008;
    msg.y = 0.353700822648;
    msg.z = 0.171095774124;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.106372013599);
    msg.setSource(28868U);
    msg.setSourceEntity(148U);
    msg.setDestination(29637U);
    msg.setDestinationEntity(51U);
    msg.time = 0.0244604914043;
    msg.x = 0.498595891099;
    msg.y = 0.311784174661;
    msg.z = 0.102165157606;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.245789326781);
    msg.setSource(4485U);
    msg.setSourceEntity(29U);
    msg.setDestination(53423U);
    msg.setDestinationEntity(231U);
    msg.time = 0.39015842305;
    msg.x = 0.367246273429;
    msg.y = 0.595062281869;
    msg.z = 0.18023213667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.808500203794);
    msg.setSource(42811U);
    msg.setSourceEntity(40U);
    msg.setDestination(11085U);
    msg.setDestinationEntity(172U);
    msg.time = 0.653089161424;
    msg.x = 0.168310478318;
    msg.y = 0.610975859235;
    msg.z = 0.183623168278;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.393572547994);
    msg.setSource(5921U);
    msg.setSourceEntity(9U);
    msg.setDestination(14866U);
    msg.setDestinationEntity(235U);
    msg.time = 0.623313712175;
    msg.x = 0.0512038237995;
    msg.y = 0.64000116209;
    msg.z = 0.425083125876;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.617923236061);
    msg.setSource(16061U);
    msg.setSourceEntity(88U);
    msg.setDestination(41670U);
    msg.setDestinationEntity(116U);
    msg.time = 0.644031287542;
    msg.x = 0.266466172533;
    msg.y = 0.156729559663;
    msg.z = 0.605239699227;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.00274262750282);
    msg.setSource(3331U);
    msg.setSourceEntity(97U);
    msg.setDestination(50812U);
    msg.setDestinationEntity(202U);
    msg.time = 0.505085511339;
    msg.x = 0.159539845878;
    msg.y = 0.696837989057;
    msg.z = 0.461388202883;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.393017135615);
    msg.setSource(31447U);
    msg.setSourceEntity(226U);
    msg.setDestination(30978U);
    msg.setDestinationEntity(217U);
    msg.validity = 237U;
    msg.x = 0.215875393955;
    msg.y = 0.0694547976579;
    msg.z = 0.669107692368;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.191123395869);
    msg.setSource(5120U);
    msg.setSourceEntity(185U);
    msg.setDestination(7777U);
    msg.setDestinationEntity(35U);
    msg.validity = 6U;
    msg.x = 0.306727521276;
    msg.y = 0.646419303988;
    msg.z = 0.897299513797;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.315089528843);
    msg.setSource(56373U);
    msg.setSourceEntity(224U);
    msg.setDestination(7305U);
    msg.setDestinationEntity(184U);
    msg.validity = 199U;
    msg.x = 0.752860649931;
    msg.y = 0.118403872808;
    msg.z = 0.665611922775;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.452271785108);
    msg.setSource(27719U);
    msg.setSourceEntity(243U);
    msg.setDestination(47715U);
    msg.setDestinationEntity(159U);
    msg.validity = 23U;
    msg.x = 0.875049482233;
    msg.y = 0.230065061842;
    msg.z = 0.992023172469;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.137230988476);
    msg.setSource(4742U);
    msg.setSourceEntity(71U);
    msg.setDestination(18300U);
    msg.setDestinationEntity(224U);
    msg.validity = 25U;
    msg.x = 0.545294480311;
    msg.y = 0.884295216912;
    msg.z = 0.385498916781;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.472169258877);
    msg.setSource(32622U);
    msg.setSourceEntity(214U);
    msg.setDestination(16490U);
    msg.setDestinationEntity(86U);
    msg.validity = 183U;
    msg.x = 0.714752021043;
    msg.y = 0.193061433304;
    msg.z = 0.0229799443169;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.568698610112);
    msg.setSource(427U);
    msg.setSourceEntity(57U);
    msg.setDestination(8418U);
    msg.setDestinationEntity(4U);
    msg.time = 0.125852495595;
    msg.x = 0.292141461351;
    msg.y = 0.797077465128;
    msg.z = 0.169310490397;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.872433314829);
    msg.setSource(50175U);
    msg.setSourceEntity(149U);
    msg.setDestination(51385U);
    msg.setDestinationEntity(2U);
    msg.time = 0.0129196469079;
    msg.x = 0.16685307779;
    msg.y = 0.972833604357;
    msg.z = 0.732767585638;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.790726615225);
    msg.setSource(10259U);
    msg.setSourceEntity(85U);
    msg.setDestination(30483U);
    msg.setDestinationEntity(6U);
    msg.time = 0.477912206197;
    msg.x = 0.834500183344;
    msg.y = 0.541823621371;
    msg.z = 0.194766688062;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.11467234638);
    msg.setSource(352U);
    msg.setSourceEntity(166U);
    msg.setDestination(18886U);
    msg.setDestinationEntity(75U);
    msg.validity = 79U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0312729458407;
    tmp_msg_0.y = 0.283962087391;
    tmp_msg_0.z = 0.532166611575;
    tmp_msg_0.phi = 0.416604693012;
    tmp_msg_0.theta = 0.344363316141;
    tmp_msg_0.psi = 0.341430580703;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.818255333169;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.0342114094286);
    msg.setSource(47224U);
    msg.setSourceEntity(39U);
    msg.setDestination(2802U);
    msg.setDestinationEntity(55U);
    msg.validity = 231U;
    msg.value = 0.0540406365291;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.294427408874);
    msg.setSource(26246U);
    msg.setSourceEntity(178U);
    msg.setDestination(1355U);
    msg.setDestinationEntity(56U);
    msg.validity = 134U;
    msg.value = 0.610772020031;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.41540487814);
    msg.setSource(64886U);
    msg.setSourceEntity(54U);
    msg.setDestination(58275U);
    msg.setDestinationEntity(75U);
    msg.value = 0.203190774188;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.925986495254);
    msg.setSource(29555U);
    msg.setSourceEntity(112U);
    msg.setDestination(19168U);
    msg.setDestinationEntity(111U);
    msg.value = 0.577433280234;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.328725409966);
    msg.setSource(54154U);
    msg.setSourceEntity(102U);
    msg.setDestination(65006U);
    msg.setDestinationEntity(53U);
    msg.value = 0.222883271371;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.553580414254);
    msg.setSource(58019U);
    msg.setSourceEntity(11U);
    msg.setDestination(28924U);
    msg.setDestinationEntity(223U);
    msg.value = 0.211234356609;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.85726353988);
    msg.setSource(51838U);
    msg.setSourceEntity(230U);
    msg.setDestination(48615U);
    msg.setDestinationEntity(84U);
    msg.value = 0.100258046577;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.502545416594);
    msg.setSource(40464U);
    msg.setSourceEntity(49U);
    msg.setDestination(24183U);
    msg.setDestinationEntity(140U);
    msg.value = 0.737527963859;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.541557709493);
    msg.setSource(3997U);
    msg.setSourceEntity(206U);
    msg.setDestination(65508U);
    msg.setDestinationEntity(74U);
    msg.value = 0.427187877222;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.0233587797843);
    msg.setSource(26860U);
    msg.setSourceEntity(246U);
    msg.setDestination(24615U);
    msg.setDestinationEntity(205U);
    msg.value = 0.884185610957;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.642650481518);
    msg.setSource(15645U);
    msg.setSourceEntity(211U);
    msg.setDestination(60262U);
    msg.setDestinationEntity(222U);
    msg.value = 0.357309257767;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.968789463371);
    msg.setSource(42448U);
    msg.setSourceEntity(29U);
    msg.setDestination(47354U);
    msg.setDestinationEntity(48U);
    msg.value = 0.279684696995;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.661710488504);
    msg.setSource(50160U);
    msg.setSourceEntity(82U);
    msg.setDestination(64236U);
    msg.setDestinationEntity(247U);
    msg.value = 0.693603101732;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.496361072982);
    msg.setSource(27690U);
    msg.setSourceEntity(123U);
    msg.setDestination(32930U);
    msg.setDestinationEntity(68U);
    msg.value = 0.126037375036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.561850760929);
    msg.setSource(42048U);
    msg.setSourceEntity(238U);
    msg.setDestination(49239U);
    msg.setDestinationEntity(51U);
    msg.value = 0.301890896435;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.655995834091);
    msg.setSource(58366U);
    msg.setSourceEntity(3U);
    msg.setDestination(19654U);
    msg.setDestinationEntity(224U);
    msg.value = 0.855213901229;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.496941021502);
    msg.setSource(11304U);
    msg.setSourceEntity(85U);
    msg.setDestination(35647U);
    msg.setDestinationEntity(29U);
    msg.value = 0.737667196739;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.849636003809);
    msg.setSource(54108U);
    msg.setSourceEntity(29U);
    msg.setDestination(24630U);
    msg.setDestinationEntity(30U);
    msg.value = 0.23399297683;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.100571314984);
    msg.setSource(13117U);
    msg.setSourceEntity(60U);
    msg.setDestination(30709U);
    msg.setDestinationEntity(31U);
    msg.value = 0.476599411453;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.945553263046);
    msg.setSource(16651U);
    msg.setSourceEntity(65U);
    msg.setDestination(7439U);
    msg.setDestinationEntity(174U);
    msg.value = 0.0316911978008;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.433569166092);
    msg.setSource(45056U);
    msg.setSourceEntity(189U);
    msg.setDestination(56496U);
    msg.setDestinationEntity(96U);
    msg.value = 0.753404174076;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.862276075255);
    msg.setSource(19085U);
    msg.setSourceEntity(148U);
    msg.setDestination(26431U);
    msg.setDestinationEntity(98U);
    msg.value = 0.251670794319;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.236738182548);
    msg.setSource(60532U);
    msg.setSourceEntity(97U);
    msg.setDestination(6737U);
    msg.setDestinationEntity(50U);
    msg.value = 0.457534610461;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.938349341642);
    msg.setSource(7943U);
    msg.setSourceEntity(7U);
    msg.setDestination(1185U);
    msg.setDestinationEntity(182U);
    msg.value = 0.0465082219567;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.623120074838);
    msg.setSource(16275U);
    msg.setSourceEntity(224U);
    msg.setDestination(12725U);
    msg.setDestinationEntity(226U);
    msg.value = 0.268003211587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.6625051092);
    msg.setSource(64944U);
    msg.setSourceEntity(10U);
    msg.setDestination(20825U);
    msg.setDestinationEntity(225U);
    msg.value = 0.315897983874;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.0593225704678);
    msg.setSource(5498U);
    msg.setSourceEntity(225U);
    msg.setDestination(37642U);
    msg.setDestinationEntity(252U);
    msg.direction = 0.817428871545;
    msg.speed = 0.451288644894;
    msg.turbulence = 0.954069380439;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.275307399713);
    msg.setSource(24773U);
    msg.setSourceEntity(34U);
    msg.setDestination(31618U);
    msg.setDestinationEntity(229U);
    msg.direction = 0.408613355621;
    msg.speed = 0.369685679793;
    msg.turbulence = 0.0522643883588;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.885589204207);
    msg.setSource(9094U);
    msg.setSourceEntity(26U);
    msg.setDestination(25680U);
    msg.setDestinationEntity(137U);
    msg.direction = 0.851226834071;
    msg.speed = 0.477469990695;
    msg.turbulence = 0.994743070978;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.443194129298);
    msg.setSource(48096U);
    msg.setSourceEntity(61U);
    msg.setDestination(51267U);
    msg.setDestinationEntity(231U);
    msg.value = 0.526984384386;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.128214912568);
    msg.setSource(7225U);
    msg.setSourceEntity(252U);
    msg.setDestination(57257U);
    msg.setDestinationEntity(139U);
    msg.value = 0.0325154096351;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.655269590185);
    msg.setSource(46681U);
    msg.setSourceEntity(177U);
    msg.setDestination(1124U);
    msg.setDestinationEntity(221U);
    msg.value = 0.0380038082636;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.687095968851);
    msg.setSource(52234U);
    msg.setSourceEntity(38U);
    msg.setDestination(8828U);
    msg.setDestinationEntity(23U);
    msg.value.assign("ERUQNBJGOIQIAMWIEXLFLGVUENRJRHCMVYPSLAPLMFXYIXQWTDSPMUHGFJYKXOQORZBASZUCNFSUJLZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.449037166274);
    msg.setSource(54070U);
    msg.setSourceEntity(73U);
    msg.setDestination(29792U);
    msg.setDestinationEntity(33U);
    msg.value.assign("LJGPWIPQLWGMVAWYUZFWABSPKMGLQWLZRIXGXYXKSLXELIFSJA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.968219002926);
    msg.setSource(232U);
    msg.setSourceEntity(79U);
    msg.setDestination(30960U);
    msg.setDestinationEntity(200U);
    msg.value.assign("GBHABAIEHLMMAODEXXIRNGEKSAVMSHSVOUQSNPTVNHVRGWXBPQKZYEWAFDLJZYXWGFNQYTUPGVHIVHWDOLVXCKPYLAMZQEBPFAQWSELCTOMFTZMCNFGQUMIQIOKNUKBWCXDJWWZOIJJAEFPKCFRXLYNGCFEFRIORHLRUNBTYDOJQTBOPITVTNZHMMUJASXBUPDGUBJCWZRJMJDRD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.335913626588);
    msg.setSource(14111U);
    msg.setSourceEntity(130U);
    msg.setDestination(15473U);
    msg.setDestinationEntity(119U);
    const char tmp_msg_0[] = {-124, 62, 96, -13, -118, -23, 100, 111, 16, -71, -80, 38, 25, 8, 60, 82, -15, 42, 113, 112, -23, -114, 122, -51, 114, -96, 28, -108, 97, -74, 91, 99, -48, -43, -5, -40, 76, 85, 71, 19, 6, 70, 117, -118, -93, -74, 65, -47, -109, 66, -57, -47, 42, -114, -24, -10, 1, 26, 121, -98, -26, 123, 125, 125, -122, -34, 78, 101, 77, 47, 91, -90, -77, -24, -49, -49, -2, -10, 87, 57, -121, 18, -80, -71, 101, -85, -105, -38, -68, 119, 102, -31, -2, 112, -60, 57, -93, -24, -23, 110, 106, -62, -6, -89, -91, -18, 49, -8, -59, -83, 39, 36, 110, 32, 122, 8, -45, -110, 1, 17, 64, 72, 98, 68, 104, 87, 86, 12, -89, -18, -50, -50, 31, 89, 38, 20, 103, 86, -9, 89, 83, -61, 118, -55, 98, -48, 56, -67, -61, 75, 81, 95, 75, -20, -30, -62, 64, 113, 117, 15, -108, -110, 101, -109, -5, 17, -95, -49, -90, 126, 46, -121, 114, -110, 35, 36, 1, 36, -105, -72, -46, -115, -8, -114, 19, 18, 2, 65, -108, -28, -43, 101, -27, -80, -32, -57, 45, 122, 77, -105, -36, -85, -118, -17, -26, -14, 8, 55, -6, -31, -78, -115};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.143283257316);
    msg.setSource(49047U);
    msg.setSourceEntity(240U);
    msg.setDestination(58836U);
    msg.setDestinationEntity(61U);
    const char tmp_msg_0[] = {7, 54, 32, 13, 70, 10, -124, -58, -52, -33, -48, -8, 36, -20, -21, -17, -110, -94, 37, 77, -69, 45, -47, -73, -52, -81, 29, 86, -127, 35, 65, 50, 121, -47, -66, 92, 35, 91, -12, 62, -50, -25, -61, -96, -25, 99, 18, -95, -63, -112, 30, -106, 88, 39, -87, 75, 58, -37, 48, -38, 87, -8, 11, -75, 68, 64, 85, 108, -86, 118, 43, 48, 80, -11, -101, -27, -105, -17, -60, 58, -121, -91, 72, 42, -97, -90, -52, -37, 12, 16, 77, 86, 57, 126, 7, 82, 103, 1, -118, -100, -125, -82, -77, -19, 7, 117, -118, 16, 62, 68, -126, -76, 57, -124, -31, -71, 39, 119, 38, -94, 40, -52, -38, -20, 16, -111, -85, -11, -116, 7, 52, 85, 94, -17, 30, 39, -53, 80, -57, -102, -58, -39, 112, -31, 34, -107, -52, 49, 50, -108, 118, -10, 31, 107, 91, 91, 39, 97, 10, 38, -86, 118, -124, -109, 35, 2, -10, 117, -38, 67, 57, -93, -121, 7, 59, -114, 106, 57, 59, -27, -33, -78, -92, 81, -4, -11, 1, 67, -124, 42, -40, -12, 107, 112, 111, -75};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.743760161596);
    msg.setSource(1338U);
    msg.setSourceEntity(224U);
    msg.setDestination(43867U);
    msg.setDestinationEntity(46U);
    const char tmp_msg_0[] = {-52, -100, 28, -89, -61, -78, 29, 93, 101, -67, -93, -70, -45, 27, 47, 54, 11, -72, 123, -47, -78, 24, 102, -19, 126, 72, -74, 49, 41, -102, 89, -72, -64, -128, -15, -7, 113, 78, -41, 31, -111, -112, 114, -126, 105, 78, 86, -98, -108, -25, -24, -8, 104, 19, -89, -92, -29, 27, -126, -47, -115, 20, -115, -54, 77, -122, 85, 0, 30, 110, 11, -3, -30, 61, 74, -48, 33, -74, 21, 71, -115, 57, 36, 6, -120, -5, 20, 110, -27, 71, -40, 118, -2, -115, 15, 4, -111, 118, -99, 104, -69, -62, 39, -36, 124, 86, 36, 74, 82, -123, 33, 45, 96, -98, -109, 112, 33, 111, 94, -14, -19, -24, -43, 74, 51, 122, 103, -23, -8, 75, 78, -62, 6, -76, -122, -65, 94, 106, -59, -63, -11, 39, 47, -127, 110, 93, 102, -90, 97, 102, -47, -45, -125, -78, -100, -73, 0, 12, -32, 58, -41, 19, 103, 72, -32, -73, 89, 49, -72, 19, -75, 52, -44, 38, 115};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.840982513673);
    msg.setSource(49612U);
    msg.setSourceEntity(228U);
    msg.setDestination(41911U);
    msg.setDestinationEntity(0U);
    msg.type = 76U;
    msg.frequency = 2312178897U;
    msg.min_range = 14262U;
    msg.max_range = 63586U;
    msg.bits_per_point = 65U;
    msg.scale_factor = 0.166934505404;
    const char tmp_msg_0[] = {-120, -60, -90, 24, -81, 122, 14, 25, 110, -23, 126, -55, -47, 32, -7, 115, 54, -35, -87, -96, -113, -95, -26, -6, 61, -16, -116, -67, -48, 116, -39, -110, 72, 45, -27, -106, 108, -49, 55, -86, 110, -33, 46, 24, 70, -121, -75, -47, 14, 87, -112, -38, 73, 110, 114, -63, -5, -65, 23, -13, -55, -36, 99, 44, -38, 109, -53, -37, -55, -82, -79, 107, 76, -56, 54, -110, 38, -74, -22, 99, 122, 15, -30, -109, 67, -50, 89, 72, -27, -116, 36, 18, -107, -10, -106, 77, 38, 53, 23, 90, 6, 105, -79, 107, 45, 2, 25, -23, 31, 77, 77, 85, 21, 37, 58, 117, 75, 80, -82, -83, -3, -71, -102, -49, 104, -120, 11, -66, 71, -105, -92, -45, -7, -104, -23, -67, 109, 51, 33, 99, -62, 112, -29, -3, 80, -66, 34, 121, 109, -23, -11, 13, 78, 30, -33, 117, 2, 16, -36, -84, 21, 36, -108, 104, -8, -80, -42, -72, -53, -93, -72, -5, -91, 94, 4, 95, 86, -113, -71, 47, -75, -2, -79, -72, 60, 18, -70, 58, 3, -26, -95, -77, 93, -116, 95, -22, 76, 104, -17, 94, 120, 95, -20, -87, -32, -81, 67, -3, 57, -50};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.630382717844);
    msg.setSource(54419U);
    msg.setSourceEntity(232U);
    msg.setDestination(3578U);
    msg.setDestinationEntity(93U);
    msg.type = 171U;
    msg.frequency = 1146902155U;
    msg.min_range = 27845U;
    msg.max_range = 54827U;
    msg.bits_per_point = 86U;
    msg.scale_factor = 0.865816944744;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.063284556956;
    tmp_msg_0.beam_height = 0.101566998253;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-74, 126, 37, -32, -68, -65, 107, -45, 97, 125, -57, -10, -28, -128, -43, -101, 108, -26, 82, -22, -105, -29, 111, 56, -62, 31, -6, 103, 19, -108, -26, 81, 82, -128, 114, 44, -39, 106, 2, 100, -79, 6, 125, 9, -57, 89, 21, -53, 110, -22, 93, 67, 99, -1, 31, -101, 20, -41, 119, 120, 58, 12, -39, 77, 39, -69, 51, 15, -42, -3, -32, 25, -63, -124, -9, -91, -112, 118, -93, -107, 49, -19, -112, -124, -83, 31, -43, 83, -89, 28, -69, 75, -49, 23, 21, 5, 70, -18, 31, -51, -116, -117, -39, -66, 81, 91, -115, 68, 61, 40, -107, -38, 8, 76, -101, -63, -11, 10, -112, 103, 109, 9, -30, -26, 9, -123, -99, -7, -60, 111, 70, -79, 2, 6, -106, 94, -74, 5, 74, -112, 44, 87, -60, -58, -121, -93, -24, 80, -72, -26, -122, 14, -49, 3, 109, 14, -111, 64, 63, -104, 93, -122, 9, 81, 88, -59, -117, -22, 5, 56, 125, -115, 66, -98, 64, 99, 15, -7, 96, 98, -80, 95, -73, -83, 125, -87, -18, -58, -11, 56, -123, 43, 53, -12, -81, -67, -13, 49, 38, 51, 42, 83, -33, 3, -59, -89, -101, -13, -88, 97, -9, 51, -81, 111, -69, -40, -43, -23, 68, 1, 45, 87, -38, 93, 121, 65, -91, 125, -119, -120, -21};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.279272020041);
    msg.setSource(36143U);
    msg.setSourceEntity(65U);
    msg.setDestination(36731U);
    msg.setDestinationEntity(6U);
    msg.type = 7U;
    msg.frequency = 4093156958U;
    msg.min_range = 56622U;
    msg.max_range = 40847U;
    msg.bits_per_point = 146U;
    msg.scale_factor = 0.164115256494;
    const char tmp_msg_0[] = {51, -46, -7, 27, 0, 74, 79, 63, 104, 80, 120, 31, -66, -118, -58, 71, -59, 114, 21, 25, -100, -107, -113, 30, -73, -42, 46, 54, 53, -16, 25, 52, 97, 29, -124, 68, -58, 26, 70, 89, 45, 35, 69, -74, -28, -45, 27, -44, 25, 28, 48, 114, 124, 99, -103, -66, 40, -115, 39, -87, 56, -55, -106, 88, 121, 98, -24, -72, -72, 24, 106, 89, -112, -7, -65, 91, -5, 45, -56, 59, -122, 52, -92, -25, -96, -70, -99, 37, -101, -106, -24, -31, -46, 101, 79, -114, -108, -23, 39, 63, -8, -119, -37, 109, 34, -123, 12, 50, -92, 41, 13, -33, 79, -113, -61, 114, 113, -57, 70, -17, 103, -93, -72, 53, 25, -52, 63, 98, 28, -6, -72, 119, -61, 71, 99};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.244062174136);
    msg.setSource(2434U);
    msg.setSourceEntity(244U);
    msg.setDestination(53384U);
    msg.setDestinationEntity(123U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.765921273916);
    msg.setSource(46185U);
    msg.setSourceEntity(104U);
    msg.setDestination(7839U);
    msg.setDestinationEntity(234U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.973537278068);
    msg.setSource(26167U);
    msg.setSourceEntity(3U);
    msg.setDestination(20582U);
    msg.setDestinationEntity(2U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.144874330956);
    msg.setSource(52602U);
    msg.setSourceEntity(64U);
    msg.setDestination(16238U);
    msg.setDestinationEntity(79U);
    msg.op = 144U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.772058882007);
    msg.setSource(57530U);
    msg.setSourceEntity(50U);
    msg.setDestination(28297U);
    msg.setDestinationEntity(95U);
    msg.op = 37U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.228702210802);
    msg.setSource(62846U);
    msg.setSourceEntity(42U);
    msg.setDestination(62569U);
    msg.setDestinationEntity(57U);
    msg.op = 116U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.0615862479022);
    msg.setSource(9064U);
    msg.setSourceEntity(98U);
    msg.setDestination(183U);
    msg.setDestinationEntity(90U);
    msg.value = 0.879963681339;
    msg.confidence = 0.309621661459;
    msg.opmodes.assign("SUHFOMGQECERKQJATVUCMVJABFIVJCSOXSJISUOQKGETIYYNYKTLSWEHSQBZSTRUONWFWUBCJEMTBQBYKBKBZNDQJTTKOMFZGXLPEDATADMGMGUAVLLZZZKPHIUJQHGOCNPRZCRFUWEVQLVWXFMFHNXGWMGDKNVQWDHIODNEDCOXTPNPDASZIKILI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.949893233325);
    msg.setSource(39764U);
    msg.setSourceEntity(171U);
    msg.setDestination(21383U);
    msg.setDestinationEntity(93U);
    msg.value = 0.768954624126;
    msg.confidence = 0.795640022006;
    msg.opmodes.assign("SAKEBXZIFQDLJSSGSIGERTAILEYHMDVUWPGOTJMQLMQNDROIEFCBPOMCAGBDMAUKYZAHVKCTUVMFOALNHVRNPZIBDCRXWSROWXOQGPIDMYCFXSTKVIWZBXQIOEJHBKLAMNZYFYEIPXWCUORFYWXTJBDHPDXSVHNTJQHMCMUROCGQLBVYTSWPPSJCVTHURQJXZSOFKFRUWKEJGNTAFNQJLVUN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.595396961981);
    msg.setSource(27578U);
    msg.setSourceEntity(220U);
    msg.setDestination(60580U);
    msg.setDestinationEntity(184U);
    msg.value = 0.986905716975;
    msg.confidence = 0.613853225308;
    msg.opmodes.assign("YDVFHUGICAWLNXMVTDCURAJKHBVPECWFJLKQHJOVREEIYWQCSWZVFDSHAYSMSZPGSUOGPTSZJSEAQIKJJMNRCONO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.532696118319);
    msg.setSource(1628U);
    msg.setSourceEntity(152U);
    msg.setDestination(27151U);
    msg.setDestinationEntity(242U);
    msg.itow = 431652676U;
    msg.lat = 0.396917254445;
    msg.lon = 0.490800933941;
    msg.height_ell = 0.408132636461;
    msg.height_sea = 0.646566982933;
    msg.hacc = 0.552166747576;
    msg.vacc = 0.928494541389;
    msg.vel_n = 0.157615502282;
    msg.vel_e = 0.42145208891;
    msg.vel_d = 0.952420338802;
    msg.speed = 0.160634988836;
    msg.gspeed = 0.164800725701;
    msg.heading = 0.281023487754;
    msg.sacc = 0.61283724279;
    msg.cacc = 0.283255518766;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.883251884992);
    msg.setSource(55891U);
    msg.setSourceEntity(1U);
    msg.setDestination(63278U);
    msg.setDestinationEntity(136U);
    msg.itow = 3247748067U;
    msg.lat = 0.691798107526;
    msg.lon = 0.385203677186;
    msg.height_ell = 0.889549138239;
    msg.height_sea = 0.68760863009;
    msg.hacc = 0.802715681339;
    msg.vacc = 0.454440700402;
    msg.vel_n = 0.503966111729;
    msg.vel_e = 0.379811368935;
    msg.vel_d = 0.608569116793;
    msg.speed = 0.709129267582;
    msg.gspeed = 0.590291537159;
    msg.heading = 0.808927380721;
    msg.sacc = 0.84428873557;
    msg.cacc = 0.773778425513;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.945400863189);
    msg.setSource(59712U);
    msg.setSourceEntity(169U);
    msg.setDestination(19665U);
    msg.setDestinationEntity(171U);
    msg.itow = 3303135695U;
    msg.lat = 0.00177671232311;
    msg.lon = 0.897208770591;
    msg.height_ell = 0.131623726831;
    msg.height_sea = 0.999987003117;
    msg.hacc = 0.789736571213;
    msg.vacc = 0.80137508107;
    msg.vel_n = 0.389078285425;
    msg.vel_e = 0.347568930568;
    msg.vel_d = 0.100192020906;
    msg.speed = 0.404630807285;
    msg.gspeed = 0.428198851182;
    msg.heading = 0.378050159059;
    msg.sacc = 0.721773144569;
    msg.cacc = 0.546813253927;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.0788163540572);
    msg.setSource(55736U);
    msg.setSourceEntity(91U);
    msg.setDestination(61225U);
    msg.setDestinationEntity(111U);
    msg.id = 173U;
    msg.value = 0.508232434268;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.0241966176768);
    msg.setSource(42476U);
    msg.setSourceEntity(69U);
    msg.setDestination(60790U);
    msg.setDestinationEntity(159U);
    msg.id = 63U;
    msg.value = 0.826901270302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.867143673211);
    msg.setSource(27398U);
    msg.setSourceEntity(66U);
    msg.setDestination(29964U);
    msg.setDestinationEntity(109U);
    msg.id = 90U;
    msg.value = 0.414219127329;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.647514571164);
    msg.setSource(43215U);
    msg.setSourceEntity(101U);
    msg.setDestination(33211U);
    msg.setDestinationEntity(228U);
    msg.x = 0.270707543764;
    msg.y = 0.594708813643;
    msg.z = 0.497187915318;
    msg.phi = 0.99474929498;
    msg.theta = 0.108577779056;
    msg.psi = 0.311756634353;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.485432359612);
    msg.setSource(42754U);
    msg.setSourceEntity(219U);
    msg.setDestination(25591U);
    msg.setDestinationEntity(225U);
    msg.x = 0.686546412716;
    msg.y = 0.10229954089;
    msg.z = 0.0448156900765;
    msg.phi = 0.403851562555;
    msg.theta = 0.248134689276;
    msg.psi = 0.968224013225;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.122396242351);
    msg.setSource(47394U);
    msg.setSourceEntity(220U);
    msg.setDestination(2252U);
    msg.setDestinationEntity(17U);
    msg.x = 0.388386796239;
    msg.y = 0.859466339312;
    msg.z = 0.0627709534349;
    msg.phi = 0.215435291817;
    msg.theta = 0.33678580849;
    msg.psi = 0.429492247949;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.898964809419);
    msg.setSource(25435U);
    msg.setSourceEntity(47U);
    msg.setDestination(21142U);
    msg.setDestinationEntity(32U);
    msg.beam_width = 0.580588178986;
    msg.beam_height = 0.0827957562888;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.501697693125);
    msg.setSource(44242U);
    msg.setSourceEntity(237U);
    msg.setDestination(63083U);
    msg.setDestinationEntity(42U);
    msg.beam_width = 0.887328337001;
    msg.beam_height = 0.058945989637;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.736444086097);
    msg.setSource(40917U);
    msg.setSourceEntity(42U);
    msg.setDestination(10686U);
    msg.setDestinationEntity(135U);
    msg.beam_width = 0.383688936506;
    msg.beam_height = 0.817467644582;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.540652039891);
    msg.setSource(14234U);
    msg.setSourceEntity(85U);
    msg.setDestination(3170U);
    msg.setDestinationEntity(35U);
    msg.sane = 237U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.613009068081);
    msg.setSource(36460U);
    msg.setSourceEntity(146U);
    msg.setDestination(48537U);
    msg.setDestinationEntity(126U);
    msg.sane = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.341625401473);
    msg.setSource(48019U);
    msg.setSourceEntity(179U);
    msg.setDestination(56822U);
    msg.setDestinationEntity(9U);
    msg.sane = 242U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.102184179973);
    msg.setSource(25493U);
    msg.setSourceEntity(16U);
    msg.setDestination(22805U);
    msg.setDestinationEntity(114U);
    msg.value = 0.24290657299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.248679381263);
    msg.setSource(11987U);
    msg.setSourceEntity(191U);
    msg.setDestination(55608U);
    msg.setDestinationEntity(45U);
    msg.value = 0.55458944003;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.762355341552);
    msg.setSource(35947U);
    msg.setSourceEntity(26U);
    msg.setDestination(22758U);
    msg.setDestinationEntity(19U);
    msg.value = 0.932421845983;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.574670729765);
    msg.setSource(54566U);
    msg.setSourceEntity(115U);
    msg.setDestination(26582U);
    msg.setDestinationEntity(75U);
    msg.value = 0.412953146146;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.870184155768);
    msg.setSource(29581U);
    msg.setSourceEntity(192U);
    msg.setDestination(62935U);
    msg.setDestinationEntity(176U);
    msg.value = 0.0375038343373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.840450253195);
    msg.setSource(10642U);
    msg.setSourceEntity(189U);
    msg.setDestination(32143U);
    msg.setDestinationEntity(102U);
    msg.value = 0.194130636629;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.771079913577);
    msg.setSource(61453U);
    msg.setSourceEntity(116U);
    msg.setDestination(18134U);
    msg.setDestinationEntity(106U);
    msg.value = 0.0188943280678;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.358879191914);
    msg.setSource(9204U);
    msg.setSourceEntity(203U);
    msg.setDestination(60362U);
    msg.setDestinationEntity(99U);
    msg.value = 0.809386734169;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.36552903678);
    msg.setSource(39015U);
    msg.setSourceEntity(33U);
    msg.setDestination(64242U);
    msg.setDestinationEntity(240U);
    msg.value = 0.297497319285;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.751510577556);
    msg.setSource(14365U);
    msg.setSourceEntity(180U);
    msg.setDestination(27037U);
    msg.setDestinationEntity(109U);
    msg.value = 0.236823291896;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.759021055852);
    msg.setSource(39390U);
    msg.setSourceEntity(243U);
    msg.setDestination(24761U);
    msg.setDestinationEntity(85U);
    msg.value = 0.334124348011;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.0676363332089);
    msg.setSource(29462U);
    msg.setSourceEntity(177U);
    msg.setDestination(26630U);
    msg.setDestinationEntity(57U);
    msg.value = 0.164682999041;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.753273907559);
    msg.setSource(61773U);
    msg.setSourceEntity(221U);
    msg.setDestination(35417U);
    msg.setDestinationEntity(37U);
    msg.value = 0.707596047921;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.672736137177);
    msg.setSource(50318U);
    msg.setSourceEntity(202U);
    msg.setDestination(30841U);
    msg.setDestinationEntity(195U);
    msg.value = 0.336935002066;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.100804181665);
    msg.setSource(28078U);
    msg.setSourceEntity(112U);
    msg.setDestination(7426U);
    msg.setDestinationEntity(104U);
    msg.value = 0.698637243159;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.918721824798);
    msg.setSource(25611U);
    msg.setSourceEntity(182U);
    msg.setDestination(58660U);
    msg.setDestinationEntity(172U);
    msg.id = 55U;
    msg.zoom = 237U;
    msg.action = 80U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.0321368672172);
    msg.setSource(21437U);
    msg.setSourceEntity(63U);
    msg.setDestination(62926U);
    msg.setDestinationEntity(52U);
    msg.id = 201U;
    msg.zoom = 86U;
    msg.action = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.096932748089);
    msg.setSource(16100U);
    msg.setSourceEntity(37U);
    msg.setDestination(39721U);
    msg.setDestinationEntity(222U);
    msg.id = 148U;
    msg.zoom = 232U;
    msg.action = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.433080963275);
    msg.setSource(54708U);
    msg.setSourceEntity(248U);
    msg.setDestination(12670U);
    msg.setDestinationEntity(57U);
    msg.id = 123U;
    msg.value = 0.875518088147;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.624197815296);
    msg.setSource(23476U);
    msg.setSourceEntity(75U);
    msg.setDestination(47837U);
    msg.setDestinationEntity(132U);
    msg.id = 117U;
    msg.value = 0.567573049637;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.969918780733);
    msg.setSource(65319U);
    msg.setSourceEntity(243U);
    msg.setDestination(58276U);
    msg.setDestinationEntity(100U);
    msg.id = 99U;
    msg.value = 0.646515681072;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.061186774069);
    msg.setSource(6062U);
    msg.setSourceEntity(152U);
    msg.setDestination(42431U);
    msg.setDestinationEntity(77U);
    msg.id = 244U;
    msg.value = 0.663248001891;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.933038260188);
    msg.setSource(36943U);
    msg.setSourceEntity(110U);
    msg.setDestination(26015U);
    msg.setDestinationEntity(51U);
    msg.id = 157U;
    msg.value = 0.184709216884;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.437768777004);
    msg.setSource(19110U);
    msg.setSourceEntity(146U);
    msg.setDestination(14558U);
    msg.setDestinationEntity(83U);
    msg.id = 163U;
    msg.value = 0.649944490668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.165369328929);
    msg.setSource(33262U);
    msg.setSourceEntity(123U);
    msg.setDestination(41972U);
    msg.setDestinationEntity(46U);
    msg.id = 222U;
    msg.angle = 0.349927306876;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.578757848099);
    msg.setSource(32229U);
    msg.setSourceEntity(169U);
    msg.setDestination(45573U);
    msg.setDestinationEntity(129U);
    msg.id = 169U;
    msg.angle = 0.502620860172;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.02952120181);
    msg.setSource(60082U);
    msg.setSourceEntity(54U);
    msg.setDestination(30949U);
    msg.setDestinationEntity(65U);
    msg.id = 101U;
    msg.angle = 0.52652373109;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.0484606247134);
    msg.setSource(11145U);
    msg.setSourceEntity(238U);
    msg.setDestination(29582U);
    msg.setDestinationEntity(129U);
    msg.op = 105U;
    msg.actions.assign("OJZCAMPQHAGKVVANLYWWBSYZLMSJZCDQTIYFGEUZRPOIGFSKRCNNCEVIEQNEMRWHBDNYCJXQMXFMJBBYSJWLTPKIMFSJLVVQLFEFKNH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.54982871392);
    msg.setSource(60915U);
    msg.setSourceEntity(128U);
    msg.setDestination(25890U);
    msg.setDestinationEntity(95U);
    msg.op = 233U;
    msg.actions.assign("CUMNXOCEXDVNRRARHQHZJSQVBOPPQXGNKCURICRPIWYKQFPWUAEDMEHYDKFMYNSBBSGHNFGUMYLMXZMGJIHSDVNGPBCATOLUEZKXFTJGDXQSFJASZDBWCFODRAPPZTEBUVCOBJLMZJWLJVGHGIVXOYNYOJZIKZIHMTRFIEBRDKSSZTLZWLEXYIPLCDKJCVKNSXPVYWMFKLOWIEEQUBYRUHTWLJXTBOTHACQVRAWADSNAOTTEMGVFUKQWA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.787241143379);
    msg.setSource(64134U);
    msg.setSourceEntity(130U);
    msg.setDestination(51784U);
    msg.setDestinationEntity(159U);
    msg.op = 144U;
    msg.actions.assign("FPNNJBQWMLABDZKUHSMKNXGAXKKOVERLENPEVFTYDZSSCJSRZSUIYFZOOULSJABGUSIXDFJBOLOVFZGDCDIROHLBPXTIE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.818406571579);
    msg.setSource(65474U);
    msg.setSourceEntity(169U);
    msg.setDestination(47381U);
    msg.setDestinationEntity(248U);
    msg.actions.assign("OFXYUISDGKNU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.318247971488);
    msg.setSource(15059U);
    msg.setSourceEntity(249U);
    msg.setDestination(11657U);
    msg.setDestinationEntity(9U);
    msg.actions.assign("IDZTRHHZLAZIKWDGACBLQVDMHGRFRSYOLDVQEIPKSSTYMCTVAJEKOLBOIMPGZRAFXYMXVENCAEKLZOYEEVVDRELGJXYPNXHADKVYPUBSXUVODXUEBCTBLUQFSTOIHTZDRQUGJOMCUDLMZWMEK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.578359100114);
    msg.setSource(15932U);
    msg.setSourceEntity(98U);
    msg.setDestination(52779U);
    msg.setDestinationEntity(134U);
    msg.actions.assign("LJNZRGHMHVLQSPSGEPWYHRMBIICORUBXQSLAEVKIGCDIDVIIRYKADNOTRRBZBCIFNNEJQQIRAFOZXALAEKYZGBVWPKPUYPWZDGOTYWADSQOMNKETBALBPPFSQXXCSMNNSQQGXTETFOBYEDKRUOLJCBRQYJECFCWQYHDSWJGKHSUHTDDYMVPHPLWLPSOOZVTVZUOUZXDVIFNVCCJFEXCUWGMHFMATMFKKARGHLKZITXJJTJMUBGAWXZWNVHE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.639263748844);
    msg.setSource(43550U);
    msg.setSourceEntity(142U);
    msg.setDestination(4488U);
    msg.setDestinationEntity(123U);
    msg.button = 51U;
    msg.value = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.792968269238);
    msg.setSource(34230U);
    msg.setSourceEntity(58U);
    msg.setDestination(51888U);
    msg.setDestinationEntity(104U);
    msg.button = 85U;
    msg.value = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.602569668194);
    msg.setSource(38935U);
    msg.setSourceEntity(81U);
    msg.setDestination(32099U);
    msg.setDestinationEntity(169U);
    msg.button = 194U;
    msg.value = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.857840570357);
    msg.setSource(47197U);
    msg.setSourceEntity(13U);
    msg.setDestination(4924U);
    msg.setDestinationEntity(247U);
    msg.op = 171U;
    msg.text.assign("OOMNXXQBWECRCSZJCDOSFFHUCFUVPBFUSGLRJHCEBLRWGZWZWGNZRLEMUTFEHBVYOJINVQJXRCGHMUYSRXQPKXJTKIJLIAXAYRXDUABMEGQQDZCCDBJJCGKFTTFUDOKAPXFMOAKIWNVZFTVXJMYHMAYEAZKIPDNIZRVPWQPKBHYYHQCPLVAOSTUTEWX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.778425346022);
    msg.setSource(40617U);
    msg.setSourceEntity(15U);
    msg.setDestination(53715U);
    msg.setDestinationEntity(6U);
    msg.op = 223U;
    msg.text.assign("DJVURCEIYBMPIMCUYALXSTEMYQOAWCIZOMDUMWUSZTYQPYROSVRBZKJPGINMZPOISFLFHDEKYTVTXXRFYYAPBAFCJNETPRBBXMZHSQQDCIHGIJNEDKAWLVZKFVDLQLUMNJOPNZESXXHFOIDGLQHSXEWU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.661672164229);
    msg.setSource(49806U);
    msg.setSourceEntity(169U);
    msg.setDestination(7227U);
    msg.setDestinationEntity(40U);
    msg.op = 196U;
    msg.text.assign("IXDPOSTHAQDGZXJNCWTTIGNVXBIAFGNFGZKVGWCWQOTWBUIOLUYCEFGWMHNRMQVLOMOYMPFFKZPUBSBIFYKYDZKZVASCFABMHWEFQLWLXEGZHANTCLLNRSSQBRPAGFVAVUKDEBXKQSDEVJXZSWJUVDEYRIBLMRJCETENAHNHKPQALSQJIBYBXJOTXPOSDICPRMHPKVMQTPHETJDJLDCORUOI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.274132679953);
    msg.setSource(37068U);
    msg.setSourceEntity(94U);
    msg.setDestination(63072U);
    msg.setDestinationEntity(174U);
    msg.op = 77U;
    msg.time_remain = 0.806913229046;
    msg.sched_time = 0.416084045685;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.310269720023);
    msg.setSource(22602U);
    msg.setSourceEntity(4U);
    msg.setDestination(52054U);
    msg.setDestinationEntity(4U);
    msg.op = 7U;
    msg.time_remain = 0.112474014416;
    msg.sched_time = 0.226214221384;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.178667781393);
    msg.setSource(61470U);
    msg.setSourceEntity(17U);
    msg.setDestination(34953U);
    msg.setDestinationEntity(220U);
    msg.op = 196U;
    msg.time_remain = 0.437455610751;
    msg.sched_time = 0.956149173215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.134653980585);
    msg.setSource(54505U);
    msg.setSourceEntity(206U);
    msg.setDestination(31709U);
    msg.setDestinationEntity(176U);
    msg.name.assign("MOQETAGHRMDVPGINSFTWSYLDIVXLYJRNUSYHUTOPFOTZYRCIQLPOTKQCFQRFDWUABLJAKRKYNPPDVHKCYEOCGAAXMZWRQVRRPNDLONFAMFWYVYBXGMIAWYUZQDLJBOLEHSQZKTSEIXWJQEHJGYPHSXRUEJBDTVGIUWFNCANPBUCNOAHTCHWVLIJUVZDIMMRNCKJEZHMPMSBCKCFSDIBKUZZXPQOFKOBXMJ");
    msg.op = 170U;
    msg.sched_time = 0.251117964434;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.336389908068);
    msg.setSource(46301U);
    msg.setSourceEntity(61U);
    msg.setDestination(4737U);
    msg.setDestinationEntity(160U);
    msg.name.assign("LYSXSWGKSABFBBURYUIPCZPEQIIDIUVQLMYTUOQVQRLOSJBYRHZUTGYCUJKSRTXNOSPKFTJBJJCWOGAQEIBWFSHDLXKMHENIXUBPMMXVRAVMKDDWUGEVKMMBHKIODRYRFZMQWBHULVDOHMNTLTZAZCHIWOGLJNBDSFVNDXEEPUTFAAJYGFVNNQVQ");
    msg.op = 89U;
    msg.sched_time = 0.901155730756;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.307617594338);
    msg.setSource(48709U);
    msg.setSourceEntity(35U);
    msg.setDestination(10088U);
    msg.setDestinationEntity(55U);
    msg.name.assign("RWMYXSERSUIZHQQWGMSKIEVNZQFEEDSLXBNUMXDVKLRYKLDMGUKFYPHYTUDKQXVMHFTPAIWHNACSPYICCLFGVVBPZULQAVPXWUKEOGSYAVLBETFDOJAYXKCGDKMZKZNLTBHECIANOVHTPICNOUUJSCHOYXDRITNQFRZSHJHAOBAROFLJFWRZNPCQZJWWXBFADZJPTGDRXAEQWMCOJZBMWTEPISRTFQTYBGHMGNDYVOPUJMWXJCJIEUNQORGGV");
    msg.op = 226U;
    msg.sched_time = 0.70968596554;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.889259682652);
    msg.setSource(1758U);
    msg.setSourceEntity(107U);
    msg.setDestination(50173U);
    msg.setDestinationEntity(68U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.37341274469);
    msg.setSource(11336U);
    msg.setSourceEntity(123U);
    msg.setDestination(64094U);
    msg.setDestinationEntity(238U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.314908349971);
    msg.setSource(6818U);
    msg.setSourceEntity(68U);
    msg.setDestination(17666U);
    msg.setDestinationEntity(137U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.972994362993);
    msg.setSource(26895U);
    msg.setSourceEntity(207U);
    msg.setDestination(25110U);
    msg.setDestinationEntity(218U);
    msg.name.assign("ABVGAGWOJLCGEFWTYQGLWVNWFTFPYJSLSIYAKVZYMZIHALPYXYFBRPOGNRUBSEDSXVEXVKSQTPDEARQDRINGKXCUHJHTQFEBWMKXAJPTVCUEJSLRMMXCWOWBOUVNPMQVDWKHQATYFPIJMKZZEHWNCRDIPQFVSFDLUHZUOTJMDCCJKBJUSZKNPQTLOSINAZRZGXHAVMRGOXNUZUTCMDFSBUBIMEIPGGFQKAWDBKYBOECXTIERXHDHNLL");
    msg.state = 109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.914119145245);
    msg.setSource(52101U);
    msg.setSourceEntity(181U);
    msg.setDestination(62785U);
    msg.setDestinationEntity(65U);
    msg.name.assign("FWMQENFHFPAGUJCPKEKPWVSBZPVMQGOXFLVYEYDNIXOBPTHSQAFFSKALXSUPRQGILDURYWQVINJIKTYFNIGJLIHZG");
    msg.state = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.470300483786);
    msg.setSource(27934U);
    msg.setSourceEntity(59U);
    msg.setDestination(53558U);
    msg.setDestinationEntity(183U);
    msg.name.assign("AWYDHEJDMRTXQXFPRLZLQLCYIUWUVKXZGTBGSYGJRIMJUZVUQKTLXELBBEIASZOWSQCXALBEOOATTIGMRTRPKEWOCEYIXHKLMPLWHAMFFHEVFPGAVQOQZNRHPDCQUDFMGHFXVVUDKTKOVBDXEOGPYKDBVXGASNSS");
    msg.state = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.656958596135);
    msg.setSource(32688U);
    msg.setSourceEntity(106U);
    msg.setDestination(12809U);
    msg.setDestinationEntity(94U);
    msg.name.assign("CTEKMWMUXHYARRPOKROUJEIPRMZVYPWBWVADLLYYRJAQQTAULGTWAFLCPZODZNLMXINBZEYFVWNEFISKCFTKKUPXNTRIAXGWSIDZAJKBRVPTBGFFWUYTDPWKCOPARPBQFJKQT");
    msg.value = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.806200106929);
    msg.setSource(9302U);
    msg.setSourceEntity(183U);
    msg.setDestination(19842U);
    msg.setDestinationEntity(253U);
    msg.name.assign("NTXXUHWGNHUYOLHDBJVNFVGVJSKFTFMSYUPZQLAAQBSXUWHMUYCSOIIESXYNCMXIXKVDSWBEGUPBLRFSVPPJGZSTVCTNYGBQFZTOZOOWQFEQYMMHVSEAHFZTCJDRYHJVIOFGTBUPRNPHTWCRYMJMHHGINKQLCVABCJIODLUKAPMXARSGYRDZWIJEDQTYWERBKLCCORAXZDIMKLRVF");
    msg.value = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.049026564067);
    msg.setSource(59739U);
    msg.setSourceEntity(67U);
    msg.setDestination(10348U);
    msg.setDestinationEntity(204U);
    msg.name.assign("TVWNBRORNQNXMGWDFIMWDJDOWCOTFBZGNJELFBVJAIHMFAVHXEINELXKWUSMCVBHIOMKLPNZRAEUSTKKHGDUMHPOQWRWHKCFEXXYRGQUYSSZNBGRK");
    msg.value = 9U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.0535149434618);
    msg.setSource(64943U);
    msg.setSourceEntity(173U);
    msg.setDestination(5242U);
    msg.setDestinationEntity(146U);
    msg.name.assign("FDFPOQBQANJUJHUSZIRMSWZQEGXPOGGRBZLGEUTEGHTSHTUBOLPJGLXKPLPYNQNAQGRRZAODWXSIXIIBXJVCPOITSYMGOEYTLZPDGYWXKAKZNHIBQFDWWBCNDECTKZOWEVIXAADVJEBPKWYQCVBBVWUIEPQVYZXMFVCPIJWNTCMLCCFOMANFYNHQHVWHILOJUXNYCTRBCQKUYYFLSUDKEMHMKDFSZJOTHSAE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.189273898189);
    msg.setSource(9998U);
    msg.setSourceEntity(125U);
    msg.setDestination(29294U);
    msg.setDestinationEntity(170U);
    msg.name.assign("MNWRZWITOESPFVTNYOGHCWJEDPABVRAUWBSHPZXKMXLWZJBWGKQMAQOHMUYLFKIWAVRHIZWNOFIRUQYDDEMHIMNBOIZFRAVNNBNEUSYUDFBTUFCCFCEHLXQBQMOFZTXCCXDVHYILKCPUAZWTPVQXQQIXUZPOEGDGXPYGJNYPUGNTXQSVLSPJYJCDJTEDDTRMKRKKJHORGLCAYLIVGTHKAIKBFABFSORJUOGNZEXSQRTLAM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.502532589926);
    msg.setSource(36601U);
    msg.setSourceEntity(150U);
    msg.setDestination(51234U);
    msg.setDestinationEntity(114U);
    msg.name.assign("KSXYPTXZJLQAZPKYDLRGEVUFQFGNXLWIQXTUANKTSDHMNPJSFOJVDFRBIETMHDRBWMKJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.877449846278);
    msg.setSource(6755U);
    msg.setSourceEntity(242U);
    msg.setDestination(15971U);
    msg.setDestinationEntity(222U);
    msg.name.assign("ETPCUNUOCZXKYAEMYXRFLJLARATHSDKLQYLAHEKYFZQTLAKHUOKHBHLENLXYFZIMRXVNCVQMDKOWUIWBWVYZDPOWPCDVSRYWJCJVRBSQAOSJUTLRBIENPRUXIXQOILHOUSHUVJUZPZDFZNGTJIISNCWVPSDNBZQFTFFDKKTHBBIT");
    msg.value = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.873145087679);
    msg.setSource(18361U);
    msg.setSourceEntity(40U);
    msg.setDestination(42623U);
    msg.setDestinationEntity(171U);
    msg.name.assign("TEDRCZGENMLXOZVNGIQIXKMWVAXYXCHJDQPVZBUFUBFW");
    msg.value = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.414749581577);
    msg.setSource(28961U);
    msg.setSourceEntity(143U);
    msg.setDestination(14286U);
    msg.setDestinationEntity(125U);
    msg.name.assign("JFKWZIWSRCYEXWQLUNEAXGUFDQZKYJHUIWFLJMDBOETJKZGUSYNXTNOFFVDIRTUYZPVHGTLRIGQBJOEGICPBLFFQNTKYPLIXDMEIVBYZCCSGJZCIUFZNGMRYUPRHTMHNMJOGKZPXFPNZEQODKUEHBQCAWYJXAONCKMVDSXABFICQQTVYROABSEZVLRWLPDS");
    msg.value = 130U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.5191436207);
    msg.setSource(60891U);
    msg.setSourceEntity(68U);
    msg.setDestination(8494U);
    msg.setDestinationEntity(133U);
    msg.id = 98U;
    msg.period = 736155591U;
    msg.duty_cycle = 1130381051U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.209046170884);
    msg.setSource(48144U);
    msg.setSourceEntity(102U);
    msg.setDestination(53329U);
    msg.setDestinationEntity(72U);
    msg.id = 4U;
    msg.period = 2637656902U;
    msg.duty_cycle = 1182249688U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.294743382092);
    msg.setSource(52102U);
    msg.setSourceEntity(36U);
    msg.setDestination(51089U);
    msg.setDestinationEntity(253U);
    msg.id = 205U;
    msg.period = 2107026748U;
    msg.duty_cycle = 2691302000U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.403220472639);
    msg.setSource(24565U);
    msg.setSourceEntity(160U);
    msg.setDestination(45981U);
    msg.setDestinationEntity(162U);
    msg.id = 92U;
    msg.period = 4268048442U;
    msg.duty_cycle = 205988077U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.0790062792195);
    msg.setSource(3471U);
    msg.setSourceEntity(4U);
    msg.setDestination(33453U);
    msg.setDestinationEntity(122U);
    msg.id = 138U;
    msg.period = 708029381U;
    msg.duty_cycle = 2900432469U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.49259945981);
    msg.setSource(5276U);
    msg.setSourceEntity(200U);
    msg.setDestination(2553U);
    msg.setDestinationEntity(51U);
    msg.id = 81U;
    msg.period = 2407588693U;
    msg.duty_cycle = 1446668699U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.869890899217);
    msg.setSource(24624U);
    msg.setSourceEntity(170U);
    msg.setDestination(31894U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.349867013761;
    msg.lon = 0.0693429420047;
    msg.height = 0.499775028778;
    msg.x = 0.358065936971;
    msg.y = 0.367423589155;
    msg.z = 0.431999547667;
    msg.phi = 0.856308035332;
    msg.theta = 0.990313349013;
    msg.psi = 0.176349483179;
    msg.u = 0.820620760026;
    msg.v = 0.73157571;
    msg.w = 0.228304383527;
    msg.vx = 0.885876767034;
    msg.vy = 0.515977989799;
    msg.vz = 0.723985735414;
    msg.p = 0.912232687018;
    msg.q = 0.438630317131;
    msg.r = 0.383797013469;
    msg.depth = 0.68098203631;
    msg.alt = 0.815817556248;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.51927139854);
    msg.setSource(43335U);
    msg.setSourceEntity(253U);
    msg.setDestination(57911U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.426393632427;
    msg.lon = 0.445295323474;
    msg.height = 0.64145851354;
    msg.x = 0.937841461889;
    msg.y = 0.10241678271;
    msg.z = 0.397854547047;
    msg.phi = 0.426868613845;
    msg.theta = 0.900466519261;
    msg.psi = 0.590693163417;
    msg.u = 0.644262245218;
    msg.v = 0.901659573933;
    msg.w = 0.33521853386;
    msg.vx = 0.326261518008;
    msg.vy = 0.847221352794;
    msg.vz = 0.741940849995;
    msg.p = 0.334549188247;
    msg.q = 0.0866333817385;
    msg.r = 0.565883959308;
    msg.depth = 0.0481677291524;
    msg.alt = 0.653278726111;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.543435619787);
    msg.setSource(21692U);
    msg.setSourceEntity(173U);
    msg.setDestination(17775U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.747980339975;
    msg.lon = 0.694929209;
    msg.height = 0.91249939987;
    msg.x = 0.0590790150339;
    msg.y = 0.75559828035;
    msg.z = 0.635930943636;
    msg.phi = 0.0975658922662;
    msg.theta = 0.599486824825;
    msg.psi = 0.309384819048;
    msg.u = 0.861157497554;
    msg.v = 0.673158296946;
    msg.w = 0.989760137019;
    msg.vx = 0.523722819582;
    msg.vy = 0.876525709582;
    msg.vz = 0.270114303722;
    msg.p = 0.356646835063;
    msg.q = 0.765250357109;
    msg.r = 0.897938838427;
    msg.depth = 0.561602419018;
    msg.alt = 0.649161068237;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.875650984571);
    msg.setSource(19072U);
    msg.setSourceEntity(53U);
    msg.setDestination(32050U);
    msg.setDestinationEntity(142U);
    msg.x = 0.198788540014;
    msg.y = 0.956625196506;
    msg.z = 0.400196239345;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.675585653404);
    msg.setSource(34036U);
    msg.setSourceEntity(151U);
    msg.setDestination(20080U);
    msg.setDestinationEntity(120U);
    msg.x = 0.606644223745;
    msg.y = 0.11200176976;
    msg.z = 0.142743385883;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.0787841859931);
    msg.setSource(48513U);
    msg.setSourceEntity(113U);
    msg.setDestination(54801U);
    msg.setDestinationEntity(147U);
    msg.x = 0.442615543404;
    msg.y = 0.0105682821457;
    msg.z = 0.932715397662;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.763800761665);
    msg.setSource(8954U);
    msg.setSourceEntity(139U);
    msg.setDestination(26703U);
    msg.setDestinationEntity(38U);
    msg.value = 0.786519845237;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.629014765701);
    msg.setSource(52868U);
    msg.setSourceEntity(193U);
    msg.setDestination(12903U);
    msg.setDestinationEntity(189U);
    msg.value = 0.818664420652;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.045127364237);
    msg.setSource(60048U);
    msg.setSourceEntity(52U);
    msg.setDestination(13630U);
    msg.setDestinationEntity(67U);
    msg.value = 0.760186306643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.158864137159);
    msg.setSource(16635U);
    msg.setSourceEntity(99U);
    msg.setDestination(42758U);
    msg.setDestinationEntity(71U);
    msg.value = 0.124123414829;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.126194675981);
    msg.setSource(5985U);
    msg.setSourceEntity(102U);
    msg.setDestination(52516U);
    msg.setDestinationEntity(124U);
    msg.value = 0.217928435487;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.777337498554);
    msg.setSource(38577U);
    msg.setSourceEntity(12U);
    msg.setDestination(23223U);
    msg.setDestinationEntity(93U);
    msg.value = 0.740726368323;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.600663749655);
    msg.setSource(21820U);
    msg.setSourceEntity(31U);
    msg.setDestination(11970U);
    msg.setDestinationEntity(242U);
    msg.x = 0.910641578662;
    msg.y = 0.59844324706;
    msg.z = 0.669131368861;
    msg.phi = 0.329585217767;
    msg.theta = 0.320137872391;
    msg.psi = 0.193332425923;
    msg.p = 0.283629138359;
    msg.q = 0.151655645291;
    msg.r = 0.60230214681;
    msg.u = 0.924763387364;
    msg.v = 0.0592710644643;
    msg.w = 0.866136946762;
    msg.bias_psi = 0.0188875848023;
    msg.bias_r = 0.1510809981;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.581598317355);
    msg.setSource(3739U);
    msg.setSourceEntity(188U);
    msg.setDestination(32120U);
    msg.setDestinationEntity(23U);
    msg.x = 0.913027485521;
    msg.y = 0.309604641037;
    msg.z = 0.629410264976;
    msg.phi = 0.354733619818;
    msg.theta = 0.169630858343;
    msg.psi = 0.587667088281;
    msg.p = 0.973114483923;
    msg.q = 0.624538444803;
    msg.r = 0.807181552841;
    msg.u = 0.699232777524;
    msg.v = 0.694812708998;
    msg.w = 0.0471328914641;
    msg.bias_psi = 0.838847673345;
    msg.bias_r = 0.799852543617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.122828083572);
    msg.setSource(8023U);
    msg.setSourceEntity(176U);
    msg.setDestination(18730U);
    msg.setDestinationEntity(143U);
    msg.x = 0.00427633820519;
    msg.y = 0.674504707483;
    msg.z = 0.134970906462;
    msg.phi = 0.363964158676;
    msg.theta = 0.678118544547;
    msg.psi = 0.871439489626;
    msg.p = 0.0855821972644;
    msg.q = 0.615589092067;
    msg.r = 0.0829035305952;
    msg.u = 0.889887544759;
    msg.v = 0.257357682042;
    msg.w = 0.594584347941;
    msg.bias_psi = 0.349700551979;
    msg.bias_r = 0.967166317345;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.381813300945);
    msg.setSource(18623U);
    msg.setSourceEntity(137U);
    msg.setDestination(33277U);
    msg.setDestinationEntity(151U);
    msg.bias_psi = 0.286014405959;
    msg.bias_r = 0.566942431359;
    msg.cog = 0.710913894118;
    msg.cyaw = 0.86180706857;
    msg.lbl_rej_level = 0.728882129023;
    msg.gps_rej_level = 0.052354056695;
    msg.custom_x = 0.621395059055;
    msg.custom_y = 0.464109890629;
    msg.custom_z = 0.0941398697349;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.180230133408);
    msg.setSource(8694U);
    msg.setSourceEntity(10U);
    msg.setDestination(61285U);
    msg.setDestinationEntity(148U);
    msg.bias_psi = 0.11722963084;
    msg.bias_r = 0.215228199975;
    msg.cog = 0.0522189552753;
    msg.cyaw = 0.807580278879;
    msg.lbl_rej_level = 0.276538592672;
    msg.gps_rej_level = 0.016805988122;
    msg.custom_x = 0.147538168098;
    msg.custom_y = 0.80957189937;
    msg.custom_z = 0.355327365148;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.293100757962);
    msg.setSource(19475U);
    msg.setSourceEntity(171U);
    msg.setDestination(14206U);
    msg.setDestinationEntity(108U);
    msg.bias_psi = 0.595519384636;
    msg.bias_r = 0.416158775728;
    msg.cog = 0.345698925855;
    msg.cyaw = 0.35070738284;
    msg.lbl_rej_level = 0.911062871441;
    msg.gps_rej_level = 0.599802668212;
    msg.custom_x = 0.393067541204;
    msg.custom_y = 0.81248551307;
    msg.custom_z = 0.471346537209;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.673047316183);
    msg.setSource(16518U);
    msg.setSourceEntity(196U);
    msg.setDestination(54047U);
    msg.setDestinationEntity(10U);
    msg.utc_time = 0.0951612504242;
    msg.reason = 115U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.657427222175);
    msg.setSource(25697U);
    msg.setSourceEntity(163U);
    msg.setDestination(47070U);
    msg.setDestinationEntity(16U);
    msg.utc_time = 0.829213578984;
    msg.reason = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.906607006606);
    msg.setSource(33794U);
    msg.setSourceEntity(79U);
    msg.setDestination(52023U);
    msg.setDestinationEntity(58U);
    msg.utc_time = 0.943248947005;
    msg.reason = 135U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.20642203187);
    msg.setSource(18881U);
    msg.setSourceEntity(88U);
    msg.setDestination(28854U);
    msg.setDestinationEntity(110U);
    msg.id = 102U;
    msg.range = 0.791320852874;
    msg.acceptance = 130U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.982175013876);
    msg.setSource(43325U);
    msg.setSourceEntity(81U);
    msg.setDestination(56954U);
    msg.setDestinationEntity(11U);
    msg.id = 231U;
    msg.range = 0.484975258225;
    msg.acceptance = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.674203926913);
    msg.setSource(39299U);
    msg.setSourceEntity(145U);
    msg.setDestination(37529U);
    msg.setDestinationEntity(87U);
    msg.id = 207U;
    msg.range = 0.802113568001;
    msg.acceptance = 57U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.0615337344971);
    msg.setSource(38280U);
    msg.setSourceEntity(32U);
    msg.setDestination(7123U);
    msg.setDestinationEntity(236U);
    msg.type = 230U;
    msg.reason = 87U;
    msg.value = 0.530442125006;
    msg.timestep = 0.939087298277;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.242683850906);
    msg.setSource(1907U);
    msg.setSourceEntity(179U);
    msg.setDestination(63293U);
    msg.setDestinationEntity(139U);
    msg.type = 241U;
    msg.reason = 35U;
    msg.value = 0.2127536033;
    msg.timestep = 0.253922725446;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.40750657755);
    msg.setSource(25021U);
    msg.setSourceEntity(114U);
    msg.setDestination(15383U);
    msg.setDestinationEntity(204U);
    msg.type = 208U;
    msg.reason = 235U;
    msg.value = 0.268181420438;
    msg.timestep = 0.555004712147;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.895031490103);
    msg.setSource(28275U);
    msg.setSourceEntity(35U);
    msg.setDestination(4790U);
    msg.setDestinationEntity(124U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YNEPJECRBOIXXZGGHTXCKAUODBPFFSOSOZIKMIMGQFUCKMPKYTTHDHMWHLKOBUCBIYDOEDNGUHHPSYGADHJRWMJRFWFUTOXKVSSEYFRGFJQBXXVYTPLEAZXBKFYUADUGMZLGKWJOIHVXQKDNIBNCCSSCDMHAMYPQNVEESWLIORBXURCRQSNKVPPNASRQJVTDVPIHQJFNZEZVGWWUAEZ");
    tmp_msg_0.lat = 0.488075244821;
    tmp_msg_0.lon = 0.392375004124;
    tmp_msg_0.depth = 0.611154953679;
    tmp_msg_0.query_channel = 36U;
    tmp_msg_0.reply_channel = 107U;
    tmp_msg_0.transponder_delay = 129U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.245172992474;
    msg.y = 0.644261529814;
    msg.var_x = 0.775036616326;
    msg.var_y = 0.422540204486;
    msg.distance = 0.373577661145;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.588316803705);
    msg.setSource(35902U);
    msg.setSourceEntity(65U);
    msg.setDestination(16588U);
    msg.setDestinationEntity(230U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YPTUJMJOZBEKPIVVNPBFCDZFMGCQCWYJRBPVNUASTYLWMPPSIKGNEXASMAWBLMTYXMWABZQOCNDGXJCLIUWGBRMHXILWYGVPHCGVYVOLQ");
    tmp_msg_0.lat = 0.447852522638;
    tmp_msg_0.lon = 0.38363701177;
    tmp_msg_0.depth = 0.38956466432;
    tmp_msg_0.query_channel = 207U;
    tmp_msg_0.reply_channel = 9U;
    tmp_msg_0.transponder_delay = 79U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.417927061409;
    msg.y = 0.873944088587;
    msg.var_x = 0.779111861555;
    msg.var_y = 0.700165632228;
    msg.distance = 0.643356023771;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.935616462157);
    msg.setSource(61091U);
    msg.setSourceEntity(218U);
    msg.setDestination(28267U);
    msg.setDestinationEntity(77U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SRDXWDWLVQVXXRNCOFUNNVUWHXVHDNTJHHDGPBKLZKYDFHJCEFGTJCHEVLAEAREEKAVJZZKBCIWZRVFQOKJLTLTSYOMZRFHQGZMTEXGKHWDQYKSXLCOPYIRZWIWNUOCTALCUSILOOXTGIYMENZMTUIPAOJQHIOQUJCPIBPDLPYGBEJRFAVKRNMXBCUSUUJBIGQAEMAQOENWBUNFRZKPJGPBABLGRPYYYWDFVPFTASXSCYFDBNQ");
    tmp_msg_0.lat = 0.505100166487;
    tmp_msg_0.lon = 0.973935417558;
    tmp_msg_0.depth = 0.647131460307;
    tmp_msg_0.query_channel = 235U;
    tmp_msg_0.reply_channel = 153U;
    tmp_msg_0.transponder_delay = 75U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.200880309554;
    msg.y = 0.901471784442;
    msg.var_x = 0.717756311567;
    msg.var_y = 0.664581079683;
    msg.distance = 0.971747934122;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.0207652809152);
    msg.setSource(16914U);
    msg.setSourceEntity(58U);
    msg.setDestination(4003U);
    msg.setDestinationEntity(74U);
    msg.state = 65U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.223033238489);
    msg.setSource(37058U);
    msg.setSourceEntity(230U);
    msg.setDestination(48507U);
    msg.setDestinationEntity(5U);
    msg.state = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.341243951393);
    msg.setSource(31374U);
    msg.setSourceEntity(143U);
    msg.setDestination(65002U);
    msg.setDestinationEntity(186U);
    msg.state = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.248445608715);
    msg.setSource(15879U);
    msg.setSourceEntity(29U);
    msg.setDestination(40069U);
    msg.setDestinationEntity(247U);
    msg.x = 0.399001585371;
    msg.y = 0.584712901515;
    msg.z = 0.516422702444;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.113629270781);
    msg.setSource(62371U);
    msg.setSourceEntity(81U);
    msg.setDestination(41476U);
    msg.setDestinationEntity(113U);
    msg.x = 0.732943647756;
    msg.y = 0.344021644547;
    msg.z = 0.548672593177;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.301497938895);
    msg.setSource(49648U);
    msg.setSourceEntity(230U);
    msg.setDestination(50341U);
    msg.setDestinationEntity(139U);
    msg.x = 0.155021345724;
    msg.y = 0.400663373477;
    msg.z = 0.0609955501523;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.689829228483);
    msg.setSource(54170U);
    msg.setSourceEntity(154U);
    msg.setDestination(54457U);
    msg.setDestinationEntity(147U);
    msg.value = 0.559447583098;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.479797002071);
    msg.setSource(55260U);
    msg.setSourceEntity(224U);
    msg.setDestination(64731U);
    msg.setDestinationEntity(56U);
    msg.value = 0.852770577952;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.455828728982);
    msg.setSource(3596U);
    msg.setSourceEntity(143U);
    msg.setDestination(8927U);
    msg.setDestinationEntity(3U);
    msg.value = 0.888937072365;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.710090761301);
    msg.setSource(30814U);
    msg.setSourceEntity(178U);
    msg.setDestination(54496U);
    msg.setDestinationEntity(84U);
    msg.value = 0.009197005722;
    msg.z_units = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.13459077132);
    msg.setSource(46053U);
    msg.setSourceEntity(163U);
    msg.setDestination(22182U);
    msg.setDestinationEntity(174U);
    msg.value = 0.744835467411;
    msg.z_units = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.484452544415);
    msg.setSource(58533U);
    msg.setSourceEntity(229U);
    msg.setDestination(3852U);
    msg.setDestinationEntity(27U);
    msg.value = 0.963390065969;
    msg.z_units = 143U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.821202278469);
    msg.setSource(60290U);
    msg.setSourceEntity(3U);
    msg.setDestination(47650U);
    msg.setDestinationEntity(94U);
    msg.value = 0.466710501228;
    msg.speed_units = 116U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.123704926692);
    msg.setSource(48157U);
    msg.setSourceEntity(109U);
    msg.setDestination(53461U);
    msg.setDestinationEntity(18U);
    msg.value = 0.744301170703;
    msg.speed_units = 187U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.28069523105);
    msg.setSource(27576U);
    msg.setSourceEntity(228U);
    msg.setDestination(31590U);
    msg.setDestinationEntity(30U);
    msg.value = 0.64794188643;
    msg.speed_units = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.491334434291);
    msg.setSource(50684U);
    msg.setSourceEntity(218U);
    msg.setDestination(35954U);
    msg.setDestinationEntity(46U);
    msg.value = 0.146672451716;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.665464921838);
    msg.setSource(46819U);
    msg.setSourceEntity(21U);
    msg.setDestination(40926U);
    msg.setDestinationEntity(181U);
    msg.value = 0.54862681764;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.0387818165341);
    msg.setSource(30152U);
    msg.setSourceEntity(243U);
    msg.setDestination(10013U);
    msg.setDestinationEntity(143U);
    msg.value = 0.0580920847861;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.254280035186);
    msg.setSource(14307U);
    msg.setSourceEntity(50U);
    msg.setDestination(42264U);
    msg.setDestinationEntity(182U);
    msg.value = 0.214070784877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.709397383978);
    msg.setSource(27305U);
    msg.setSourceEntity(19U);
    msg.setDestination(6018U);
    msg.setDestinationEntity(208U);
    msg.value = 0.27016194395;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.299061831148);
    msg.setSource(12521U);
    msg.setSourceEntity(213U);
    msg.setDestination(28133U);
    msg.setDestinationEntity(127U);
    msg.value = 0.539254884547;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.0107454185576);
    msg.setSource(8366U);
    msg.setSourceEntity(72U);
    msg.setDestination(20221U);
    msg.setDestinationEntity(234U);
    msg.value = 0.24442702147;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.842703566059);
    msg.setSource(35813U);
    msg.setSourceEntity(125U);
    msg.setDestination(47025U);
    msg.setDestinationEntity(87U);
    msg.value = 0.615102983359;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.908331973226);
    msg.setSource(961U);
    msg.setSourceEntity(241U);
    msg.setDestination(65337U);
    msg.setDestinationEntity(232U);
    msg.value = 0.835977042877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.897066364493);
    msg.setSource(59262U);
    msg.setSourceEntity(41U);
    msg.setDestination(2991U);
    msg.setDestinationEntity(93U);
    msg.path_ref = 638176243U;
    msg.start_lat = 0.308885594423;
    msg.start_lon = 0.223638095352;
    msg.start_z = 0.410339193251;
    msg.start_z_units = 44U;
    msg.end_lat = 0.861422722521;
    msg.end_lon = 0.786564123603;
    msg.end_z = 0.240945440435;
    msg.end_z_units = 247U;
    msg.speed = 0.484769584221;
    msg.speed_units = 247U;
    msg.lradius = 0.124204048909;
    msg.flags = 95U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.12340194655);
    msg.setSource(42532U);
    msg.setSourceEntity(213U);
    msg.setDestination(60774U);
    msg.setDestinationEntity(35U);
    msg.path_ref = 2961038807U;
    msg.start_lat = 0.0050550465826;
    msg.start_lon = 0.893705290672;
    msg.start_z = 0.923391265402;
    msg.start_z_units = 88U;
    msg.end_lat = 0.65504327791;
    msg.end_lon = 0.0940206375548;
    msg.end_z = 0.820860021041;
    msg.end_z_units = 48U;
    msg.speed = 0.893037936109;
    msg.speed_units = 158U;
    msg.lradius = 0.455162139157;
    msg.flags = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.715080869345);
    msg.setSource(32075U);
    msg.setSourceEntity(222U);
    msg.setDestination(33916U);
    msg.setDestinationEntity(124U);
    msg.path_ref = 1982065036U;
    msg.start_lat = 0.176595280841;
    msg.start_lon = 0.753031146959;
    msg.start_z = 0.571906578587;
    msg.start_z_units = 56U;
    msg.end_lat = 0.623054462965;
    msg.end_lon = 0.596201778157;
    msg.end_z = 0.663456786357;
    msg.end_z_units = 118U;
    msg.speed = 0.288379436454;
    msg.speed_units = 62U;
    msg.lradius = 0.0752403271809;
    msg.flags = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.310243853751);
    msg.setSource(55860U);
    msg.setSourceEntity(138U);
    msg.setDestination(42180U);
    msg.setDestinationEntity(133U);
    msg.x = 0.305583207292;
    msg.y = 0.776596331384;
    msg.z = 0.214174525731;
    msg.k = 0.984188172744;
    msg.m = 0.539574672394;
    msg.n = 0.433555355507;
    msg.flags = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.103317774248);
    msg.setSource(38227U);
    msg.setSourceEntity(251U);
    msg.setDestination(13674U);
    msg.setDestinationEntity(232U);
    msg.x = 0.799023516976;
    msg.y = 0.166225802836;
    msg.z = 0.325159107954;
    msg.k = 0.0308848101694;
    msg.m = 0.188005735381;
    msg.n = 0.668944997565;
    msg.flags = 54U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.576211942613);
    msg.setSource(50868U);
    msg.setSourceEntity(16U);
    msg.setDestination(22886U);
    msg.setDestinationEntity(22U);
    msg.x = 0.713624532485;
    msg.y = 0.369663351876;
    msg.z = 0.179754472234;
    msg.k = 0.565187127169;
    msg.m = 0.876527948455;
    msg.n = 0.0697713109434;
    msg.flags = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.559852336266);
    msg.setSource(35830U);
    msg.setSourceEntity(31U);
    msg.setDestination(1971U);
    msg.setDestinationEntity(18U);
    msg.value = 0.207531662534;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.227488534009);
    msg.setSource(64541U);
    msg.setSourceEntity(95U);
    msg.setDestination(44453U);
    msg.setDestinationEntity(247U);
    msg.value = 0.635086799;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.113040348);
    msg.setSource(43023U);
    msg.setSourceEntity(242U);
    msg.setDestination(33379U);
    msg.setDestinationEntity(156U);
    msg.value = 0.347345805354;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.126775681861);
    msg.setSource(50112U);
    msg.setSourceEntity(25U);
    msg.setDestination(15174U);
    msg.setDestinationEntity(191U);
    msg.u = 0.126509354601;
    msg.v = 0.393443730296;
    msg.w = 0.145513903415;
    msg.p = 0.728171830135;
    msg.q = 0.807289828483;
    msg.r = 0.152086739419;
    msg.flags = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.67593649992);
    msg.setSource(50477U);
    msg.setSourceEntity(33U);
    msg.setDestination(39005U);
    msg.setDestinationEntity(188U);
    msg.u = 0.161901420599;
    msg.v = 0.208074721847;
    msg.w = 0.598393513064;
    msg.p = 0.538540212572;
    msg.q = 0.12459207294;
    msg.r = 0.575736958434;
    msg.flags = 98U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.314398665629);
    msg.setSource(55457U);
    msg.setSourceEntity(16U);
    msg.setDestination(64291U);
    msg.setDestinationEntity(75U);
    msg.u = 0.0227601917602;
    msg.v = 0.991964652794;
    msg.w = 0.719264038791;
    msg.p = 0.486965702545;
    msg.q = 0.601280020551;
    msg.r = 0.978362814793;
    msg.flags = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.57625373647);
    msg.setSource(44333U);
    msg.setSourceEntity(132U);
    msg.setDestination(49255U);
    msg.setDestinationEntity(104U);
    msg.path_ref = 2025178348U;
    msg.start_lat = 0.492407211908;
    msg.start_lon = 0.622165059334;
    msg.start_z = 0.502329922282;
    msg.start_z_units = 222U;
    msg.end_lat = 0.325548654921;
    msg.end_lon = 0.967101536241;
    msg.end_z = 0.583472028729;
    msg.end_z_units = 116U;
    msg.lradius = 0.159465092515;
    msg.flags = 68U;
    msg.x = 0.562277596259;
    msg.y = 0.862081967957;
    msg.z = 0.0113399102328;
    msg.vx = 0.825236740812;
    msg.vy = 0.177069537159;
    msg.vz = 0.491202711988;
    msg.course_error = 0.0390357583624;
    msg.eta = 65488U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.168723935396);
    msg.setSource(24294U);
    msg.setSourceEntity(71U);
    msg.setDestination(3689U);
    msg.setDestinationEntity(11U);
    msg.path_ref = 1780138187U;
    msg.start_lat = 0.299387668105;
    msg.start_lon = 0.563400208258;
    msg.start_z = 0.512189377553;
    msg.start_z_units = 71U;
    msg.end_lat = 0.131651299023;
    msg.end_lon = 0.455877415268;
    msg.end_z = 0.618261005281;
    msg.end_z_units = 220U;
    msg.lradius = 0.866059573307;
    msg.flags = 238U;
    msg.x = 0.352655547211;
    msg.y = 0.499491956847;
    msg.z = 0.711364452492;
    msg.vx = 0.737639272041;
    msg.vy = 0.865209132048;
    msg.vz = 0.613571349554;
    msg.course_error = 0.49574614229;
    msg.eta = 24290U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.233587922993);
    msg.setSource(23019U);
    msg.setSourceEntity(61U);
    msg.setDestination(18814U);
    msg.setDestinationEntity(97U);
    msg.path_ref = 211678631U;
    msg.start_lat = 0.668374903304;
    msg.start_lon = 0.0946100017787;
    msg.start_z = 0.982862300748;
    msg.start_z_units = 144U;
    msg.end_lat = 0.60548363653;
    msg.end_lon = 0.20297224948;
    msg.end_z = 0.480873179593;
    msg.end_z_units = 72U;
    msg.lradius = 0.229742037585;
    msg.flags = 209U;
    msg.x = 0.292964325073;
    msg.y = 0.582570085724;
    msg.z = 0.422407813093;
    msg.vx = 0.992317272712;
    msg.vy = 0.348800672271;
    msg.vz = 0.135400145798;
    msg.course_error = 0.647692632394;
    msg.eta = 30003U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.262634167664);
    msg.setSource(29199U);
    msg.setSourceEntity(246U);
    msg.setDestination(36524U);
    msg.setDestinationEntity(37U);
    msg.k = 0.345224858213;
    msg.m = 0.209059666038;
    msg.n = 0.263112547334;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.992706215718);
    msg.setSource(33088U);
    msg.setSourceEntity(188U);
    msg.setDestination(52402U);
    msg.setDestinationEntity(51U);
    msg.k = 0.624392783404;
    msg.m = 0.0359499711395;
    msg.n = 0.239812570934;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.457200141069);
    msg.setSource(52772U);
    msg.setSourceEntity(89U);
    msg.setDestination(32938U);
    msg.setDestinationEntity(1U);
    msg.k = 0.0499788071042;
    msg.m = 0.47522869523;
    msg.n = 0.882153037314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.865117551821);
    msg.setSource(55139U);
    msg.setSourceEntity(66U);
    msg.setDestination(50770U);
    msg.setDestinationEntity(37U);
    msg.p = 0.137139925691;
    msg.i = 0.00499636363349;
    msg.d = 0.894701620215;
    msg.a = 0.677669355117;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.543582191363);
    msg.setSource(58627U);
    msg.setSourceEntity(162U);
    msg.setDestination(58179U);
    msg.setDestinationEntity(121U);
    msg.p = 0.0764588675059;
    msg.i = 0.361868789385;
    msg.d = 0.687222484137;
    msg.a = 0.740348002459;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.751994434366);
    msg.setSource(54248U);
    msg.setSourceEntity(23U);
    msg.setDestination(3619U);
    msg.setDestinationEntity(85U);
    msg.p = 0.101360622148;
    msg.i = 0.714265408156;
    msg.d = 0.0484137230753;
    msg.a = 0.356344978116;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.0726677568017);
    msg.setSource(43335U);
    msg.setSourceEntity(7U);
    msg.setDestination(25119U);
    msg.setDestinationEntity(158U);
    msg.op = 203U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.820521973363);
    msg.setSource(8402U);
    msg.setSourceEntity(137U);
    msg.setDestination(55112U);
    msg.setDestinationEntity(191U);
    msg.op = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.596802543234);
    msg.setSource(4447U);
    msg.setSourceEntity(237U);
    msg.setDestination(45076U);
    msg.setDestinationEntity(31U);
    msg.op = 191U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.790927901118);
    msg.setSource(17404U);
    msg.setSourceEntity(18U);
    msg.setDestination(38912U);
    msg.setDestinationEntity(84U);
    msg.timeout = 16323U;
    msg.lat = 0.931641436671;
    msg.lon = 0.0190231569362;
    msg.z = 0.833049598574;
    msg.z_units = 253U;
    msg.speed = 0.324855458534;
    msg.speed_units = 41U;
    msg.roll = 0.524852079339;
    msg.pitch = 0.603634718077;
    msg.yaw = 0.109888819594;
    msg.custom.assign("MMKNQIMONZGQE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.0204680685214);
    msg.setSource(58000U);
    msg.setSourceEntity(25U);
    msg.setDestination(49228U);
    msg.setDestinationEntity(11U);
    msg.timeout = 43435U;
    msg.lat = 0.72362415766;
    msg.lon = 0.409974362425;
    msg.z = 0.212177371089;
    msg.z_units = 253U;
    msg.speed = 0.187692719053;
    msg.speed_units = 218U;
    msg.roll = 0.54257586834;
    msg.pitch = 0.368631398408;
    msg.yaw = 0.222927354212;
    msg.custom.assign("NJUJIWTDJWRIBIYNQAZEMBEKULHFXNNDYWHKSTMRYSEAORGLTLTUNLZVWIYEERLDHCVJVJMFGVHTNEGWWDFADESMAQKFVAXZKGCRQHQAMNWOMMEQUGQHONFPCDQIUFRUPVHQXYOMOCBPIOZPRCPSHFWRXUSSCBPTOQJKGZVBLXBIGGSOQCKATWEFWXFASTLBGCPYZJANYSAMYCDMPILRZZCJVLGYIKXOHDSEZVDB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.106574218379);
    msg.setSource(63294U);
    msg.setSourceEntity(23U);
    msg.setDestination(61533U);
    msg.setDestinationEntity(208U);
    msg.timeout = 62810U;
    msg.lat = 0.940556922179;
    msg.lon = 0.5159669042;
    msg.z = 0.26464422291;
    msg.z_units = 26U;
    msg.speed = 0.805092068696;
    msg.speed_units = 8U;
    msg.roll = 0.734503917014;
    msg.pitch = 0.750821357242;
    msg.yaw = 0.412271377931;
    msg.custom.assign("MWAGTLKMZNVXNHYUQSRBTVKOYEDUCTHVCLACUEYHOMVWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.0276150708816);
    msg.setSource(52757U);
    msg.setSourceEntity(86U);
    msg.setDestination(22248U);
    msg.setDestinationEntity(221U);
    msg.timeout = 52670U;
    msg.lat = 0.487079010878;
    msg.lon = 0.495117494436;
    msg.z = 0.653546560357;
    msg.z_units = 133U;
    msg.speed = 0.152496325511;
    msg.speed_units = 69U;
    msg.duration = 48018U;
    msg.radius = 0.0204717182067;
    msg.flags = 99U;
    msg.custom.assign("YLFXNXEDDWJYJWRILSTFUMIMOBIFFTSAZVNFLVWUORJPNQWESKGGYRQVAIUPDNQLUMVBDQAABRWBKYZMIKUHOQBVWMVNLROVVZHOLISHETWHXUWHKJRCNXFLLDFKZTLPSKSCRGTIGUBKMCSNXPPPJAEGXOYPRECBBYZVXONMTYQSUHEFTAHYAGTQTJDPCDEMRBNADWJWEKYQFFZGOYIHMAINTXUEPHVHQMCZKDCCOQGGJZUBSKAGSJREC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.715234681161);
    msg.setSource(47532U);
    msg.setSourceEntity(91U);
    msg.setDestination(30685U);
    msg.setDestinationEntity(129U);
    msg.timeout = 15719U;
    msg.lat = 0.328274660052;
    msg.lon = 0.116682528655;
    msg.z = 0.606337498125;
    msg.z_units = 245U;
    msg.speed = 0.280428483888;
    msg.speed_units = 162U;
    msg.duration = 45663U;
    msg.radius = 0.0360811032736;
    msg.flags = 176U;
    msg.custom.assign("LFXYHYUFTBHIHLRWKJZLNIOYTOOHRCMVQFETHPEGEDOBPSJVJGNUJNWGNDAQBDTBVUWBIJKFKCEPUAMZTWYMGPQXZMZOLIJGAVTWCBCJXYFXPZPHPOPFCKYOBMZMAZKRSESXLDSAUXQUXYEGNMDYNKISUNXNBVLWUCJDRVXWETIHVRLEDSZDKGFSPIBDKGRLCAKSMZIWEIMHYQFSHQRAHDTFTROUQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.0233110908437);
    msg.setSource(39840U);
    msg.setSourceEntity(206U);
    msg.setDestination(13974U);
    msg.setDestinationEntity(57U);
    msg.timeout = 22234U;
    msg.lat = 0.414324974782;
    msg.lon = 0.0758379386552;
    msg.z = 0.948671803068;
    msg.z_units = 39U;
    msg.speed = 0.120234634245;
    msg.speed_units = 237U;
    msg.duration = 20963U;
    msg.radius = 0.218665146664;
    msg.flags = 78U;
    msg.custom.assign("EMYFQDCJAVXHMOGKTDWRUPFLRCHOCNGUGYXOOUILOHIUVFUCNZHDSZW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.261834663785);
    msg.setSource(44685U);
    msg.setSourceEntity(146U);
    msg.setDestination(3294U);
    msg.setDestinationEntity(94U);
    msg.custom.assign("NDMAATOLZBNUQCDUXTOOGVISNHRAYJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.368383773366);
    msg.setSource(30624U);
    msg.setSourceEntity(11U);
    msg.setDestination(24625U);
    msg.setDestinationEntity(17U);
    msg.custom.assign("MRZDJMFCDRINRHKWJSNRCSODJJIPFUOLEMVYGVTHYSQSKTAKTNKWHBDWKPBVAZPGUAQLUVSHGTPFKNLYSUDGOCQMBTQZLLWREMUKMNUZUFXTBYWNXVPRODPEFXSPOOQKRTEPZJQIPGIFUMVHTCZJKCUAWFCYEBIGDRCIWGZXEFIOSPIZVEAQHGYCJMXOADBUYNNAWXVG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.573369103019);
    msg.setSource(1234U);
    msg.setSourceEntity(217U);
    msg.setDestination(52073U);
    msg.setDestinationEntity(64U);
    msg.custom.assign("NGILPNENJQTJRBMHICDJNKDYHIWTHIMGVKCUOQWHLZMPHOXBGEJVOTOYQQCDYVMVNICMFZOTDWFYHLAQZQLUEFXTXYTFYPHSRGZCGDGKBLHRXKZSJZMSWDROUXRBSWJPGZWBSTASXIPRQDUOYZFUFGCDEAMVXSJPSP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.798315432152);
    msg.setSource(51631U);
    msg.setSourceEntity(114U);
    msg.setDestination(20356U);
    msg.setDestinationEntity(193U);
    msg.timeout = 32342U;
    msg.lat = 0.0540730864491;
    msg.lon = 0.819233717621;
    msg.z = 0.786797144322;
    msg.z_units = 248U;
    msg.duration = 43646U;
    msg.speed = 0.881151688099;
    msg.speed_units = 63U;
    msg.type = 216U;
    msg.radius = 0.836548779172;
    msg.length = 0.779493780575;
    msg.bearing = 0.644140756678;
    msg.direction = 33U;
    msg.custom.assign("BAJQDTMALYBGHINHUOTHSTMZGXRSAYFXYBIRBGFJKWOMHXQUKKPENIRCKPGBLQHMKYQDXVNPMOEEACOZLWJMMNSLNPZYRCCDPQOZUSVALPFYCUVLZGGCNAHAHDBREHEQOEYLVJITUBVGNXZUQNKPJYVIKWEMVDQJSSIPFCDTEYNVTZJBJSWXONZU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.891080391553);
    msg.setSource(38924U);
    msg.setSourceEntity(170U);
    msg.setDestination(52242U);
    msg.setDestinationEntity(132U);
    msg.timeout = 64135U;
    msg.lat = 0.556682863563;
    msg.lon = 0.714294984051;
    msg.z = 0.830995303704;
    msg.z_units = 218U;
    msg.duration = 43917U;
    msg.speed = 0.905359046124;
    msg.speed_units = 58U;
    msg.type = 221U;
    msg.radius = 0.257316773258;
    msg.length = 0.775442856077;
    msg.bearing = 0.209619493608;
    msg.direction = 173U;
    msg.custom.assign("SZVBMKDTHPLQFCBNYEKEGONVRZDWJLRNASIEHJYHGHAMWSCPMSRLBSMWQNHZPIAXRQIOOKOVAGAIDEDZJCFACUGANDXPWBZHRVRJXOGUFJMOBLNSTUZHUWTZYBIPYMMEXRWWUCEYNLROFLCVHJZWJQCFKDGIXBPQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.595335511586);
    msg.setSource(20894U);
    msg.setSourceEntity(142U);
    msg.setDestination(40823U);
    msg.setDestinationEntity(35U);
    msg.timeout = 53864U;
    msg.lat = 0.70201913615;
    msg.lon = 0.13022817712;
    msg.z = 0.239495273428;
    msg.z_units = 174U;
    msg.duration = 47854U;
    msg.speed = 0.618856917145;
    msg.speed_units = 236U;
    msg.type = 15U;
    msg.radius = 0.0160899164546;
    msg.length = 0.0100613248534;
    msg.bearing = 0.472880914449;
    msg.direction = 230U;
    msg.custom.assign("REVXAHNLYPLGQGVAMZRUBWVPRNDSXSRIKBWSWBZEHKRANWILXBKPXPOCQBJDWOMQKWPPCUGMDYGXSETVZEQTOCAGYUDAHPPTCYYPYNBTABULSNLIVALTJNJUXTMSFDFWENJJZD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.966232718407);
    msg.setSource(61812U);
    msg.setSourceEntity(251U);
    msg.setDestination(49569U);
    msg.setDestinationEntity(237U);
    msg.duration = 1750U;
    msg.custom.assign("QPSMLNSQDERPGWLYLQLVJCGMGWJRQBRCBTAFKNYUQASVNLQCADVUHJCEAKDIYXHSWOWKGTROVQSJIIOOUTIMWVPKBPMHXXTNMUNYS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.0746698659585);
    msg.setSource(56164U);
    msg.setSourceEntity(11U);
    msg.setDestination(31268U);
    msg.setDestinationEntity(165U);
    msg.duration = 18524U;
    msg.custom.assign("BUEJYABIRILJUNGPCSFLSLTYZTVOMAOPMGIVBRTKNVGKDKPPGJAEADEZMFXNLHRYBKDOWDYBSTJMXAFVLZBTCZUSSTLDKQHTBRPWJMUHYECXESCFEV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.348790682788);
    msg.setSource(3807U);
    msg.setSourceEntity(233U);
    msg.setDestination(2466U);
    msg.setDestinationEntity(166U);
    msg.duration = 7322U;
    msg.custom.assign("ZTJMOXVXAUHOCYIWXNKVUOSVFRFCBOLFHQYCIZBTCBEKBCMQTPVPJEGGVLQQBQRHWDYTJVASCTTDESOWXJBZRTUZIUNZYJUSZQDFMVRVVWVNJYMJAHCSHPSXCSDGNHMMIDDPZPDNHFMWMPEEAFPGAYLIUINRKAAQQONJHXEOWJHXZATFTLDSBGBSXIKWZYHNMWKBQEGTGZGWSYUARKKOXXO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.97710204398);
    msg.setSource(33908U);
    msg.setSourceEntity(241U);
    msg.setDestination(43424U);
    msg.setDestinationEntity(1U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.720303405655;
    msg.control.set(tmp_msg_0);
    msg.duration = 24740U;
    msg.custom.assign("GRRMFLJCSXXMBGOWLLLNXLEJMPVE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.699531705599);
    msg.setSource(47388U);
    msg.setSourceEntity(74U);
    msg.setDestination(39059U);
    msg.setDestinationEntity(18U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.485865156619;
    tmp_msg_0.z_units = 146U;
    msg.control.set(tmp_msg_0);
    msg.duration = 47452U;
    msg.custom.assign("KQOTJCYDSLHLQMRMCZTSMJAIZRLVAFYKFGEROEGGACNXVUVTZXDVVTQOQGZUEJOLFEGIABBBCZAIWPXBBMSNTUJOMBETFHSIGMVFKPYWQSSDEYDJEXQHDNIFHSPQMNNASHZRYFWJPGFRPKNTLCVCPWBKPOKKCWHKWMWUYUONBQZLMULXHTXWCVJIMUHSVCOHKXNKQIPYXRJEBCTWGSFWAIX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.541793981982);
    msg.setSource(63724U);
    msg.setSourceEntity(3U);
    msg.setDestination(60425U);
    msg.setDestinationEntity(143U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.474034135695;
    msg.control.set(tmp_msg_0);
    msg.duration = 63028U;
    msg.custom.assign("JUKRABHGBEYLZPYSLGVWIHENHYKMAZTVMFXHOYXINXCPVYNMNARCIXHCFMSGINGVSRUDFYRYBKPTIVRILIWXBMHUAQKWTILUYDKDBZOKPDDEQPTLFGUQGJRPKRTMMCAZSSJYTWEGWTTELMPREOBWRNFPCZHJPOKCVQDBHRJUJOENUFQOJAUFSJFCNDVAQWODXSLUWCDOQVAEWQZPQINBZJXMZBTLF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.0804667197768);
    msg.setSource(25461U);
    msg.setSourceEntity(201U);
    msg.setDestination(61618U);
    msg.setDestinationEntity(92U);
    msg.timeout = 64208U;
    msg.lat = 0.892762247323;
    msg.lon = 0.966489031709;
    msg.z = 0.183360462182;
    msg.z_units = 239U;
    msg.speed = 0.380533753465;
    msg.speed_units = 164U;
    msg.bearing = 0.207976358263;
    msg.cross_angle = 0.489896181901;
    msg.width = 0.115880090622;
    msg.length = 0.0237295105586;
    msg.hstep = 0.728922391516;
    msg.coff = 37U;
    msg.alternation = 238U;
    msg.flags = 124U;
    msg.custom.assign("ATHBUCFGWJFIWNKQGNYIDLWWBXFVKETYTRJMLRCNVESQDAKTYZCHFDNPRKXCLRCESRLWJXSFZPGJHDLAQEOUXCXGJWPIMMJZBTEQVNNOMFTTYKYICARCYWKOLUQEJYIBMNZBUGHWKDJOTDMNPPFDJXDFGVZIXMXVOASEOBHSZBUHACMBIQGSGUFDQTJMQPALELVIBA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.35030305176);
    msg.setSource(8717U);
    msg.setSourceEntity(228U);
    msg.setDestination(14215U);
    msg.setDestinationEntity(29U);
    msg.timeout = 63516U;
    msg.lat = 0.993107651653;
    msg.lon = 0.171716128342;
    msg.z = 0.914006615897;
    msg.z_units = 4U;
    msg.speed = 0.67394996389;
    msg.speed_units = 17U;
    msg.bearing = 0.144896640972;
    msg.cross_angle = 0.644236253085;
    msg.width = 0.116772964871;
    msg.length = 0.811359993767;
    msg.hstep = 0.101358171357;
    msg.coff = 30U;
    msg.alternation = 14U;
    msg.flags = 134U;
    msg.custom.assign("YXIHJFZZIHKSIBEFQZWCQNQCJMSSUHONZCQXEKYGQXNMQZPPCHSYDEGFRXPVMFOCGTPQAKOETWRPDBDDQGKZDIUTJAYLXQONOOVFXETAOSIMUNIBIDNKFIPPELVLMJERFLVKHXLBBGANJNEQDYBHBWMUWLOWAWTLLZAVUSPHRSP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.282938230883);
    msg.setSource(11840U);
    msg.setSourceEntity(135U);
    msg.setDestination(50587U);
    msg.setDestinationEntity(150U);
    msg.timeout = 14442U;
    msg.lat = 0.544791287158;
    msg.lon = 0.951820587336;
    msg.z = 0.736644719096;
    msg.z_units = 80U;
    msg.speed = 0.254065075715;
    msg.speed_units = 139U;
    msg.bearing = 0.732703311082;
    msg.cross_angle = 0.429063614695;
    msg.width = 0.516837808397;
    msg.length = 0.204626881617;
    msg.hstep = 0.59513078442;
    msg.coff = 99U;
    msg.alternation = 18U;
    msg.flags = 250U;
    msg.custom.assign("JCNHHHSIREZWVIIZCWDZQZFXEYRTPYSXTSKFFXTANWWASGW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.915165000354);
    msg.setSource(51069U);
    msg.setSourceEntity(22U);
    msg.setDestination(39655U);
    msg.setDestinationEntity(175U);
    msg.timeout = 19921U;
    msg.lat = 0.169862896768;
    msg.lon = 0.772499806717;
    msg.z = 0.220078878738;
    msg.z_units = 178U;
    msg.speed = 0.305001067375;
    msg.speed_units = 88U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.302232589879;
    tmp_msg_0.y = 0.254743993275;
    tmp_msg_0.z = 0.551197158847;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YDTAEDKVVYDKIXRRNQMQIOUPLPGXGCUMEHKESVBWSTLFWIZERBJNRSSDSVCKLXQGVONQGMCWXZOMHVLQLPXCZTOPOXSPTTBPAHJIEEUZBNLLQIRAQJHGKRFCYNSYTIJROPYAWPJVQNTKXWWJWSJPHFFSQGGBDDHDFYCJAEYAOUUFZEFWQZDZZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.942157332558);
    msg.setSource(38839U);
    msg.setSourceEntity(66U);
    msg.setDestination(11316U);
    msg.setDestinationEntity(67U);
    msg.timeout = 44777U;
    msg.lat = 0.510662237076;
    msg.lon = 0.746360378993;
    msg.z = 0.860116485673;
    msg.z_units = 193U;
    msg.speed = 0.924773441834;
    msg.speed_units = 27U;
    msg.custom.assign("AMSBVYNCAJVOHABLZZAWBPKKRXUTTXEOQRSRXMVQMHLHBDVOUMTTCUUXXIKNJKCMQLQVBZADITFQXPDLPHLEBOYOQNNSCEGXWMTSPWKDQUWJZHJJKHGELOWHLVEHDYOYYSIGGAWHXNTGWZGPJRCSRLIGZECEZJAIQGTRYGEAVVDFDKRCBEYNOFDWIQMETUIHRFDNRCFFFIUSOZIFTMYAJQMGSLZNANDYSJPBWFCZKPMPJVISUVKYBXBKUCWOL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.462764685521);
    msg.setSource(58167U);
    msg.setSourceEntity(1U);
    msg.setDestination(22373U);
    msg.setDestinationEntity(178U);
    msg.timeout = 33126U;
    msg.lat = 0.371707197175;
    msg.lon = 0.613368051645;
    msg.z = 0.59094662741;
    msg.z_units = 226U;
    msg.speed = 0.770177958646;
    msg.speed_units = 174U;
    msg.custom.assign("VJKPHMLQICRHSHCNRGIZLTIWWMCAQEFFDZWRVAGOFBSSHSXRYDBCROGJUEWDWNMCTBBQUOMSPVMZCZRBALKGNIGXDDZUEFNVUKUJLIJFHHTWTQRCJGYAAHPBXGZNWHGQGKNHYSUAVQXQWOKJVFTUQNMOIPJECZKFZNKURINVPTLEKQPLFSJFPAOVLMEDOKKVBMSTBYGAXCYSQMULPJXWLIVJZOFYTOYYX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.89136045211);
    msg.setSource(25796U);
    msg.setSourceEntity(172U);
    msg.setDestination(27925U);
    msg.setDestinationEntity(150U);
    msg.x = 0.764843878814;
    msg.y = 0.0592160759416;
    msg.z = 0.330134889395;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.812502165025);
    msg.setSource(56232U);
    msg.setSourceEntity(97U);
    msg.setDestination(14233U);
    msg.setDestinationEntity(250U);
    msg.x = 0.341461798399;
    msg.y = 0.80168274597;
    msg.z = 0.653741682881;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.364284912673);
    msg.setSource(25682U);
    msg.setSourceEntity(169U);
    msg.setDestination(10580U);
    msg.setDestinationEntity(76U);
    msg.x = 0.846923919677;
    msg.y = 0.40555815698;
    msg.z = 0.967161510287;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.112940536419);
    msg.setSource(27938U);
    msg.setSourceEntity(65U);
    msg.setDestination(37145U);
    msg.setDestinationEntity(164U);
    msg.timeout = 8748U;
    msg.lat = 0.739542272047;
    msg.lon = 0.0984725022596;
    msg.z = 0.460853683512;
    msg.z_units = 194U;
    msg.amplitude = 0.958522248176;
    msg.pitch = 0.823494701177;
    msg.speed = 0.819110874564;
    msg.speed_units = 70U;
    msg.custom.assign("MLPZSPAOSQWZQGWKSZUEIW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.0270605733913);
    msg.setSource(50187U);
    msg.setSourceEntity(238U);
    msg.setDestination(51652U);
    msg.setDestinationEntity(146U);
    msg.timeout = 4579U;
    msg.lat = 0.149431922867;
    msg.lon = 0.445651881348;
    msg.z = 0.528750863824;
    msg.z_units = 158U;
    msg.amplitude = 0.548334525138;
    msg.pitch = 0.00212688819992;
    msg.speed = 0.997837640104;
    msg.speed_units = 92U;
    msg.custom.assign("ANWCLNUTSAVKPAUNCQTZPD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.163955349666);
    msg.setSource(55991U);
    msg.setSourceEntity(3U);
    msg.setDestination(57893U);
    msg.setDestinationEntity(143U);
    msg.timeout = 57098U;
    msg.lat = 0.0878047493014;
    msg.lon = 0.880401064577;
    msg.z = 0.10800452246;
    msg.z_units = 109U;
    msg.amplitude = 0.373788558542;
    msg.pitch = 0.474183889147;
    msg.speed = 0.906610408134;
    msg.speed_units = 43U;
    msg.custom.assign("ZGGRBLAAUXDSRVYCISABETIWJWXAKUQOHSKNBCIABLYVKSWKFEZYDO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.104582823838);
    msg.setSource(64849U);
    msg.setSourceEntity(154U);
    msg.setDestination(6345U);
    msg.setDestinationEntity(13U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.983832954549);
    msg.setSource(43550U);
    msg.setSourceEntity(223U);
    msg.setDestination(47885U);
    msg.setDestinationEntity(94U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.867274515316);
    msg.setSource(38693U);
    msg.setSourceEntity(98U);
    msg.setDestination(41730U);
    msg.setDestinationEntity(2U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.133898433556);
    msg.setSource(26243U);
    msg.setSourceEntity(99U);
    msg.setDestination(21589U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.967611660901;
    msg.lon = 0.467016470424;
    msg.z = 0.107391411631;
    msg.z_units = 200U;
    msg.radius = 0.0616230900627;
    msg.duration = 31658U;
    msg.speed = 0.432948504066;
    msg.speed_units = 131U;
    msg.custom.assign("BOLURATUSNBVAFVMLKMTBJDPPXWCYHOHZSIEOUFQSENKPFGBNYTQGHYBQDESPDYQZUYSNPAKTLCYIVLQERFGQJROIIWVHRXYCXZNKZAKKJZFTFDNDGZEWTGDOZEVKYWLEXFBMLMAGHLMRGUXJGTEXHUCMJNKOCTCWBQISKVLAPHCQPUYCVHIIUHSLQZRALEOIPNVWMDFEOYTIFCOHNZNJAOXBTIUVMJMRDMGWSDAWFXQJGSVR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.152499979206);
    msg.setSource(37702U);
    msg.setSourceEntity(37U);
    msg.setDestination(34243U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.101648427161;
    msg.lon = 0.188407679817;
    msg.z = 0.061071941706;
    msg.z_units = 169U;
    msg.radius = 0.727020381719;
    msg.duration = 42532U;
    msg.speed = 0.885601949698;
    msg.speed_units = 217U;
    msg.custom.assign("GNUZDHCWSFIZYQOAIHHEMCPSFBWLIURVNCMXQPTGSIOJRUVCUEYPYVHDBQGTOQOBJWSMWVVGDFIHHNVBGSFMGOUDLAZHIEIMCFGUUETRFWDXKKZZEOE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.156991037448);
    msg.setSource(5658U);
    msg.setSourceEntity(189U);
    msg.setDestination(57409U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.405068863774;
    msg.lon = 0.903741345245;
    msg.z = 0.210536416888;
    msg.z_units = 191U;
    msg.radius = 0.154463260178;
    msg.duration = 58746U;
    msg.speed = 0.219880220246;
    msg.speed_units = 73U;
    msg.custom.assign("IDDUJPLHEMNTXHSOHJHOWVIMIDPLVITKJOICAQXNFBDNMQSKSUEBSVPJMYIIGQLDTLTAOHFR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.124229766734);
    msg.setSource(10073U);
    msg.setSourceEntity(251U);
    msg.setDestination(59542U);
    msg.setDestinationEntity(184U);
    msg.timeout = 37904U;
    msg.flags = 206U;
    msg.lat = 0.425845854383;
    msg.lon = 0.291610788951;
    msg.start_z = 0.962346150124;
    msg.start_z_units = 215U;
    msg.end_z = 0.0260070524083;
    msg.end_z_units = 189U;
    msg.radius = 0.325107275803;
    msg.speed = 0.789005423265;
    msg.speed_units = 251U;
    msg.custom.assign("WYTUQZCNELPWHLUIYZPVMEJFSOHTOQBPVKATRUTBEFKGOGSJGNZZUJLNDNFKWOBBPPIOLFXRSWGRIOBMCDTAEMNTYDHSOUGZMCPHXFYQNXMPPFSJLRLXHAPAWNKHDEZUVXJXACKZIBZSRYPQWESQTCYYQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.353700682965);
    msg.setSource(45005U);
    msg.setSourceEntity(196U);
    msg.setDestination(42928U);
    msg.setDestinationEntity(102U);
    msg.timeout = 58976U;
    msg.flags = 192U;
    msg.lat = 0.433225532525;
    msg.lon = 0.920887561201;
    msg.start_z = 0.200645460467;
    msg.start_z_units = 43U;
    msg.end_z = 0.175653106807;
    msg.end_z_units = 196U;
    msg.radius = 0.48704177617;
    msg.speed = 0.254788611017;
    msg.speed_units = 58U;
    msg.custom.assign("WKGYUZHXALGKPESFVJILAFHDJEDNBXZTDJJBTFWRUWEYWNOMDQHGZQSIPLRNGRHLMRSHKXIWV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.919377003302);
    msg.setSource(2171U);
    msg.setSourceEntity(103U);
    msg.setDestination(21279U);
    msg.setDestinationEntity(36U);
    msg.timeout = 29350U;
    msg.flags = 168U;
    msg.lat = 0.943075637058;
    msg.lon = 0.323595307534;
    msg.start_z = 0.226287765939;
    msg.start_z_units = 43U;
    msg.end_z = 0.601655043481;
    msg.end_z_units = 237U;
    msg.radius = 0.296008897505;
    msg.speed = 0.309695334432;
    msg.speed_units = 237U;
    msg.custom.assign("FKOKDPLZAWQHWCLSXWNTDHGPMIDDAGUPFJVJWZOEGAJWNGGINCMSFWQFSMHIVIKCMTJC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.636543336088);
    msg.setSource(24866U);
    msg.setSourceEntity(228U);
    msg.setDestination(60718U);
    msg.setDestinationEntity(34U);
    msg.timeout = 42733U;
    msg.lat = 0.908192096726;
    msg.lon = 0.676810988612;
    msg.z = 0.353635772511;
    msg.z_units = 61U;
    msg.speed = 0.0166778371824;
    msg.speed_units = 207U;
    msg.custom.assign("EDBLNUJGRDKBADGOVQRXIVZJEOKDTSAFPFJIDUUCBNJQEXPB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.244030410696);
    msg.setSource(29688U);
    msg.setSourceEntity(171U);
    msg.setDestination(43262U);
    msg.setDestinationEntity(52U);
    msg.timeout = 45202U;
    msg.lat = 0.231180102372;
    msg.lon = 0.52369376766;
    msg.z = 0.365749532815;
    msg.z_units = 207U;
    msg.speed = 0.542096056684;
    msg.speed_units = 180U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.955393548931;
    tmp_msg_0.y = 0.0931449790109;
    tmp_msg_0.z = 0.00766548475641;
    tmp_msg_0.t = 0.382043808675;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PQISWGITIGCSSAGUSLMXDUSXZEGALEULXKHTK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.312594738457);
    msg.setSource(57840U);
    msg.setSourceEntity(196U);
    msg.setDestination(53456U);
    msg.setDestinationEntity(192U);
    msg.timeout = 54593U;
    msg.lat = 0.690677472603;
    msg.lon = 0.531375128406;
    msg.z = 0.760874716465;
    msg.z_units = 193U;
    msg.speed = 0.873084021547;
    msg.speed_units = 183U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.825040033889;
    tmp_msg_0.y = 0.573169703055;
    tmp_msg_0.z = 0.0363058523893;
    tmp_msg_0.t = 0.0794700366532;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RGTEMVPOXOMKAPEYONJDYALWDDAEHELGAGEEXYJCQTHHDKWGKURMFEBWIZXICUDJLARBVZAVZFGJJHCUVBENSOOJBHOIWJUAWYOFUKRVZOIIQFPXNTZFJMUMWSGVBKCQUMQLNFRICDWRHZPWSAEYUQYTXVFNAQTZODUDYUKRSTYKHKXWCGLFTKBHVXQSOSYBHMMFBGMKPRXSWTZNNAYQJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.447815861156);
    msg.setSource(47475U);
    msg.setSourceEntity(59U);
    msg.setDestination(11331U);
    msg.setDestinationEntity(141U);
    msg.x = 0.821634952085;
    msg.y = 0.284241615819;
    msg.z = 0.423806480243;
    msg.t = 0.00232075160411;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.215429537416);
    msg.setSource(14585U);
    msg.setSourceEntity(136U);
    msg.setDestination(23979U);
    msg.setDestinationEntity(223U);
    msg.x = 0.741730598803;
    msg.y = 0.59818649617;
    msg.z = 0.883223880706;
    msg.t = 0.798137468863;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.897148498144);
    msg.setSource(32686U);
    msg.setSourceEntity(98U);
    msg.setDestination(26181U);
    msg.setDestinationEntity(192U);
    msg.x = 0.00577136465589;
    msg.y = 0.537912007905;
    msg.z = 0.336892733697;
    msg.t = 0.847020876314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.262081450868);
    msg.setSource(25363U);
    msg.setSourceEntity(166U);
    msg.setDestination(17009U);
    msg.setDestinationEntity(0U);
    msg.timeout = 59032U;
    msg.name.assign("HISWQZISVTCCDVUFNUJDACMQGKMWRCHEBOWDDGJTLCBOLIQOKRTLNAHYPUKWDZNUXFBBFTXOEQYXERQAZXMNOEKVGZSPTESHYUXPIYGPUESVQHJJGNYFZJSTMEPSECRFIQQBAROWYDG");
    msg.custom.assign("QVFYIIZNEXCVGMFVIAMVQYIOEXVWHLTNOGCOSAURLFSXEYCOBFORVKXKKJBCWUMNLJJNMSHADZKBDUFMXPCCWTDEYFRXMEAHLGSQLPFRBACEQSKTEGYIHINI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.760220378498);
    msg.setSource(40081U);
    msg.setSourceEntity(48U);
    msg.setDestination(32153U);
    msg.setDestinationEntity(199U);
    msg.timeout = 15047U;
    msg.name.assign("SEVOAEJRRJKIKDHOVMUOIEXHPGEBQCHZOVFICFSFENVKRAJBMYQZFCLVCTJQQBXCTJKHZWTIUZJXWQPGNCPMTSTWDIZGEPDSZIYGUQGWRISWXYTOYGXJYBRLBMTUPRQHGRZUNLMBYPKYAARYKEXIWB");
    msg.custom.assign("CMTZAPXHGMVSEUUNLKWQBRDEFUTDNFMRXDMSCSANSOEOOLBWMOCWLEYPLAPQUNPPGFVKKZZXIPYTIVAGKKGAHYMCILNZYHANKDHSRJDABZILZZYCCNMVIOHYPHLHFOOZFDDITYQEQKIHBZSJGWXWJQXFIJG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.718645815636);
    msg.setSource(65337U);
    msg.setSourceEntity(191U);
    msg.setDestination(49784U);
    msg.setDestinationEntity(179U);
    msg.timeout = 55950U;
    msg.name.assign("JHUHXYVVLRDUWMLQJTQZKYQGNYIYIMYOLZQHTWYCFGODANNBOPGPSFYREDBHEXISNLXXXRDVWUPETCQSXTWTCCFKXMMOPMKANHUBYIMZYJLPCGSLZLASVWVJSJWEDPAE");
    msg.custom.assign("BZQKCWONMHIWMNXPZLNXIVBDHBASNCAMWTIZBNOIJTYBP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.72014560034);
    msg.setSource(16923U);
    msg.setSourceEntity(228U);
    msg.setDestination(17197U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.621707548346;
    msg.lon = 0.267222459219;
    msg.z = 0.127589277918;
    msg.z_units = 143U;
    msg.speed = 0.00552121800543;
    msg.speed_units = 20U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54047U;
    tmp_msg_0.off_x = 0.167595799027;
    tmp_msg_0.off_y = 0.309288276272;
    tmp_msg_0.off_z = 0.219451437552;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.877361967231;
    msg.custom.assign("GLDJXEBBERKHNSWBUAGEEZVPHIHPYKJBYHYFWIRKCSXLBQGXREOSLAXNGTEMOQNAHXPIZWXYWAMKCUSQQVYZRJDORKZBOTISTDZCIUCLMRTXUJTWXURBSYGTIJALQFVOLZLEWLUWOGRZVMEOOGPMEDCZVHPKCNSOCPJVNGCTVJIPUFFTQMMQDXNFIJSAWRPDMOBFVANTNDUDWYLQKFNYXDHZLCHMVQFYSHBYIS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.949716304857);
    msg.setSource(59267U);
    msg.setSourceEntity(33U);
    msg.setDestination(6309U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.975419656936;
    msg.lon = 0.674974280079;
    msg.z = 0.701871092398;
    msg.z_units = 29U;
    msg.speed = 0.874287115704;
    msg.speed_units = 202U;
    msg.start_time = 0.226559720192;
    msg.custom.assign("KMFUWZOOIFVKJGMUVWSOTUBMACMRRMTCKWNHFIYCBVRFVNJDFTBYNPNXSRTOHGMNQDYYKZEVNFRLQXOBPEPAMVBPRVAXBEHCOHPMQJAHVBZSOESKXRHUPBKJOQHKLVOCTCIUCYGJXKUJXZGJLWZEAWNVZZTXCQRAIAYDUZLCFTYXGKZSIHWFJBDENIKSHQXDLIGAOYDRLGRI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.641951594861);
    msg.setSource(59454U);
    msg.setSourceEntity(8U);
    msg.setDestination(3284U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.416113388059;
    msg.lon = 0.529103418707;
    msg.z = 0.0609832468303;
    msg.z_units = 156U;
    msg.speed = 0.674147534309;
    msg.speed_units = 219U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.312472978317;
    tmp_msg_0.y = 0.0967074189323;
    tmp_msg_0.z = 0.843174629963;
    tmp_msg_0.t = 0.39499165608;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.537345434992;
    msg.custom.assign("XUGQQGIMXCVBOGBGRSXWWTBAOWMMCTKEEHOREUFYCCSCZMHYZGRRTINCTFNPIFYNR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.640172569087);
    msg.setSource(18390U);
    msg.setSourceEntity(120U);
    msg.setDestination(34706U);
    msg.setDestinationEntity(56U);
    msg.vid = 65278U;
    msg.off_x = 0.566466455354;
    msg.off_y = 0.105449768196;
    msg.off_z = 0.387005620181;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.182707428065);
    msg.setSource(24376U);
    msg.setSourceEntity(45U);
    msg.setDestination(39096U);
    msg.setDestinationEntity(107U);
    msg.vid = 29627U;
    msg.off_x = 0.958871738668;
    msg.off_y = 0.908937529659;
    msg.off_z = 0.807286120779;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.581460739786);
    msg.setSource(53233U);
    msg.setSourceEntity(104U);
    msg.setDestination(11238U);
    msg.setDestinationEntity(239U);
    msg.vid = 56442U;
    msg.off_x = 0.300962569297;
    msg.off_y = 0.851874930719;
    msg.off_z = 0.729716006794;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.712002571382);
    msg.setSource(55896U);
    msg.setSourceEntity(88U);
    msg.setDestination(16528U);
    msg.setDestinationEntity(201U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.401917073871);
    msg.setSource(26158U);
    msg.setSourceEntity(66U);
    msg.setDestination(63927U);
    msg.setDestinationEntity(247U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.446411424341);
    msg.setSource(60611U);
    msg.setSourceEntity(232U);
    msg.setDestination(28309U);
    msg.setDestinationEntity(7U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.0222894459707);
    msg.setSource(63944U);
    msg.setSourceEntity(156U);
    msg.setDestination(53544U);
    msg.setDestinationEntity(21U);
    msg.mid = 52591U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.949623590075);
    msg.setSource(17096U);
    msg.setSourceEntity(20U);
    msg.setDestination(35247U);
    msg.setDestinationEntity(157U);
    msg.mid = 21603U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.583853091241);
    msg.setSource(15719U);
    msg.setSourceEntity(240U);
    msg.setDestination(44445U);
    msg.setDestinationEntity(5U);
    msg.mid = 6405U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.673970952971);
    msg.setSource(37370U);
    msg.setSourceEntity(141U);
    msg.setDestination(43951U);
    msg.setDestinationEntity(71U);
    msg.state = 136U;
    msg.eta = 14032U;
    msg.info.assign("UFNBLVDJVBPGSVRTKORZUDPOFWLLPNFEHTZLXSQRQQBIYSYPHXTNSSXFJSMUAGKTUGZWXEJFYOVSJWWTTDNRVERZGNLWAMITKVDENRJUKCOZEWXUBQBPIJAKBEOZIKYHGGFCWQHPVUYHBMABVCJNELOQGIZKELMMAHCCMDBTCYOHZFDTMLXAPINYQVYPDFJIPMWXABOCEGRXQHIXMCLSWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.739636909594);
    msg.setSource(51223U);
    msg.setSourceEntity(186U);
    msg.setDestination(25509U);
    msg.setDestinationEntity(109U);
    msg.state = 19U;
    msg.eta = 31435U;
    msg.info.assign("YTLRWFILRFDNDWAFNBYBUZQHJOKOYEXSYILHTGTDEGWEQGKEJEAEHODULRTNHONKJCRDSZKSLRSMUTWBKZTZQJQTCA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.928225542403);
    msg.setSource(14633U);
    msg.setSourceEntity(166U);
    msg.setDestination(1290U);
    msg.setDestinationEntity(32U);
    msg.state = 78U;
    msg.eta = 5537U;
    msg.info.assign("AAMSDFHGNSEMEOROIQQPDBRNTUPXIKCXDTFQFSAFATGBITYHBAKXRUKPRGZNGJRPXPVVMVLEPUFFXWHJYNCFIIDGTYAYXUPSMISUQAJZTV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.785818560626);
    msg.setSource(43077U);
    msg.setSourceEntity(130U);
    msg.setDestination(7050U);
    msg.setDestinationEntity(49U);
    msg.system = 1791U;
    msg.duration = 30379U;
    msg.speed = 0.833938758096;
    msg.speed_units = 149U;
    msg.x = 0.393172046861;
    msg.y = 0.780855645105;
    msg.z = 0.922919033322;
    msg.z_units = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.539722412878);
    msg.setSource(8264U);
    msg.setSourceEntity(35U);
    msg.setDestination(32656U);
    msg.setDestinationEntity(231U);
    msg.system = 47876U;
    msg.duration = 4163U;
    msg.speed = 0.305960783398;
    msg.speed_units = 134U;
    msg.x = 0.683518103371;
    msg.y = 0.474640466055;
    msg.z = 0.00601457430011;
    msg.z_units = 254U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.218853338478);
    msg.setSource(15437U);
    msg.setSourceEntity(73U);
    msg.setDestination(21402U);
    msg.setDestinationEntity(77U);
    msg.system = 41193U;
    msg.duration = 57565U;
    msg.speed = 0.441700555623;
    msg.speed_units = 115U;
    msg.x = 0.97411433263;
    msg.y = 0.976577734651;
    msg.z = 0.113319059674;
    msg.z_units = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.204138744238);
    msg.setSource(40801U);
    msg.setSourceEntity(67U);
    msg.setDestination(59005U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.349097761642;
    msg.lon = 0.70630921366;
    msg.speed = 0.488008361889;
    msg.speed_units = 115U;
    msg.duration = 23101U;
    msg.sys_a = 38982U;
    msg.sys_b = 43199U;
    msg.move_threshold = 0.57576229169;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.334287901365);
    msg.setSource(61508U);
    msg.setSourceEntity(15U);
    msg.setDestination(2032U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.97152446426;
    msg.lon = 0.435566218083;
    msg.speed = 0.812215840926;
    msg.speed_units = 76U;
    msg.duration = 24493U;
    msg.sys_a = 15738U;
    msg.sys_b = 19117U;
    msg.move_threshold = 0.615222580134;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.414477841961);
    msg.setSource(53831U);
    msg.setSourceEntity(84U);
    msg.setDestination(5776U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.877607827401;
    msg.lon = 0.971873681045;
    msg.speed = 0.959458253954;
    msg.speed_units = 136U;
    msg.duration = 23359U;
    msg.sys_a = 4834U;
    msg.sys_b = 57037U;
    msg.move_threshold = 0.168500408708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.167086836812);
    msg.setSource(60989U);
    msg.setSourceEntity(55U);
    msg.setDestination(36327U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.0475361332024;
    msg.lon = 0.440496284783;
    msg.z = 0.941314455343;
    msg.z_units = 169U;
    msg.speed = 0.283798375551;
    msg.speed_units = 30U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.28426169433;
    tmp_msg_0.lon = 0.338976300153;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("EVJQNMSARISBHDYRWJMQEMPBQATTMXUFZKEAQUNVEUDVVQNEBFYGPCILKOJPIMTGSHUHDUJFUUPBYZPOJRZCEGRTOFXKHVCUHGHAIJLIJCANFISBKDQWPPLPDGNXIYTTWTCHODLCOQRROZJEDNTVRMKFNEHADSWAQWRPUBZYDGXGXKZVZXPFKTSJLHXGISGVLCYCEYBOWLAICVWXFZMAWJVXNYBCOMREKBQUMFSLT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.483020371915);
    msg.setSource(61067U);
    msg.setSourceEntity(14U);
    msg.setDestination(44476U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.127116448107;
    msg.lon = 0.890701284851;
    msg.z = 0.38721315188;
    msg.z_units = 109U;
    msg.speed = 0.812423155865;
    msg.speed_units = 194U;
    msg.custom.assign("ZOEABTFVHIXNMUUEBIMGNJVZRMCQOYAM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.906643061428);
    msg.setSource(19171U);
    msg.setSourceEntity(95U);
    msg.setDestination(55992U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.0553737931647;
    msg.lon = 0.805478572615;
    msg.z = 0.0695098446939;
    msg.z_units = 234U;
    msg.speed = 0.942891060243;
    msg.speed_units = 32U;
    msg.custom.assign("TWFVAWCSIYPGXOSENFPUAXZFDHOQUHKUUADBILTRBRDHKVHGDBWHXLVSNLEXXNMFWVRCWUFAQZDNMMLPTKMKFFGVTPQUWYXTMGKNIRGERENKFHEDYSWOOPLMVKDXOESZTZLQJGSLABAIMFBFICCYLJJAPHGSNQJTGZPWYPINTKRDKJORCNISWJWV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.522353117733);
    msg.setSource(11573U);
    msg.setSourceEntity(213U);
    msg.setDestination(9914U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.681743250543;
    msg.lon = 0.12816156411;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.714592347818);
    msg.setSource(1434U);
    msg.setSourceEntity(158U);
    msg.setDestination(6679U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.797277688397;
    msg.lon = 0.591810894842;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.406904122155);
    msg.setSource(1784U);
    msg.setSourceEntity(188U);
    msg.setDestination(63419U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.842035544827;
    msg.lon = 0.247892957409;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.326093938702);
    msg.setSource(59129U);
    msg.setSourceEntity(79U);
    msg.setDestination(23233U);
    msg.setDestinationEntity(52U);
    msg.timeout = 44591U;
    msg.lat = 0.971387250325;
    msg.lon = 0.753098691534;
    msg.z = 0.883494026105;
    msg.z_units = 119U;
    msg.pitch = 0.720006799721;
    msg.amplitude = 0.0463931030731;
    msg.duration = 48196U;
    msg.speed = 0.97877979511;
    msg.speed_units = 191U;
    msg.radius = 0.713634177278;
    msg.direction = 26U;
    msg.custom.assign("VGXTQYFVFCIKSYPESOKYENLNJYRMOOSXPIQWBWIJJBIAHSGXCNXDRJNKSKEOYEGGNKQFYFCFPDBHUQCLXDMZXEYDATRLPRPFVIMZOHNMEJCCOXIOFKZZHJRAWUVEVZTGOFMJPKPMZRDCQUVYBEYIEGOLJWZIAGSSHZWLWDAMBDRUPZZHWTACSKNWBPRMJNULHUTMBDNOLJCIKVQAHHLMTTABQWXXNIUVXHFVRSDGFLKEVUAU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.96330715545);
    msg.setSource(41440U);
    msg.setSourceEntity(228U);
    msg.setDestination(26520U);
    msg.setDestinationEntity(55U);
    msg.timeout = 25033U;
    msg.lat = 0.608385814616;
    msg.lon = 0.0044977376373;
    msg.z = 0.47508426854;
    msg.z_units = 218U;
    msg.pitch = 0.819551887813;
    msg.amplitude = 0.635155063983;
    msg.duration = 25214U;
    msg.speed = 0.123224164895;
    msg.speed_units = 199U;
    msg.radius = 0.234615287797;
    msg.direction = 223U;
    msg.custom.assign("UUTMRTMXDIZCHGTFLXNJBLFWQEBPAULEUZGZYNPIVIFREGKARNJUAIICNGWKUSUCFEBVFHLYXYYOWFOGVXWRAOYJOJDDFQBGCZWYZDTBRHHAMQVJBLLEIROMXYOCWMTMLCAUDEVDYTLWRKPRZAZHGKDBNCNKVYAJSTXBHHSVRKFFAPHRTDAZTVVXNCGMSQSSJOKBXPYLU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.326738388449);
    msg.setSource(18883U);
    msg.setSourceEntity(223U);
    msg.setDestination(5298U);
    msg.setDestinationEntity(200U);
    msg.timeout = 20777U;
    msg.lat = 0.573900040191;
    msg.lon = 0.445091009484;
    msg.z = 0.0624979439298;
    msg.z_units = 64U;
    msg.pitch = 0.511408745105;
    msg.amplitude = 0.328905896487;
    msg.duration = 41226U;
    msg.speed = 0.864235454092;
    msg.speed_units = 40U;
    msg.radius = 0.249666931681;
    msg.direction = 73U;
    msg.custom.assign("NNKSSSXXGTRMLGCIIYCYULGDZRZXYULKUTWAQPHJCXZXLXTVHCMVWYFOIGWEIXULTNHMGUOGNCEYBAOHYHVZJGBBRABSTODEESODFPFDNVLHKQTFADNRBAAJMTQIIRYKSKDVLPOAAKUCPZQMUUKBYNOEWWXHZWBPUWMJFRRFTKBTVJVFCEIDLAENHJSHVJJLLCVZWDRGIMZHQWEONRQYVZEFKIUFPI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.568842694752);
    msg.setSource(15183U);
    msg.setSourceEntity(91U);
    msg.setDestination(19934U);
    msg.setDestinationEntity(64U);
    msg.formation_name.assign("RNCSOVRJCPJSUEKITTBLDFHUKARMQZPUMQPABMKZWNKNYEWRMBBPVPKMFVXLDQCSGNQJCXBPQOPAFDAITIDKUDYTHOOKXVHMHCSLXNFOVHKSOEEYEGSSJLXFQQVRGHWAZQHLCGZLWEHEBLZAIRYNGESYDWVCVZLZUFJJDYMANWTMRDNOYIYFFZYJXBZUIURUROSWGPGWJFEHRIGXWPKDPCANUXMCJBNTZYILTGXMHCEOGITXLQU");
    msg.reference_frame = 6U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 41902U;
    tmp_msg_0.off_x = 0.943542588768;
    tmp_msg_0.off_y = 0.0297512497894;
    tmp_msg_0.off_z = 0.627264628599;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BEHIQNOLRJMIEAWFFDWVOAEZFQFPFSAEGXYNIXTPUHQLDWPDWARLWNSSYCTADCIQGVAYRNJVOZYNEUOXBSSBMQCVLKQLIMQUWDLGAGJJZNLU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.911001488004);
    msg.setSource(61958U);
    msg.setSourceEntity(162U);
    msg.setDestination(57242U);
    msg.setDestinationEntity(0U);
    msg.formation_name.assign("WXNYSSMINKETNXZUDOWFUPTXIJKDGEOBOFEZGQVMZCUYPYWKQSMHJRISBNOZCPLTXCAOZWNCROSZKURUFCSNEPLVZJAJULUTRCHVMQERWDBDYBGVCFTJYBPUHKLFOGIWTDHHQFNQHKDRFDMGMWOTELMYZIBVXJISQKLBGHSJVLBMPRWPXJZNLGXAHYYQBMWIRAXEWFC");
    msg.reference_frame = 2U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42311U;
    tmp_msg_0.off_x = 0.368436135374;
    tmp_msg_0.off_y = 0.574251171231;
    tmp_msg_0.off_z = 0.373670040732;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YZFRGYYMBHUFEQJMNVEFEKFJVKYZPBMBEWDEZTDUHISYCGVUXVWGWMIPLKNRDBGHQGDRUSDCYIQZGSMPXOOICTXMMAKAXISPKTBXAGRKVOBFFCAODLBAVDBTOQWAWNTEOXHPLAQERLQTSAYWUSOSK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.965694303784);
    msg.setSource(12190U);
    msg.setSourceEntity(188U);
    msg.setDestination(11955U);
    msg.setDestinationEntity(46U);
    msg.formation_name.assign("THPKHRAKQWHVUBBAOMCDFIYSWWVVYOZZJZRVKCTPAMHFUYHT");
    msg.reference_frame = 10U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 30120U;
    tmp_msg_0.off_x = 0.233076800975;
    tmp_msg_0.off_y = 0.876324572652;
    tmp_msg_0.off_z = 0.776365100779;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YJDBGIDWIXEGFUGWYXLLHOVAEAKYBORLATHFPQFNRQMDPWV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.244446609634);
    msg.setSource(50991U);
    msg.setSourceEntity(11U);
    msg.setDestination(11754U);
    msg.setDestinationEntity(157U);
    msg.group_name.assign("CXCNPWUYBRUEOZPHWLCVIZJUSPTINEAJXRBFMCYIMAMCNWYFZQJBOQGJGQTNZWJSZDBRASATBTSCAVMRGCZTLQLUDKVUXKNSYTXDQJXGEPRHCOGFEOOOUKIYXSLMPYKWXSFRHQTDWUOWKPHJFUYRPPIZHLVLRRSPQXWYYTKTQMDNHHFI");
    msg.formation_name.assign("VEIOKPEPDSYIRVNJMUQIXETHOSEADBYBDTBXXNDPKKJFXCPYDBAWTFWXNWUKCFKNQAWWOMIWJYFALQQDGQSGFHWQKYZTMZDCPIEKTDEBCCRKPMNJUKGVASHUQIVLCSILFTNQECXFBJIZOVQPZYLYRVPXVMVOFMGEMRZRGUHTR");
    msg.plan_id.assign("WIQVHWBHCUWOMURLDQPWHANYTNPTTBYSMZNOSUXLXYVVWJIEXGQZANZVNYIKVTBPAVDYZNBDMRQBVCEQCZRWFKRKBGKKLTMZJVJOAXLTLFAUXPOGDCCIBDFKGHCUEDKBAHKJXGIIWWRUTLIDHMYUPQSCGMFGDQDWUZUBLVLNMQNAHXMYHNSK");
    msg.description.assign("MLTSZCDIXIGMHLNMSEZDHVGGZEAKJPZFALBMVNFTX");
    msg.leader_speed = 0.977880260769;
    msg.leader_bank_lim = 0.70366580055;
    msg.pos_sim_err_lim = 0.95569909144;
    msg.pos_sim_err_wrn = 0.589458980871;
    msg.pos_sim_err_timeout = 6881U;
    msg.converg_max = 0.828411714213;
    msg.converg_timeout = 20616U;
    msg.comms_timeout = 14333U;
    msg.turb_lim = 0.477054408658;
    msg.custom.assign("GKRHQWEPOKCPRERBSKHOELAHZQFDRDHLXSAJDNVCZIZQGWMXZQSLWMUZPCGOUDFATJOJNJAGUNQHLPZTMLWAFXCLABGDEBTSAQHRYKDVUTCBYGXWZQHBEEDXKTIPXQIFSSSCGFFVIVMMKJNBCNIVOVKUZARKWELQXYL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.399923025987);
    msg.setSource(27004U);
    msg.setSourceEntity(245U);
    msg.setDestination(36693U);
    msg.setDestinationEntity(247U);
    msg.group_name.assign("GSYMCYGXILMMUSNOWZJOTIJEGNTWFZEGZZZKTWFWTIVCQHRJKUFVNVYDXXOSFFQHQIUBITWNPVLRWLVRATBYSXJHYEDOQUUXUIRYTHUMBDENRLVCVDKDLSCBXWRVDASWMXDWZOJQNKCFMSCJKBQNIAPJUHPTIAMAPB");
    msg.formation_name.assign("NCXJRTEGLRSGHOOQMZTLEMMUUBLZRPWHFWSMEAOWEAZDOLUOJQKCFQLFENQWXSUSHPZLQXKEHDBGKHDPUQPLDXPPMGMARNXYOXYFRNGZFWGWCXTYIUVCLESVAQJ");
    msg.plan_id.assign("COUMQMVENGRJTDEKDGAQKOGPVVLSWRHMKQBHYDNXBRFCAVZIUTJQHDOSDEBGHPQXPBWBXQOPUWTAGNTDMTCAAPLZMZLXRYXIJYPHUGICTERNEHEIWYAXOYWEKRSQKYWJSUBLMNHLCSVAEIWZJFWCVLFUULFZPQJRXMHNS");
    msg.description.assign("KCYUEVMSESLVFBHXGXPZXCNYOVIIOJHXOGUJGTWRDEIYNO");
    msg.leader_speed = 0.439262888229;
    msg.leader_bank_lim = 0.0736992377683;
    msg.pos_sim_err_lim = 0.461670840408;
    msg.pos_sim_err_wrn = 0.839899778009;
    msg.pos_sim_err_timeout = 59924U;
    msg.converg_max = 0.977239269827;
    msg.converg_timeout = 31793U;
    msg.comms_timeout = 22977U;
    msg.turb_lim = 0.541848739546;
    msg.custom.assign("BSXGZZNRSYUUVUXUVGBIEWRJQFDZEDFVVKJNFAJDSTEKUKTRCBGOKPMACBOKIFYVGAZPUAAQGUCDLHAKHFCITYPX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.21123564155);
    msg.setSource(2219U);
    msg.setSourceEntity(218U);
    msg.setDestination(60979U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("CSWOQBJYMDEZSJXFYWABPBDQHOWGCLZSZTRXEKGPVHYEFJWAHUUJOMATROAKVKITXWBCFCTNDDIVMQ");
    msg.formation_name.assign("SXNIZCTXWKSPKXM");
    msg.plan_id.assign("SORBSFREJEXBXJNSYGPCMKYIVHIMKTXUMZMMTZZGKFIHFGLTIEITEUOKAVPKNHGNSRVZMPAHDPDASHOUEDLESARQOZHLGZNDBC");
    msg.description.assign("HQARGPIECBUVKSYRCKPREJNTVMNHAXWCSIPNBYWOOXRJRVCZNILEXFSPLIHGRMQVEWPNOYNANEOUTNXEGTFTPDQCAGKRKKHAGPVOWAJBTSTYQOMXMOYKVHDACIYIFRYVQDKWFUZTWMPCQFPIUZGUSODFXIURSLTRL");
    msg.leader_speed = 0.554962713215;
    msg.leader_bank_lim = 0.691441320835;
    msg.pos_sim_err_lim = 0.733503005885;
    msg.pos_sim_err_wrn = 0.409971503263;
    msg.pos_sim_err_timeout = 53348U;
    msg.converg_max = 0.246790791251;
    msg.converg_timeout = 5746U;
    msg.comms_timeout = 51146U;
    msg.turb_lim = 0.922793963077;
    msg.custom.assign("MVJGBAAXCOPWHLWCRDWRKOWMNGTHOVKYZPPEAMIUWRZLAVDYXNIQSNCCHPPQDLRQFPJDFHNTJQKXWBYDACSKXNKIKMROQLHZPYWGDDFEAVBWVUOFATGJJIGVXRMCP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.793563370591);
    msg.setSource(59558U);
    msg.setSourceEntity(183U);
    msg.setDestination(18101U);
    msg.setDestinationEntity(179U);
    msg.control_src = 7580U;
    msg.control_ent = 127U;
    msg.timeout = 0.284026743562;
    msg.loiter_radius = 0.72043650653;
    msg.altitude_interval = 0.851254104256;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.566697436476);
    msg.setSource(38199U);
    msg.setSourceEntity(157U);
    msg.setDestination(11987U);
    msg.setDestinationEntity(160U);
    msg.control_src = 56463U;
    msg.control_ent = 30U;
    msg.timeout = 0.554691127832;
    msg.loiter_radius = 0.656837978744;
    msg.altitude_interval = 0.69091329167;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.519553524093);
    msg.setSource(56393U);
    msg.setSourceEntity(64U);
    msg.setDestination(5707U);
    msg.setDestinationEntity(24U);
    msg.control_src = 26454U;
    msg.control_ent = 12U;
    msg.timeout = 0.749842118922;
    msg.loiter_radius = 0.548447696242;
    msg.altitude_interval = 0.740522529592;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.713221246519);
    msg.setSource(24345U);
    msg.setSourceEntity(235U);
    msg.setDestination(17050U);
    msg.setDestinationEntity(228U);
    msg.flags = 247U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.456940229357;
    tmp_msg_0.speed_units = 236U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.717289746203;
    tmp_msg_1.z_units = 98U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.273586716827;
    msg.lon = 0.0335433916485;
    msg.radius = 0.809026236281;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.881020834464);
    msg.setSource(7760U);
    msg.setSourceEntity(139U);
    msg.setDestination(31843U);
    msg.setDestinationEntity(42U);
    msg.flags = 107U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.196246558874;
    tmp_msg_0.speed_units = 175U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.742417213785;
    tmp_msg_1.z_units = 249U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.056073666323;
    msg.lon = 0.157065540226;
    msg.radius = 0.4407964612;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.550477765553);
    msg.setSource(15983U);
    msg.setSourceEntity(138U);
    msg.setDestination(921U);
    msg.setDestinationEntity(212U);
    msg.flags = 231U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.822763557906;
    tmp_msg_0.speed_units = 35U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.324284353995;
    tmp_msg_1.z_units = 57U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.695674396097;
    msg.lon = 0.273871865716;
    msg.radius = 0.621517426105;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.769761141874);
    msg.setSource(30131U);
    msg.setSourceEntity(183U);
    msg.setDestination(21050U);
    msg.setDestinationEntity(194U);
    msg.control_src = 6064U;
    msg.control_ent = 115U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 58U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.590104434557;
    tmp_tmp_msg_0_0.speed_units = 48U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.991790273127;
    tmp_tmp_msg_0_1.z_units = 178U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0692754145157;
    tmp_msg_0.lon = 0.691335846679;
    tmp_msg_0.radius = 0.891692620049;
    msg.reference.set(tmp_msg_0);
    msg.state = 147U;
    msg.proximity = 171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.199718733716);
    msg.setSource(58119U);
    msg.setSourceEntity(87U);
    msg.setDestination(2666U);
    msg.setDestinationEntity(219U);
    msg.control_src = 60909U;
    msg.control_ent = 76U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 42U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.331044309709;
    tmp_tmp_msg_0_0.speed_units = 115U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.515748284695;
    tmp_tmp_msg_0_1.z_units = 132U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.894923503564;
    tmp_msg_0.lon = 0.324481967791;
    tmp_msg_0.radius = 0.306532398427;
    msg.reference.set(tmp_msg_0);
    msg.state = 253U;
    msg.proximity = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.816156840126);
    msg.setSource(31527U);
    msg.setSourceEntity(160U);
    msg.setDestination(32508U);
    msg.setDestinationEntity(14U);
    msg.control_src = 23374U;
    msg.control_ent = 221U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 200U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0310468495922;
    tmp_tmp_msg_0_0.speed_units = 206U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.36803830363;
    tmp_tmp_msg_0_1.z_units = 250U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.758263804437;
    tmp_msg_0.lon = 0.619426264293;
    tmp_msg_0.radius = 0.547301373286;
    msg.reference.set(tmp_msg_0);
    msg.state = 79U;
    msg.proximity = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.872463131243);
    msg.setSource(26952U);
    msg.setSourceEntity(23U);
    msg.setDestination(65035U);
    msg.setDestinationEntity(143U);
    msg.ax_cmd = 0.690894449472;
    msg.ay_cmd = 0.78797290633;
    msg.az_cmd = 0.370186064525;
    msg.ax_des = 0.331981083332;
    msg.ay_des = 0.710034632271;
    msg.az_des = 0.898387107071;
    msg.virt_err_x = 0.14778042544;
    msg.virt_err_y = 0.407241732046;
    msg.virt_err_z = 0.83260617217;
    msg.surf_fdbk_x = 0.115912542563;
    msg.surf_fdbk_y = 0.103140283024;
    msg.surf_fdbk_z = 0.4354450962;
    msg.surf_unkn_x = 0.926462236335;
    msg.surf_unkn_y = 0.940847304255;
    msg.surf_unkn_z = 0.435594958226;
    msg.ss_x = 0.430244206992;
    msg.ss_y = 0.338562188767;
    msg.ss_z = 0.817800162569;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.908468493834);
    msg.setSource(62672U);
    msg.setSourceEntity(244U);
    msg.setDestination(16391U);
    msg.setDestinationEntity(206U);
    msg.ax_cmd = 0.804428309814;
    msg.ay_cmd = 0.921606935341;
    msg.az_cmd = 0.531442600375;
    msg.ax_des = 0.912330823734;
    msg.ay_des = 0.761061558107;
    msg.az_des = 0.94663709428;
    msg.virt_err_x = 0.811447558646;
    msg.virt_err_y = 0.635535414937;
    msg.virt_err_z = 0.657213251584;
    msg.surf_fdbk_x = 0.555700453033;
    msg.surf_fdbk_y = 0.0490987739946;
    msg.surf_fdbk_z = 0.700345013716;
    msg.surf_unkn_x = 0.0446771742176;
    msg.surf_unkn_y = 0.700196091689;
    msg.surf_unkn_z = 0.273895180521;
    msg.ss_x = 0.87142255938;
    msg.ss_y = 0.374699352866;
    msg.ss_z = 0.662206029627;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("XHFAFGJEIEEABMSBSYRBFTRBNNPZSQHQMTZFNXKSAXZLJFJRLDWGNSUVYZYVHPOIPFZRODIRWCOTAFTENRUVHPYMNRTJGAUAPATGBGMOXLSECQINYWFUBRYWK");
    tmp_msg_0.dist = 0.472514518941;
    tmp_msg_0.err = 0.0775059608011;
    tmp_msg_0.ctrl_imp = 0.528588429349;
    tmp_msg_0.rel_dir_x = 0.742263162244;
    tmp_msg_0.rel_dir_y = 0.00162273247827;
    tmp_msg_0.rel_dir_z = 0.885360956711;
    tmp_msg_0.err_x = 0.98586529486;
    tmp_msg_0.err_y = 0.270253114918;
    tmp_msg_0.err_z = 0.218203011458;
    tmp_msg_0.rf_err_x = 0.233936754616;
    tmp_msg_0.rf_err_y = 0.937494334374;
    tmp_msg_0.rf_err_z = 0.502763289644;
    tmp_msg_0.rf_err_vx = 0.617941929143;
    tmp_msg_0.rf_err_vy = 0.890773332424;
    tmp_msg_0.rf_err_vz = 0.420682820411;
    tmp_msg_0.ss_x = 0.871976353336;
    tmp_msg_0.ss_y = 0.471088954274;
    tmp_msg_0.ss_z = 0.39807924868;
    tmp_msg_0.virt_err_x = 0.142777841743;
    tmp_msg_0.virt_err_y = 0.133840320553;
    tmp_msg_0.virt_err_z = 0.965276317742;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.818164951098);
    msg.setSource(14528U);
    msg.setSourceEntity(115U);
    msg.setDestination(3469U);
    msg.setDestinationEntity(127U);
    msg.ax_cmd = 0.849244379096;
    msg.ay_cmd = 0.550777099064;
    msg.az_cmd = 0.551362134098;
    msg.ax_des = 0.423175470015;
    msg.ay_des = 0.550383047292;
    msg.az_des = 0.1542865476;
    msg.virt_err_x = 0.17095827167;
    msg.virt_err_y = 0.767956051156;
    msg.virt_err_z = 0.716839758982;
    msg.surf_fdbk_x = 0.978519593462;
    msg.surf_fdbk_y = 0.0898486954167;
    msg.surf_fdbk_z = 0.143752471182;
    msg.surf_unkn_x = 0.793891140753;
    msg.surf_unkn_y = 0.726392564842;
    msg.surf_unkn_z = 0.858015029951;
    msg.ss_x = 0.397695820445;
    msg.ss_y = 0.738965960425;
    msg.ss_z = 0.429249401545;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.608654609851);
    msg.setSource(24389U);
    msg.setSourceEntity(243U);
    msg.setDestination(26202U);
    msg.setDestinationEntity(101U);
    msg.s_id.assign("JEQTNSFDUNOAAKLLAQHSPAJYCJUFMZLBDNHEAKOVJPBBPXVTVFQRZGSHPRNNXEIMTGKVSWLQUBXTMTGUIQ");
    msg.dist = 0.7573787291;
    msg.err = 0.341203803988;
    msg.ctrl_imp = 0.122962126063;
    msg.rel_dir_x = 0.669805361386;
    msg.rel_dir_y = 0.411205617099;
    msg.rel_dir_z = 0.88202611513;
    msg.err_x = 0.625384470137;
    msg.err_y = 0.601398650618;
    msg.err_z = 0.412464130268;
    msg.rf_err_x = 0.86354904422;
    msg.rf_err_y = 0.577499647602;
    msg.rf_err_z = 0.587077836656;
    msg.rf_err_vx = 0.901867273104;
    msg.rf_err_vy = 0.0844125760057;
    msg.rf_err_vz = 0.509081026112;
    msg.ss_x = 0.214072017815;
    msg.ss_y = 0.897794521606;
    msg.ss_z = 0.358851609867;
    msg.virt_err_x = 0.423237165404;
    msg.virt_err_y = 0.509058571744;
    msg.virt_err_z = 0.691916535221;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.888914018124);
    msg.setSource(33018U);
    msg.setSourceEntity(126U);
    msg.setDestination(16543U);
    msg.setDestinationEntity(16U);
    msg.s_id.assign("VTQRHJHWWCPRKEOTFIZAERWFOQBACNNKMLAVEJVCDBOCZHGWTHXKOPUPHVQKOBZTGLNUYBRSQRFBBLQSFXAYMAOAWZAISIQSRHGYHMZPVIEQFMZYRLDTGJCMFDXDOABJDNWIZPPYCYNAVCVQXUKYMSLSEVENVIYEXKNJSESIKLBGTJBGEUOGRDSDPTOWYMPGXHTNNUPPLNFUXFJLWQUDJTDODCRJXT");
    msg.dist = 0.982706945017;
    msg.err = 0.601807524099;
    msg.ctrl_imp = 0.890953560227;
    msg.rel_dir_x = 0.50459640844;
    msg.rel_dir_y = 0.811461976735;
    msg.rel_dir_z = 0.968865979479;
    msg.err_x = 0.0258941340531;
    msg.err_y = 0.651039020812;
    msg.err_z = 0.0211120376992;
    msg.rf_err_x = 0.24793766894;
    msg.rf_err_y = 0.834816117657;
    msg.rf_err_z = 0.217751676081;
    msg.rf_err_vx = 0.216860582631;
    msg.rf_err_vy = 0.337555438234;
    msg.rf_err_vz = 0.307674733212;
    msg.ss_x = 0.838841273234;
    msg.ss_y = 0.650801975961;
    msg.ss_z = 0.908644690807;
    msg.virt_err_x = 0.332851329787;
    msg.virt_err_y = 0.672891813382;
    msg.virt_err_z = 0.0373846992625;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.0570473957253);
    msg.setSource(35502U);
    msg.setSourceEntity(58U);
    msg.setDestination(606U);
    msg.setDestinationEntity(208U);
    msg.s_id.assign("KFNBZRFTIEMWYILXNKEVJABZOXLOBDUHXQNQLAFSOWPZQFJJMOZYYHPQDZMDNSLWTDWAGYGLIZIGGGSGHYCHMQXAPYSUAJWNZNXNFOCBVDRBEMRFPELVQUNWLUMXATMCQKEVPYHWBHPQXRZGGHFRASMKTOKLPIKMVDIUCDMOYUPLJJUELKXVCVEJJBCIPATUQIYTUSXINSARNJFSAKHHSTYSFZTOGCIBOURDDCWECJRRRWPB");
    msg.dist = 0.628551825959;
    msg.err = 0.43953028392;
    msg.ctrl_imp = 0.910657993931;
    msg.rel_dir_x = 0.643292132776;
    msg.rel_dir_y = 0.0529886837083;
    msg.rel_dir_z = 0.982323089786;
    msg.err_x = 0.783014666879;
    msg.err_y = 0.466747774353;
    msg.err_z = 0.253108371366;
    msg.rf_err_x = 0.679333951615;
    msg.rf_err_y = 0.701379640845;
    msg.rf_err_z = 0.97208144946;
    msg.rf_err_vx = 0.388130649018;
    msg.rf_err_vy = 0.243637933412;
    msg.rf_err_vz = 0.396963697699;
    msg.ss_x = 0.591742420254;
    msg.ss_y = 0.700993520317;
    msg.ss_z = 0.149927398375;
    msg.virt_err_x = 0.704922540723;
    msg.virt_err_y = 0.68233646098;
    msg.virt_err_z = 0.707322313339;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.267390495778);
    msg.setSource(37072U);
    msg.setSourceEntity(52U);
    msg.setDestination(22153U);
    msg.setDestinationEntity(7U);
    msg.timeout = 48247U;
    msg.rpm = 0.549450131153;
    msg.direction = 151U;
    msg.custom.assign("QNLJHAZOKPRIHIVFXHZBHVDSBWVQBYTCBWZTIBSFSVRVJAQIPUKUTXDLUSOCDITRLPHDHPXBCCRDY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.889362112135);
    msg.setSource(60535U);
    msg.setSourceEntity(22U);
    msg.setDestination(24640U);
    msg.setDestinationEntity(128U);
    msg.timeout = 22117U;
    msg.rpm = 0.780248852152;
    msg.direction = 100U;
    msg.custom.assign("BYMCPIGHPKVINWFAVLBMRGSSBWNSULKPINYPVEHBFUHTFZHOZCSGQZJKKKDKZYIDXYATEOCOBDTSOTBUJBNFFEFGUVIDMEZYTZAWWQNLABXTUXXQENVDMLEYROHGQFUISWRPEAOUQZLJPGKOQSQZGEUXMPDWUWVEKLMIGBJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.203165568547);
    msg.setSource(15779U);
    msg.setSourceEntity(153U);
    msg.setDestination(7840U);
    msg.setDestinationEntity(241U);
    msg.timeout = 46554U;
    msg.rpm = 0.738329043688;
    msg.direction = 205U;
    msg.custom.assign("AAUTTPAJZHXFM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.747162552572);
    msg.setSource(64965U);
    msg.setSourceEntity(247U);
    msg.setDestination(37196U);
    msg.setDestinationEntity(179U);
    msg.formation_name.assign("JVZXBCMYZEBDXFHZYNLTAIHLTZMTINUJWPQTOTZMQNLHGFGFANPCDFWTCYHQYZJAHWFVRHKJOKZFDSEISNKPNXJPWRPYMKXIQVUFDLYJOEWSOPCKAXLCYRIQQRXLGPMGKZGFEMKU");
    msg.type = 55U;
    msg.op = 254U;
    msg.group_name.assign("WOJGPKGKHNYQUIKYDHCVOATPXQBXKNRZJBYMEAIYRENXUVSVXFNMBTQCAWAMXKWCUTNKQOTCIJCDGMLOJYFVOHYTSZRHBDXLMPNFRDRDGGGRGWSOUIBZHMSBALTNQZEVUDFEGELQEJHPOFRPDXADZMZHXFSROAILLOPSAIVKHZTUPWIFEZMPPQADUFBCISVWBIIPKXWSJNMQLLNUMGUJTKWRYYOLJKBZLRBJDHVQUECCNE");
    msg.plan_id.assign("IELHRWPYVQHLBSSVEFRSUXKBFVSRNMPCLZDFAPPNIWIDZRUOVTXBKIUZJFLDQZDXMOXDKJIAGKBHCENPRCJAYQMFGPJKGCIXMFEJQTUZNTGMVYRYFURVLUALIXAXKNWLGUBEUSTNOASOEMQTGOCQVSRBVKYCCHHUAZXEXFRCBPOWDFMDSNHDWJTINJWYKEIZWWSBGLCSYTPNOKPHLDJYHEZILOQGVZVOBA");
    msg.description.assign("TKQKTALHAGRGXVZVY");
    msg.reference_frame = 98U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 19613U;
    tmp_msg_0.off_x = 0.684945423559;
    tmp_msg_0.off_y = 0.907344403392;
    tmp_msg_0.off_z = 0.724071280881;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.610592165821;
    msg.leader_speed_min = 0.264883136176;
    msg.leader_speed_max = 0.646597944662;
    msg.leader_alt_min = 0.248236227213;
    msg.leader_alt_max = 0.487584932424;
    msg.pos_sim_err_lim = 0.565361440609;
    msg.pos_sim_err_wrn = 0.175721510997;
    msg.pos_sim_err_timeout = 33199U;
    msg.converg_max = 0.093509239076;
    msg.converg_timeout = 2774U;
    msg.comms_timeout = 12561U;
    msg.turb_lim = 0.277763476786;
    msg.custom.assign("EJSFBXUQTFCCQJODPLAAVGBUGEQMYBXZPTWYHTWFKLAQIOGKDRSQHRVEIZPRUKHAIOFFUKPWXSMISYVKTZNRLOAIUUDKWSICBWLXDLYORJHPWSGNCJLDYOIJTRVKXLMXJNQVRVFTZZZGJYIDDRHWNOVCBDSPWUQFHHNXGAEBQDETUMWNRCCCUKLVICUEPSLOBMXBJJBTXMPVYIKHMEYMSKCNPOZAAMAGSAJMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.615000558807);
    msg.setSource(50509U);
    msg.setSourceEntity(35U);
    msg.setDestination(12534U);
    msg.setDestinationEntity(141U);
    msg.formation_name.assign("OSXAEOAIIANKEOKPQWKPEZLTWEZTFXNUAHPDZTSFKDDXVYRJBJQBQFVXUTKFJXPCXRMHVDEGYVILEJZDATKGLPLRBNZOJIFOQQLARBMGZVJIMAKBIVRCNUTGHERVDSHBXTSRAMOAZOUEKOHUSEUSYYTNPRNJSNDJQPGZLHPZBLMBQGCMFHMNGHQCDMVIQMNYWCJQSOGBWXXPEINIDGSFTCW");
    msg.type = 87U;
    msg.op = 64U;
    msg.group_name.assign("TSECKNEZPLFBEKBXFSGIAJSEDQNCICEHAHQVTTAVSNWLOMRLAPOSUBHUMADHZXVOAUTUREVXILQXTLXBYKKXPZYJEJARNXYBGZSOZWSPSOQHZBRJFZICJHGQKUMEEPMAZLIMCVBOWQUNVLXORLNFBMTKFAMITLXDROGMRKCUIQHRDUHDQYPKQJIQVGVDKJIYWFGFWOPFGCGUJDYPM");
    msg.plan_id.assign("RMUQSROCZQLARMJJASXTDIEIGPBCKGMYFCUNPRKTKJNEHWVHNWRTYBRIWGYLQHVYEAWJLRLPEUHTXTQWFMMAZBNXDSKDWVUEWIXZVHMPQIFNOKMKZFBFKSDCCIOP");
    msg.description.assign("TVJGWHPOGEDLSCBETHZOBWAWFRNJGIGCSFVOLLRGQYUYZWDFAOOFCQPVYBXQBMVFCZDVGTSERHCJMDEKYSNDWJRKEVIZIDGTHRKSOCZNXSJIVOUTEKLRNZOVWDUOEKAPNFHOGQNIE");
    msg.reference_frame = 137U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55263U;
    tmp_msg_0.off_x = 0.33497515511;
    tmp_msg_0.off_y = 0.267775906591;
    tmp_msg_0.off_z = 0.826834808855;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.387089419172;
    msg.leader_speed_min = 0.972911165095;
    msg.leader_speed_max = 0.835098441925;
    msg.leader_alt_min = 0.81641797992;
    msg.leader_alt_max = 0.0672084822145;
    msg.pos_sim_err_lim = 0.259012625182;
    msg.pos_sim_err_wrn = 0.230664923124;
    msg.pos_sim_err_timeout = 23934U;
    msg.converg_max = 0.747262067426;
    msg.converg_timeout = 13478U;
    msg.comms_timeout = 11939U;
    msg.turb_lim = 0.24232155454;
    msg.custom.assign("HFPYXAHNOZRMESOMHKGFKPSYANINZYSQVVCFWEJMRZTALVKXMARBCFRZULHSNQCDBWGAMNPNNCTHSFQMCLPVIQHDJDKXDYLGUBMYTDEUXYLRCOAPGKNRUQHIJBWEOXEJCGKPAUONVCWESDVKXOJBOXOXDTGVBZBUEVPJFJVWISQWGBLSEHTRWYKJIXFGRATRDLGITBZCTPZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.220235688157);
    msg.setSource(63415U);
    msg.setSourceEntity(128U);
    msg.setDestination(23059U);
    msg.setDestinationEntity(1U);
    msg.formation_name.assign("MFRSHRLJBHRMHUCIKMYBVJFSSWWICPQJUQRWYXXFPDKIQGSEAEMYHXLAPTZEHJLWVGLLLSOQJBCUZMTPMVCYCVTTEBVSLCXZENQHCKACAQKDDZKDYOGUMIGXZNZOMKGKUEOOVSNUQFYBSHJGWSVNGNLLGRDOCNRAEYVXFRJVBXDSREJZGOXPONRGAFHBPTZDXKPKBIHAVEBUAIOIZE");
    msg.type = 41U;
    msg.op = 55U;
    msg.group_name.assign("NFPDOWRBFPNOMZBZQPHRVMYXBIOFGOJPLWVJDFBVPHQIYQKEXOKUBWSACMCUOSRNDEKZEGDTFMREBCQVNAYGYXXZEITCRLPLQAOKVNXHHYFYOVJGHNAZHWJHGFXALPDGCTRALUQAUZWMDWTIXLYKWTCGVDNYBESYACLQHTJNJVUIFBJSWMTRZAUZZCBIWSKKP");
    msg.plan_id.assign("DFFWVQKGJYBGMYTYIUATIDLVXNNUZZGDYCCIQMHPLRXCGMBIEDPWLFGFUNXYPUQPESNADNVLAEIXJCSLCKZRGWKAVZQCSSHIDBZ");
    msg.description.assign("GVFNWUGRYWLMICAQEBDJAXYVAISSSLSGLYVYTFHCSZEMDQOUUGXNKZAFLJKKZAAJHJFULJIUOTBILRD");
    msg.reference_frame = 236U;
    msg.leader_bank_lim = 0.407683039514;
    msg.leader_speed_min = 0.686543577739;
    msg.leader_speed_max = 0.510613571799;
    msg.leader_alt_min = 0.16703350927;
    msg.leader_alt_max = 0.897293741963;
    msg.pos_sim_err_lim = 0.941062878972;
    msg.pos_sim_err_wrn = 0.388230188552;
    msg.pos_sim_err_timeout = 5429U;
    msg.converg_max = 0.720582247483;
    msg.converg_timeout = 5336U;
    msg.comms_timeout = 52266U;
    msg.turb_lim = 0.779883307719;
    msg.custom.assign("GQGOCPZNDJVDQEELPFXIYLUGXTUNVOCUKZGOOEMXJGVOGAEYTIPAFEWH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.793198651166);
    msg.setSource(19704U);
    msg.setSourceEntity(88U);
    msg.setDestination(58237U);
    msg.setDestinationEntity(11U);
    msg.op_mode = 101U;
    msg.error_count = 152U;
    msg.error_ents.assign("GQKXAYOWLHWLJAAWULYFENTENCBOHPAHGPGXTKJZHEHYOJTUELQCPPUKOKWQWFCNTLQYQEMBRDGGVZXIABHYMRIXVVIZZEVYIAMNLAEGUQCBJVSBSDIUOBRFOZPKRDLJVQLBRRXGSTQOUIQMUPGOCMNJFPENFPMLEFCUTIPWLYFOH");
    msg.maneuver_type = 37460U;
    msg.maneuver_stime = 0.896364495229;
    msg.maneuver_eta = 9977U;
    msg.control_loops = 721120410U;
    msg.flags = 220U;
    msg.last_error.assign("UGIJHZTFJGEQTNICBXPLUDABKEQBXGXFNCUBOPAFOTKSKCPIOOZUWYVMKPYDWMHZQVGBSEXYLHPUABJPNSASRKOEYZBJNSEJFYTHNLRNTDJBRAQLRUCVQQTHHSNZELMDIFMMFJOCMGWZNBVOHCYAJVFEWDPVMYJHAYYQKBOUKCMCCGGIFCYSMGHAWVPGSRQAIWWTZFXDSAORQXIJXLKLRUDLWXTEVSDWIFDXZOLPRVGHUXN");
    msg.last_error_time = 0.631355082343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.630582309039);
    msg.setSource(9952U);
    msg.setSourceEntity(148U);
    msg.setDestination(19591U);
    msg.setDestinationEntity(208U);
    msg.op_mode = 221U;
    msg.error_count = 242U;
    msg.error_ents.assign("ZOTBLOCQJZUVXPSGTRHKSWJHQQCZIULEVNTLJZVNARSPMKWNDUASSBAGITTOSGONIXKTDLBFGOGDJKZYFDFRPQBTXXCSCHTRIOQLSZMMIEVMKIC");
    msg.maneuver_type = 21789U;
    msg.maneuver_stime = 0.686278400205;
    msg.maneuver_eta = 39466U;
    msg.control_loops = 2551557518U;
    msg.flags = 13U;
    msg.last_error.assign("UGKITLCDZXDHCKQHMBFZJSOUWDEUFJYNAZLWTMISBUQAOVQIZRLVNXYYALGUNZVPIPFGPIKUDLNMWRXRCIYTRCMXUHQITCXYENQNMKBXDSFDIADFKMWJHEGWLHFGFMKSOOLWWVSQBHZZGCQPGEONTNWRYAVKHSJARHOKTDJGCLQCXSRZJSKFPXSMCBESJDJFVGXUJBOLWQHCRZUAEMJOA");
    msg.last_error_time = 0.558209926412;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.115763965069);
    msg.setSource(52029U);
    msg.setSourceEntity(182U);
    msg.setDestination(42045U);
    msg.setDestinationEntity(230U);
    msg.op_mode = 126U;
    msg.error_count = 119U;
    msg.error_ents.assign("TBTFMEOZUTCNOZCJRPQQAAIFUVQQYXQDKV");
    msg.maneuver_type = 36958U;
    msg.maneuver_stime = 0.801951074591;
    msg.maneuver_eta = 13021U;
    msg.control_loops = 3074879988U;
    msg.flags = 67U;
    msg.last_error.assign("HBMEMNVZTOPSRTFWGYAKQTRAILIVZV");
    msg.last_error_time = 0.0456955534673;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.412951696999);
    msg.setSource(26722U);
    msg.setSourceEntity(80U);
    msg.setDestination(64087U);
    msg.setDestinationEntity(250U);
    msg.type = 87U;
    msg.request_id = 47088U;
    msg.command = 178U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 4808U;
    tmp_msg_0.lat = 0.674687787493;
    tmp_msg_0.lon = 0.508253534694;
    tmp_msg_0.z = 0.0708794692607;
    tmp_msg_0.z_units = 176U;
    tmp_msg_0.speed = 0.823622393801;
    tmp_msg_0.speed_units = 174U;
    tmp_msg_0.custom.assign("DXZTYOGAKFGFCZQWZHZWTVABGYUZIINKRQDFZYGPRSFEZMLVXNXCAWLPXSXLFWFORMUBUEAMVYDOWGV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 18636U;
    msg.info.assign("SCTSZMUYBUQPLLKOVEIYENOMUOAQTWCNYGZBRAZAPORBTIJAQDJLBLNIAVFQWGFSDRNXWBYYOUASMOHEWFWLTHJJIQJUMDQGJNSMWVYXHBUROXD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.425870605248);
    msg.setSource(18432U);
    msg.setSourceEntity(91U);
    msg.setDestination(4332U);
    msg.setDestinationEntity(201U);
    msg.type = 203U;
    msg.request_id = 30456U;
    msg.command = 222U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("IYWVBRVCBCHXUYEXMFUSGPKGODEQUFCZMFUAZMYEQESJHNAIOZQLTCTERPAVLYLOMYGZPWBSVIJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 31004U;
    msg.info.assign("IJNRFLWUZBWPZKBAPFUNAOPGPUSEKALVJFQNUVUSTQQQTLKTGGIEEXLXMYKTYHPXNOVZTKYHDSPDDBJDICXXODXWOTAPLGRZIBHYBREPDDEQSFFVFGMGRVHXUZYSAWHLRNDNHMXODLKYEXZRVTIRZNTVLOECJHZMGQPUKCMGCYBFBWIRBEAHJWIKMCVNUEWTZQAGGNCYABCLJYBSSAKSCFLOJXHMKVUMFWHNWOWJOJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.433447245377);
    msg.setSource(11059U);
    msg.setSourceEntity(24U);
    msg.setDestination(25968U);
    msg.setDestinationEntity(76U);
    msg.type = 57U;
    msg.request_id = 40627U;
    msg.command = 39U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 49640U;
    tmp_msg_0.control_ent = 10U;
    tmp_msg_0.timeout = 0.89141542268;
    tmp_msg_0.loiter_radius = 0.0655565889673;
    tmp_msg_0.altitude_interval = 0.811712374995;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27537U;
    msg.info.assign("XNCBBYMAGXKSUFXTDBEFQQNRKZFXDDVUQARUKOKZNVIFCDOIUZRFTMHHTLMVARECRZLTGETKJSZEMLPBVMOGPWFNLIBTEXNEWSGJPXKSNIIECDQGKJROYNCHOXWCABHRWUIWFIHQSLUVPMYHJATIVMZSENQWUGAHTSVNOQLVWXRPDUSDGWYISCMOHFLOTTQHW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.357993651772);
    msg.setSource(1788U);
    msg.setSourceEntity(193U);
    msg.setDestination(32164U);
    msg.setDestinationEntity(76U);
    msg.command = 230U;
    msg.entities.assign("OHQQPPTBBJTMKFKWQHZCSHWYTBRBZYYCWXLPCHLPCTNWDATKGVWWRXMLORVTXMOUPC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.410797778117);
    msg.setSource(17723U);
    msg.setSourceEntity(100U);
    msg.setDestination(26267U);
    msg.setDestinationEntity(247U);
    msg.command = 243U;
    msg.entities.assign("ILFWNYHGTNOVRWMCZASRFVPSFQDUXLSBHIPMJDVUEBNJTNCJKTVWAWPORIHTUQJASHPXRMIIYVKJFZZIBCBRHOHPOCYAMGZPSSRVYVANMZQAKANGMDKYTCCPGXKWXJZQDSUODGRYLQDEOWUUONEMARHYLHKPCZPZDWQEGZOBBLYEAVSLTUOTJGXNFBEFBXEMRSEGBJGTVOGQFXIKXMDIJLNFJDIEELKIWTCFPQHWKWLUQYRSCAXKMHB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.780934817697);
    msg.setSource(51734U);
    msg.setSourceEntity(18U);
    msg.setDestination(3775U);
    msg.setDestinationEntity(175U);
    msg.command = 253U;
    msg.entities.assign("VATKVLXNMWNQIEBEPNOIFGNBLI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.332399416315);
    msg.setSource(17053U);
    msg.setSourceEntity(86U);
    msg.setDestination(50157U);
    msg.setDestinationEntity(51U);
    msg.mcount = 235U;
    msg.mnames.assign("TCUBIVMYESXWJSZLLORQOIRPLOTEIZQHSCHNPNHXXXDWKVVJRPELKJPQGYKGRVTHUPEJVDZJPEKQYRCFATDRSFKPSILLVNOAVYYLBTNMQFAODSYPNWHGWCUNOOOTZCHAFHBXBKFKDGXDBMZCMTIGVGLSCBURCNNJJXEWGLXYMFQIFFEAZD");
    msg.ecount = 60U;
    msg.enames.assign("OYIQMHFCGPKGASXHHEPTDOLLFWESKRHAPOOEDCPKJGNADKZRCUJFBSDNBMBMVIXAJOECUUTRJJQQSLAYXUYIFPCRFSUXNLKFQMTIESHHISLVSUZCJOBWKYYTCEUKAQMYVRZVTMPFAXBBGXIEAOHMAJUZDIDD");
    msg.ccount = 119U;
    msg.cnames.assign("HVUTEEOPBJQNZGCFOCUUYVRSSBASVCBYQWNPLVAJLDWAYINPWUMFTZRLQYTXJXSIDRBHGOMENFPXJBZWTTCYEPKSOTUJLZROFWYHANZFLSGGQIJAYIULQMLYYKDWUXCTNPOVLOLBTKZMCNDIO");
    msg.last_error.assign("YHWGGKHBASYBYBMCZCLSTHLBFAJQTZGYEZJIIXVNWCIEQGWGEQYLMZXAIAYCVORDXLCPDNSJFNHXIMXPLVWMZPFHXUROGFRFLPLEASBCOMKPDMEDBVTUJUKBBQREBCENWOTAZVIJDULSOZOQPFXAJDONZEAZMSRZXCDGUTSSVKJOCUKJPXTLJNGKDNNWQUUE");
    msg.last_error_time = 0.506598890547;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.0605628137727);
    msg.setSource(22230U);
    msg.setSourceEntity(254U);
    msg.setDestination(64341U);
    msg.setDestinationEntity(48U);
    msg.mcount = 241U;
    msg.mnames.assign("ZOXTJHGIOPSCPUCEDYYZEQROOGBUVMURSFLQHHBAERHDVWGUMUHZGULTVJSFSDPTEDRJDGZBUTJNZWXKYIAORGPVIPQCAKAENTIYBDMPBNWNWAMWXTNTFLJARIOHERQDQBBNICZKSSVPKNRQMCYGCHVKPIWSCXSSPUQCF");
    msg.ecount = 141U;
    msg.enames.assign("VEFUWRMYYYRBJDBAUKIMPQDVDAFIHLJNZAOFPRAYDGAXZRJUZLKRDIYMCBHBNLIQQKBGAGCHEJBKWYZTZVSFRHXBHUJGWFVWNMSXEQKMJUUSHVPPTPTLWCJWMCXQLLFQSWEVLKVAFNOTAZDNOSDHGKBNUTMFVJGXPER");
    msg.ccount = 197U;
    msg.cnames.assign("KKFSDQSZCWDGFOCNCRQURIWYPPFCYQEUONEJGJTMJIWEIRWZMWMOFSSMHAPIXBVHVDBQGXCKLDRPBPLVZOEVFEOAZSXIZN");
    msg.last_error.assign("YTTFLOVOEGDEMORFYKYLQGCCRWTEJVPHHBOCPPCDJYHFTIVUHBGJCAOINFXHUBTNKVQXCBYSSWKKSPZZXUZGFPZIAZAREWVJVYOQWKVYRKEROQDSFSGUVBJRTWRXAJMXQKMXNKCWETHRRPIECHFWKGNYWQDJZNFPSCPXBORIUPOMNENDTBDAXMMGETMLWYLOUDIIZYWSDDQG");
    msg.last_error_time = 0.511959731004;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.32000541936);
    msg.setSource(56207U);
    msg.setSourceEntity(38U);
    msg.setDestination(28746U);
    msg.setDestinationEntity(184U);
    msg.mcount = 5U;
    msg.mnames.assign("GZVZNPVGEDRAWJCNDNPYZHXIWOBGOHBXTOACQTYOUCYKJXBSBWDBCLZPIDUVSEYZNKUIQAGZRPHDRHUCQCKHQITTUEESVFDNVWDMKAALJVKNOHPGZDYTPFGJJTHCFFZVXIYMWJYXLUKNMOQRJMWDSMOPLZPAMVCTLVFBLTHDRARKXNQFEFAIBCIXOFOKTUYQXSHBJRGTMQQNUMJESOWPJLIHGMWSWCEXLZRSFURQA");
    msg.ecount = 179U;
    msg.enames.assign("YNYDFDEGADVNDIDWOHHNLNKMXBBZTCRKMCENXPLQCZHYALEVTRQJIYQTYVECIGSCBARQQNWMPWKREICYELUGKMFDXIDUAURAFBOZVECSPHVUPFTTVKSEXVORNCBOWSASLSEUNPGMWQTWTHNSSXAGXBPFIOALDIVWNQOTIJBHBOJQAZUUAOURJJKIFJGLFOKLDZXLFHBWGMPQDHMSOZIJRZ");
    msg.ccount = 61U;
    msg.cnames.assign("VAGRJQGDFLEMXBSHIGYFNOWQMNZYJKRHSPYGAMWIZVZIDZKAHPZVIBCAXPHUHBKKQOZRJFRLSQXZEWLDKBMUFUSECSYNQDTEISJMHIVBRTADXJVTXXAFOKMZOIPQCJOTLTNDQJDLQTYYUBNNOWJRZWATUYTLFXADWMPKVCMSAJGNQFWIELGYLVHVCFCUBESHJRWTPWXCWKOGMHVXESNPCSIOLKBOZMYBKGHYIPRFQDRP");
    msg.last_error.assign("INDBEVXXLTTXICGFAFANMBCSZJYVXOPRTSPPOFZKIEYAZJVTFUQEXHKSDOKNGJAFSVWUQKWMPYEQEUBMHJBHCE");
    msg.last_error_time = 0.796308981823;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.465804809536);
    msg.setSource(35861U);
    msg.setSourceEntity(115U);
    msg.setDestination(61523U);
    msg.setDestinationEntity(158U);
    msg.mask = 155U;
    msg.max_depth = 0.950375969179;
    msg.min_altitude = 0.992076317446;
    msg.max_altitude = 0.743407322092;
    msg.min_speed = 0.0715928574384;
    msg.max_speed = 0.6589241122;
    msg.max_vrate = 0.0744389091795;
    msg.lat = 0.715473743207;
    msg.lon = 0.863188840935;
    msg.orientation = 0.679474513287;
    msg.width = 0.587168645122;
    msg.length = 0.652329262699;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.705528960328);
    msg.setSource(28786U);
    msg.setSourceEntity(140U);
    msg.setDestination(62322U);
    msg.setDestinationEntity(171U);
    msg.mask = 248U;
    msg.max_depth = 0.884407907936;
    msg.min_altitude = 0.90221036561;
    msg.max_altitude = 0.555413406065;
    msg.min_speed = 0.0153515852117;
    msg.max_speed = 0.53232191932;
    msg.max_vrate = 0.436422937798;
    msg.lat = 0.366591166097;
    msg.lon = 0.32588896647;
    msg.orientation = 0.881009535631;
    msg.width = 0.0666502491475;
    msg.length = 0.28083933404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.759247026125);
    msg.setSource(1588U);
    msg.setSourceEntity(237U);
    msg.setDestination(16351U);
    msg.setDestinationEntity(14U);
    msg.mask = 33U;
    msg.max_depth = 0.725161697241;
    msg.min_altitude = 0.535752221787;
    msg.max_altitude = 0.979374612583;
    msg.min_speed = 0.370753358124;
    msg.max_speed = 0.269751102196;
    msg.max_vrate = 0.982354773737;
    msg.lat = 0.880985866444;
    msg.lon = 0.0362254613639;
    msg.orientation = 0.386930416786;
    msg.width = 0.7666982233;
    msg.length = 0.694149767804;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.326837125079);
    msg.setSource(28773U);
    msg.setSourceEntity(197U);
    msg.setDestination(32490U);
    msg.setDestinationEntity(234U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.889367657165);
    msg.setSource(22427U);
    msg.setSourceEntity(29U);
    msg.setDestination(48474U);
    msg.setDestinationEntity(126U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.790732017194);
    msg.setSource(18040U);
    msg.setSourceEntity(128U);
    msg.setDestination(46465U);
    msg.setDestinationEntity(55U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.322601936429);
    msg.setSource(26664U);
    msg.setSourceEntity(145U);
    msg.setDestination(2842U);
    msg.setDestinationEntity(164U);
    msg.duration = 23329U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.576492509477);
    msg.setSource(21912U);
    msg.setSourceEntity(158U);
    msg.setDestination(46992U);
    msg.setDestinationEntity(212U);
    msg.duration = 38725U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.460996219074);
    msg.setSource(65040U);
    msg.setSourceEntity(64U);
    msg.setDestination(1708U);
    msg.setDestinationEntity(129U);
    msg.duration = 55012U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.86145722402);
    msg.setSource(14416U);
    msg.setSourceEntity(8U);
    msg.setDestination(44036U);
    msg.setDestinationEntity(223U);
    msg.enable = 244U;
    msg.mask = 1733007714U;
    msg.scope_ref = 3760454141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.755558994784);
    msg.setSource(17810U);
    msg.setSourceEntity(116U);
    msg.setDestination(14724U);
    msg.setDestinationEntity(119U);
    msg.enable = 9U;
    msg.mask = 406678371U;
    msg.scope_ref = 2121305744U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.416339407618);
    msg.setSource(40149U);
    msg.setSourceEntity(238U);
    msg.setDestination(1837U);
    msg.setDestinationEntity(105U);
    msg.enable = 38U;
    msg.mask = 2422324788U;
    msg.scope_ref = 2980231036U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.00104376979646);
    msg.setSource(59359U);
    msg.setSourceEntity(234U);
    msg.setDestination(53439U);
    msg.setDestinationEntity(185U);
    msg.medium = 196U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.967180705221);
    msg.setSource(37380U);
    msg.setSourceEntity(49U);
    msg.setDestination(2868U);
    msg.setDestinationEntity(161U);
    msg.medium = 144U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.967445363017);
    msg.setSource(43598U);
    msg.setSourceEntity(14U);
    msg.setDestination(12442U);
    msg.setDestinationEntity(177U);
    msg.medium = 77U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.418131114164);
    msg.setSource(39021U);
    msg.setSourceEntity(181U);
    msg.setDestination(6667U);
    msg.setDestinationEntity(80U);
    msg.value = 0.5858886958;
    msg.type = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.0155817302732);
    msg.setSource(20870U);
    msg.setSourceEntity(250U);
    msg.setDestination(43059U);
    msg.setDestinationEntity(90U);
    msg.value = 0.0393633602393;
    msg.type = 196U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.869564837788);
    msg.setSource(9887U);
    msg.setSourceEntity(38U);
    msg.setDestination(53899U);
    msg.setDestinationEntity(16U);
    msg.value = 0.976826331895;
    msg.type = 186U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.332942939519);
    msg.setSource(56929U);
    msg.setSourceEntity(130U);
    msg.setDestination(21972U);
    msg.setDestinationEntity(88U);
    msg.possimerr = 0.671229628638;
    msg.converg = 0.263862133787;
    msg.turbulence = 0.9383319053;
    msg.possimmon = 244U;
    msg.commmon = 26U;
    msg.convergmon = 79U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.779603623655);
    msg.setSource(25432U);
    msg.setSourceEntity(168U);
    msg.setDestination(11914U);
    msg.setDestinationEntity(234U);
    msg.possimerr = 0.167327612656;
    msg.converg = 0.248827366028;
    msg.turbulence = 0.869532843194;
    msg.possimmon = 216U;
    msg.commmon = 35U;
    msg.convergmon = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.0373259483531);
    msg.setSource(5851U);
    msg.setSourceEntity(38U);
    msg.setDestination(34221U);
    msg.setDestinationEntity(233U);
    msg.possimerr = 0.778464304028;
    msg.converg = 0.799330280242;
    msg.turbulence = 0.580487649861;
    msg.possimmon = 81U;
    msg.commmon = 180U;
    msg.convergmon = 110U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.279609609192);
    msg.setSource(16751U);
    msg.setSourceEntity(127U);
    msg.setDestination(25196U);
    msg.setDestinationEntity(167U);
    msg.autonomy = 151U;
    msg.mode.assign("TMXQXBKDQTOCQRZRYGHNZRNSAUBWSVEHIWSREGGCXEXFCSKBVGDEYAFXMMNPWQCCZLGMRJAKLBEYLSPFLUYCVBZWJRNHVTSGTFBMTUMJUQONTGONPVFORIXPIXUOPXJOYFHMBAULYDDABXDAWYFBKRPWELAGFPZHVWVAYKSFNNJDZHZJIPWDIJQMNXLBQOHPQCSMJU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.192766485067);
    msg.setSource(8737U);
    msg.setSourceEntity(242U);
    msg.setDestination(11553U);
    msg.setDestinationEntity(134U);
    msg.autonomy = 8U;
    msg.mode.assign("UMLTQQZRYPZWIPAFQHGYPUWIBKFJUSVUOBAFWCIEIUDDJLRRDEOMVQGTYNTLZSJASCYIFSTFNNTTGNLKCSRNIMQLWBWVBYUGMYCIQDIJWXZKWRWXXITUMZGGHBDXDJVNVTSO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.896596102868);
    msg.setSource(48165U);
    msg.setSourceEntity(228U);
    msg.setDestination(54028U);
    msg.setDestinationEntity(191U);
    msg.autonomy = 109U;
    msg.mode.assign("BSRXTSKNPXIYLBCSGBLGKUJXAPYGCQBVLYAHMHAVZBZKZLBJSISHAOJJDLFUNGBNCQEVFIJYVYWIOZJXQVRQDZQKUHREHZPTFPHUTLTOLTRWGHRWQFJGASUDYEM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.206755664037);
    msg.setSource(17282U);
    msg.setSourceEntity(170U);
    msg.setDestination(56627U);
    msg.setDestinationEntity(240U);
    msg.type = 163U;
    msg.op = 37U;
    msg.possimerr = 0.968663407414;
    msg.converg = 0.716089091272;
    msg.turbulence = 0.65561839148;
    msg.possimmon = 69U;
    msg.commmon = 63U;
    msg.convergmon = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.822781311658);
    msg.setSource(60026U);
    msg.setSourceEntity(206U);
    msg.setDestination(24219U);
    msg.setDestinationEntity(180U);
    msg.type = 249U;
    msg.op = 176U;
    msg.possimerr = 0.576467565815;
    msg.converg = 0.00188219534758;
    msg.turbulence = 0.896369873318;
    msg.possimmon = 52U;
    msg.commmon = 131U;
    msg.convergmon = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.340513578354);
    msg.setSource(16760U);
    msg.setSourceEntity(224U);
    msg.setDestination(20551U);
    msg.setDestinationEntity(28U);
    msg.type = 5U;
    msg.op = 65U;
    msg.possimerr = 0.800605042255;
    msg.converg = 0.669433070945;
    msg.turbulence = 0.946541911011;
    msg.possimmon = 25U;
    msg.commmon = 172U;
    msg.convergmon = 47U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.695578168697);
    msg.setSource(39507U);
    msg.setSourceEntity(160U);
    msg.setDestination(312U);
    msg.setDestinationEntity(28U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.514620614334);
    msg.setSource(21838U);
    msg.setSourceEntity(162U);
    msg.setDestination(18514U);
    msg.setDestinationEntity(201U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.138528975782);
    msg.setSource(17773U);
    msg.setSourceEntity(191U);
    msg.setDestination(5765U);
    msg.setDestinationEntity(90U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.938582283025);
    msg.setSource(27873U);
    msg.setSourceEntity(41U);
    msg.setDestination(61364U);
    msg.setDestinationEntity(174U);
    msg.plan_id.assign("HQFFYNIZNJLVXEQGTEIRRSXROSIFTCOCMSGHBYXPVSAOJJTFPDOOWQHHMZNQERBPKJQFZKDEUZUMEYCVQDVNKVF");
    msg.description.assign("MEMQPBYZTMZIWXLRSGTITJQVAVGGWMTFKBBLEDOGPDRFZOLLBJIJLICUXWEXCEFUGWYIRFSDIRBBAXZTAUMSHLCJWACOXAHERVHLTYSQNETNPSOMNKNPHCOFSGQWKUXDXVMBIGMJVBDICYOSARDX");
    msg.vnamespace.assign("ACTEFLQORYJDNZFSMFYGOIJUXVQEOGYPYRIFQVKQMORSABAJDHLNTMNLSOCMNIETRCUJBVUYLQCLDZOGAHIVEFUKSNUGOLCEOPDKHHINCVRSUXW");
    msg.start_man_id.assign("VVLSAULBEGNANPJBMHLISVYOWDCXTUZDCQCUSEHNZFSHKWGJVJWAYNMZJRQHKAYUKFXWTPWXWXROJBPBBKHBDPZTHXMRTYPEEWFPNXAVKKMQMASFOIZOFBGPYFNCXCMKTILRJVVXCQIWYMGQSYTGVXEIJIUMFGVRRBYZDZJKQPODGLEAD");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("SCTBBEQCPTPSFGEQUUYCQVTUCXYHOYFAIHMZOXPWCLXEVHDEWTQRICGMNJOTEHFKDTKVKSGREWNRQKXNXUBSYZDRPGJYGJPUZDPBYEFBNSZPXZHGXIJOMMAIXCEMWIREOKIBUDHSSVGXQKALNJLHNADTYRIMSWQFQTJLLCRVUAFLYWADXHVQZWVCVERZPBKLDBLFVZGWDCSKJNNHMIPUFAUNAAWODSIOVGONKWOMZHPOJBIT");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 52982U;
    tmp_tmp_msg_0_0.lat = 0.75424850644;
    tmp_tmp_msg_0_0.lon = 0.268564130662;
    tmp_tmp_msg_0_0.z = 0.72947924096;
    tmp_tmp_msg_0_0.z_units = 209U;
    tmp_tmp_msg_0_0.amplitude = 0.354008397262;
    tmp_tmp_msg_0_0.pitch = 0.298783253073;
    tmp_tmp_msg_0_0.speed = 0.997770588869;
    tmp_tmp_msg_0_0.speed_units = 193U;
    tmp_tmp_msg_0_0.custom.assign("KCBOZEWVODJBCDLHRIKVAUYFIPJGEENITMPOGJHKBSLHTMGLBECNVUJDYZWUBUVNFDNLXKDJR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PopUp tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 38931U;
    tmp_tmp_msg_0_1.lat = 0.0574009987427;
    tmp_tmp_msg_0_1.lon = 0.584880654587;
    tmp_tmp_msg_0_1.z = 0.971848347619;
    tmp_tmp_msg_0_1.z_units = 3U;
    tmp_tmp_msg_0_1.speed = 0.412960445924;
    tmp_tmp_msg_0_1.speed_units = 177U;
    tmp_tmp_msg_0_1.duration = 39952U;
    tmp_tmp_msg_0_1.radius = 0.214526416784;
    tmp_tmp_msg_0_1.flags = 110U;
    tmp_tmp_msg_0_1.custom.assign("GXOVDWUCBZRVTPFIWJKGNJHMXBWIAKIWRZPDYFKOQUMAPDQFXKRZNOKHQHXESEBAZQFYRLQAXAUATBTPBWDGSND");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("OVMOQQNPQDLXKPMLYVILIXVHBVECXJKPDJDATGOBAQTIQDHWSDWSYEADHRXPYTJZBSIYYLVVBTPIARLUJATJKWGMMRFYVHGFFFZYBU");
    tmp_msg_1.dest_man.assign("YTEOAPLUHSATIMJSFYIBBTFGYJCWHEYRENPUSDGTRBAENROLUVZNOIXNHGGHXRVMAFJDWYMDLQHFJXSMGTRHZFW");
    tmp_msg_1.conditions.assign("LRUKVSJKXDWFCVNLJKGXXQOGNXZPCWWEVYVQNHOBFXDVWPTJFNFBRPMGLREZJUZTHZYMJBDQONOMKAICLFDBKUREHRYHOSYCGUNMWJEZSMGTUEF");
    IMC::DesiredVerticalRate tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.0915491787088;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.376099502679);
    msg.setSource(13967U);
    msg.setSourceEntity(242U);
    msg.setDestination(12400U);
    msg.setDestinationEntity(168U);
    msg.plan_id.assign("JAZLNGKWBGDQMPPPLZSYCSNRY");
    msg.description.assign("IKZQWAJTHLOYEBNSHOQGWZEIOQBQNURINHTNACHYYKDOOMEUZVYYGPBHKSAWLAWXNKSCCAQKXFYENIFFGSCDEIUJDZFVUUFTBEWSLYSLOBAGZNEHUMLPSKMRXQVFLIYMNLHSMETMJRXTBVIXORV");
    msg.vnamespace.assign("MELQLYXLSXWHIFNQUOTTZXGEWPKKWNXSBFJTZNGYMUBWZEKOOIAFJCJQRTGQASAPUJLDCGMVI");
    msg.start_man_id.assign("SVRMOTKBNSWLRQIXOZKKMZGPEIDJECQGSCMHNAHXFPJANTSGLZLNDJBXOSKOBRGUDYIIQGVBYVMQCDBKJLGAIVJQORJTZHSKUAIWEZUBYOUWPFRDNRQVCXBBJIXALKXWXPVZBRAFOBTJUPNFKTN");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("OPRHQOGXYFBUKNXIJCAOPMAFJMDJGKFGIBNISWOUUDQPHVTZPJMDMVEKFDJNBPBQPTSALRTURXNYVZRUVDHMIGPINCHOHJLXYSKSUSAQOFNFMEKCXQOKKQNOHQLSYLMVKDGWBXDFYVWIAZAVBNZRZDZRSTLWRJSCNMZBFUIIEEQPXSKTUYEXLVCCZTYMPZRYCKFWWULNLDYETTRRXWGZEBALGWSJQOEJCHTHMCQUFCXBGIEIAJGL");
    tmp_msg_0.dest_man.assign("NCFQWMRDMXLRHIXIMCVXAMNZNEHGOEIXSEPQUPSGUYBUBJTIGDPHQUFKDTFTQLKXLKOBCEMRCAOTIELCKDJEQRWLAA");
    tmp_msg_0.conditions.assign("TVWMRSHHVNAMWWFCGTKBJZUYYYRHKTREISUSIMMEZTPHCKXGRPLTJSUYCABYPSZOBMECWSKQBFNIGJAADUOUQGFQYCHXJORQDZFENLNJSFIEBWHFQMNCVDHABKYNTSHVWFOMWBIIGURUEHPXVGVNATLLBZFGDRNVZOWLFTKINQLQXEXKQQOXCKDMJELYPOVMXOJTUZKJYLUPLBRDIXNBWCSAOPA");
    msg.transitions.push_back(tmp_msg_0);
    IMC::MapPoint tmp_msg_1;
    tmp_msg_1.lat = 0.0231924156964;
    tmp_msg_1.lon = 0.549464933057;
    tmp_msg_1.alt = 0.449612943264;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::VehicleCommand tmp_msg_2;
    tmp_msg_2.type = 176U;
    tmp_msg_2.request_id = 44438U;
    tmp_msg_2.command = 122U;
    IMC::Goto tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.timeout = 53272U;
    tmp_tmp_msg_2_0.lat = 0.762949093538;
    tmp_tmp_msg_2_0.lon = 0.813238465809;
    tmp_tmp_msg_2_0.z = 0.823568173926;
    tmp_tmp_msg_2_0.z_units = 125U;
    tmp_tmp_msg_2_0.speed = 0.326914639546;
    tmp_tmp_msg_2_0.speed_units = 74U;
    tmp_tmp_msg_2_0.roll = 0.812918452537;
    tmp_tmp_msg_2_0.pitch = 0.281464673938;
    tmp_tmp_msg_2_0.yaw = 0.0365383488141;
    tmp_tmp_msg_2_0.custom.assign("GMQBVOSWKUXDWNSIQCPLKQVOMVRVUDGPSBMSTGOVYQEYDHYOWGXKHTCGFYHFDNKRDJLBHPFPVZEOKRFFCLNKPXTCVOULIQXJECCZEVWNQFUSRRIUPPOLTAEXULKGQQZBZNISDHNJATLSKIUTCWXXEHVKLFIJWCLJZZZAMCLRYWQUNBOBUGESEAAHPXOCDYNGVMFGHNMIYJEAAR");
    tmp_msg_2.maneuver.set(tmp_tmp_msg_2_0);
    tmp_msg_2.calib_time = 8620U;
    tmp_msg_2.info.assign("JCCTTZQCLWWVDSZLJXIYZJMGFBNXGSUCYSZFSMBLPQISXCDWUKHILTQGJONROYMHUQBOYASSODRVULCCTOTRHPOAAFXDWLGRXHLFNWGYEFR");
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.192379823007);
    msg.setSource(14016U);
    msg.setSourceEntity(35U);
    msg.setDestination(41122U);
    msg.setDestinationEntity(75U);
    msg.plan_id.assign("USSPQCNCHDAHTQJJTMVJJXGAKPKZZCXMRVKXCZDKDMXLLYOVGYOFIHPDZWWVTSTAEAZKSVERCALIIKYXNHDEXUPFSOZHSOMRFACBSERKOAQNMWWOVULICNOBXWUUCFBEZBRLIQTWKNIRQTJLRMPANBBGTWYGVYWGGNQUHPLFQECXSMIFIFMQJXBUKKBHBXHQJYFLAGRPORDMEENUPVNZLDWTNCFRDGYZLTYDW");
    msg.description.assign("VSZGREFDXRIFDHQGKKIJEDN");
    msg.vnamespace.assign("MUYJMYTDSPJXHTTCJTSWYOBNVNCYFBZPAZZMBIQVSOOQIX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GICFDIZSPKIULAOQTZMPCWNVHWBDTRFLLGQCUNRMLDXGNANKFDQYOVBPCJAMBZNEYCWCFWOPYYVOUHDAESXAHVSNTVQKJIKPGPOFXALZWDGUYPMRAEGUMCWXJVULEWTFPXHBDTKLMUIVWMBDRHZEFDSRCDVTGGKI");
    tmp_msg_0.value.assign("XAMRWQFBBSKRBCGOZYMRKMOETFIZCPSIZSJGWEPTLKIIDDJFYGODZZCKTWYJTOQLCQNJUJLHXJGDGNMNDPOQZLVZLNDSMXJRGPWETLHIMHZVSDRPEYDWOYNTVSYROMJBUUABIGFLITCZBNMLBICQIXHSPYRRHJFAYTKPAAOAQMWUEBWVNWGKVNWUUXHFAPKRXFUFGSUVHBAHVXOPYLASCNCZGDUF");
    tmp_msg_0.type = 130U;
    tmp_msg_0.access = 212U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CCSITMLTRIUYMFPCLTJZUOKV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.670414003927);
    msg.setSource(63742U);
    msg.setSourceEntity(132U);
    msg.setDestination(33549U);
    msg.setDestinationEntity(207U);
    msg.maneuver_id.assign("STWXAFTOWEVHBFYITRCSIKAMIGYOPBUXLIRMJADDPHNQHRCNEFNXUNLIPQRJOWVUZGR");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 48665U;
    tmp_msg_0.lat = 0.569405452369;
    tmp_msg_0.lon = 0.64271006169;
    tmp_msg_0.z = 0.819058084364;
    tmp_msg_0.z_units = 183U;
    tmp_msg_0.speed = 0.229730263911;
    tmp_msg_0.speed_units = 63U;
    tmp_msg_0.custom.assign("JQPZLYMZLCGEPBRKRTYQBHWZFFKTLTLCRNNMFLZCQDUKZMSBVIQKEVQWEHCDEVYRYLOSMNJ");
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.371564793074);
    msg.setSource(36237U);
    msg.setSourceEntity(164U);
    msg.setDestination(62838U);
    msg.setDestinationEntity(130U);
    msg.maneuver_id.assign("IUNSBCCJMQSGAXTXWZJOUHHHVUATNFB");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 10220U;
    tmp_msg_0.lat = 0.57357038727;
    tmp_msg_0.lon = 0.221546336693;
    tmp_msg_0.z = 0.531189171473;
    tmp_msg_0.z_units = 84U;
    tmp_msg_0.speed = 0.801711002547;
    tmp_msg_0.speed_units = 17U;
    tmp_msg_0.bearing = 0.0940849570324;
    tmp_msg_0.cross_angle = 0.0807229916304;
    tmp_msg_0.width = 0.512312206409;
    tmp_msg_0.length = 0.723199157476;
    tmp_msg_0.hstep = 0.598371717079;
    tmp_msg_0.coff = 150U;
    tmp_msg_0.alternation = 241U;
    tmp_msg_0.flags = 92U;
    tmp_msg_0.custom.assign("ARRXNPHEIZXVQCBJRPJTVOBIIBINOGXNKNBGWHDCUFDEUWSHPRPUGWISVSGJJJUACEXVDMRJWXQLKZWNVTFVBGXSCSMASCEDVACVEZMLPKQMQYFEKSDEWZMILUXYELMRWFTBFKFERXXALYC");
    msg.data.set(tmp_msg_0);
    IMC::MapPoint tmp_msg_1;
    tmp_msg_1.lat = 0.530709440094;
    tmp_msg_1.lon = 0.34558076403;
    tmp_msg_1.alt = 0.788124680285;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::VelocityDelta tmp_msg_2;
    tmp_msg_2.time = 0.215997420361;
    tmp_msg_2.x = 0.0492899277279;
    tmp_msg_2.y = 0.629440959151;
    tmp_msg_2.z = 0.570211871876;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.755819738084);
    msg.setSource(33881U);
    msg.setSourceEntity(226U);
    msg.setDestination(37309U);
    msg.setDestinationEntity(78U);
    msg.maneuver_id.assign("LLSZZSIMNAKNTGDSZJJMLCFSHVNVQHLTCOXXAMGGUYBNQECVFZWEFGMTIQRPQKRMRCYHYBGBETULLAOEUHQYYVOCSEQKRTBDAIIUJSILYQOYMSWOPJXVHODMPOKMVPHKTNUIXUQAPTNXBMZIVAUVAAUB");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 33746U;
    tmp_msg_0.lat = 0.340780479433;
    tmp_msg_0.lon = 0.24034106597;
    tmp_msg_0.z = 0.210502151743;
    tmp_msg_0.z_units = 229U;
    tmp_msg_0.duration = 18650U;
    tmp_msg_0.speed = 0.316436446882;
    tmp_msg_0.speed_units = 177U;
    tmp_msg_0.type = 189U;
    tmp_msg_0.radius = 0.302387759708;
    tmp_msg_0.length = 0.144137261153;
    tmp_msg_0.bearing = 0.853571008641;
    tmp_msg_0.direction = 80U;
    tmp_msg_0.custom.assign("ZYBNJWYUGAMDMIAKEJQIPVYYEOHZLFZOVHCRPNKLUYXPKWIAMMSIZLENCVNXZMIT");
    msg.data.set(tmp_msg_0);
    IMC::IridiumMsgTx tmp_msg_1;
    tmp_msg_1.req_id = 29909U;
    tmp_msg_1.ttl = 34661U;
    tmp_msg_1.destination.assign("LRQEEMRWQKEXQDLYBTCQEOALYFQYSOWXZSONVVUDGLGGHGZYUIJCCBMLATXBQCPKMNYVSTWYKAFHPBKITRTDEZKWAWUHBDTNOIECRXIRPRGABRKZMOLVPTQUFFFCVIJYXQGUPSBNMKOUCLGSFWOPJJYMNPSWALWLNTTXUZXXOMHJDAJGS");
    const char tmp_tmp_msg_1_0[] = {111, 126, 46, -121, -24, 32, 111, -70, -82, 68, -117, 50, -96, -106, 121, 44, 118, -64, 6, 84, 1, 3, -74, 77, -93, -34, 103, -18, 115, -26, -24};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.424685402914);
    msg.setSource(3304U);
    msg.setSourceEntity(106U);
    msg.setDestination(50919U);
    msg.setDestinationEntity(175U);
    msg.source_man.assign("FPVTULGDGNRISLXFMIWJGIHWSMXLQCECDVIRFWHGFSNEWAZOOOQKRTZUCHQBQIJCCUPYGWXYBNGMAFEQQPOUOTCSNBKRDZSTRJDZSZLOXZLLSQCHIDRBYIJURIPWEVZDFXLAHVBMGQAFCEXNYTVDMK");
    msg.dest_man.assign("DHWTCNMUYWVIMPKADETPWTCPIVJRDBJDMANEYXMHXKUGPTEOARULPWGNASZRBPRCEKBNNBIOJGLVPIVYDDFUYFPWOKEAXOSILIDBIMUHSOLEYZFFMEJRBBGCJBHMNXYPQVINRZNZXDAAROSOKKOLXSUWACGLBCUACHRDYFZJIOCEYGMDXGFQFZSRFKEQWQTHZHLQFXCCQQJBWHZVUINEPWTVSZKTLWSTVYUVMOJKZMQLSUXJNTLR");
    msg.conditions.assign("APDAISUQTIFIKLVKGYUSJQBZQCHWQMAJCDONNAWCLYZRMPQJTHDJYXTPGTFSINGVFFVTXHHKMOBSOBVHTGBBHJAVYLZCBUJBCZEAHZTOIDBOZOLFJWVGZYXN");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.146507936674;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.626795579574);
    msg.setSource(7025U);
    msg.setSourceEntity(30U);
    msg.setDestination(40201U);
    msg.setDestinationEntity(178U);
    msg.source_man.assign("HXZFUCEOUMUBJOLBFILQYHUCUHJHLDGUMKZRWMMGTBJKOYERVMQZAVPTBWJFTUNVSMZBRDSEIPXNCYGZVOFXPKITUZDWHGHOLKESLJSCNKWRAMFIYJRSIVFGGIFDZASEKTXDGXAUQMWLNWMQQABOPQTEVRPLXYJZHSLCENBUMPOXAGALDQJIEZOWHFCYTZVBFVDPNXDEBYGJCTEYKKNARVNGXBACJIDSVLWCHHPQF");
    msg.dest_man.assign("CGIOGNTFBWZGXOBLWZTDIVJKMMPHYKWAJUFTUOWVINXZTRZGMNIGBPCROLSRYAMGLELNQIUJHQMMGOQAHDVXAAWTIQBAKHKKZFEEDFCTYBYPRUPVSLKJBIDSLCYXMVFLYA");
    msg.conditions.assign("GQMYLRZRFNKYANFEQCRETCOFRFJIJIVXTWNYANGWZXOMSPVOZHOYINUDQGMSVZCJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.339966695885);
    msg.setSource(50056U);
    msg.setSourceEntity(168U);
    msg.setDestination(8096U);
    msg.setDestinationEntity(85U);
    msg.source_man.assign("WJQOHQEMOUMGPKYSFOAXCCIWIVWXYGMURFJVBQXAKDHTPGCHTQSXZMLNWQCZJDFQUGZGOAVEBPKSIGEDXVHIATSLBZNMTPJGLJMEHDTKTUJSOEXLYGNKBJTZCQLSVOIMNNNRWZDCC");
    msg.dest_man.assign("LMQLQFEGGHFBSWVFGZCXJAVYJQKOOQHSJUJBYMDOMPJUOXOSIUWFYNROETVNZFPROPEDFHABAMHVAQVNXYMZUBWSZIJMDSBFZQWJHLVXKKKVBYRDRYTXUSVFE");
    msg.conditions.assign("BPTKYEDYOTWBCTNPXHFHJRUHXACHZYGGCIRZJEKPDHBGECPNXLLKMEDRFMSPMOZYRPHHUEWAYVVDFKKNJAUFNIOYOPVTSUAKIDXPLQQMVSVBDFUXYQZHBBNQAMSPWGJNRGZYTHWZIOEBQOIRSNIAGDWPVJRZMALIJGUJOGOTKKLMLLXUTXAIGMFRDMAWEDDYSSFURWECSZZXICJVEKRVFTNQECVUQQCCSOBL");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.226621164104;
    tmp_msg_0.speed_units = 85U;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.572633887953);
    msg.setSource(63928U);
    msg.setSourceEntity(49U);
    msg.setDestination(4250U);
    msg.setDestinationEntity(201U);
    msg.command = 26U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PQTLTCRKVRYMPCFLZZDVTTSGNHFNBNUNDDCFIMIHTXIGWPTZV");
    tmp_msg_0.description.assign("TOXHXWFHSXZMZJTOAGONEMESDRMFOGFMCQJWUFTROZWQRPLIMUFGUONQIYYVHQMNMNJCQNXIWHUXAJYYVAHTKVESZVELEGBSZFKBWFGIKQCNYANKLOIPECUBNTDMWJLVAKUZHYKSWIGXISRXTIPGBEXQKXPNRYCUYRGGUZDBWVYLWNJTJB");
    tmp_msg_0.vnamespace.assign("ZMZTBPPGSHBWQIBLMHANVTXIOELQFSQNZACHDLOOCUUTSXAKRBMVVSIPMTZCYSDBTSNGFYEPFINWHXWXJRJDAUIPQANNDFAKGUKDBJNXAIDWJVRFTYRFOQZFEOWXQPKOEYHZMWXQG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VNLQUXZSGLPSUJTVSSWPRHANUQHTJTWEKUQYBDAUDXCQAYCTMLOIGULTMOYBAEOMCNKOEPYVTSJQANJFMVQQEBTDIEBHFLDIRAZYWEXCNGZEZPNZWGPHMHIIOFESZBCXVXOVXSGZGMRBYNCRENDCMPDJKZHPGFDJRHCPOWALRKQJVJASJWHASSDKFWZQBTIIUOEFOVLGMHRXUKTYBYFULCPONDKWF");
    tmp_tmp_msg_0_0.value.assign("EQWCCAQOWPBQBAPM");
    tmp_tmp_msg_0_0.type = 195U;
    tmp_tmp_msg_0_0.access = 159U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UGLWIAWGEVAG");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ZTMLTYUURETOERXVEFIWHQQJXIXZCIVZPYULAWDEYVMRLDQGMAXWTETNCUMSNXAMDKKBQFNSXLTMYGFWJPCIQJCYLRQKPOMKDAMCQPQHZHWKPWJHFDGFOWHS");
    IMC::CoverArea tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.481456639794;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.571905554338;
    tmp_tmp_tmp_msg_0_1_0.z = 0.722416092121;
    tmp_tmp_tmp_msg_0_1_0.z_units = 15U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.251071368892;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 66U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("OCEKGMQZFGVYVQIGBLZTWNEROOUXROYCXGKNXGSZZX");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("OELZPDWXJHAWKJVGZJHTGSKVYNNSQMLMEBWSODMLFNRQWVRDVDOKQIQGJIEEMBPVXCWNEZHLEXLRSODISAQGDFSSXZCBVPINYMUPIZWFRYJXLUKTJUZUDCFBFLMGATXFCGQMVZTCKIGMRQEXNEFTHZYKQWNLKYSMRWBVXFTPSHBFDTEHYYBOBQJKLDHPAIZUPTIPIOLARDXO");
    tmp_tmp_msg_0_2.dest_man.assign("CSVXLBOIUSUQIZZZQPGMHAZPIKBYDGNAODQXDVMLCDYWJUSKNWNHMBXQHJUOPAJCGOVBZQPRIZGZQIXRJKAOEDTKFFSZXTDUNTMGELHDBOCCEPFSFTCECYRRGLAEHON");
    tmp_tmp_msg_0_2.conditions.assign("IGDHKAALQLNZOVXVPVNCMUNDUKMIIALMJWMOBALARFQMPGZTGKFOGWCLSUKNUYSFTVACXIDUUPZDHGNDUIBPXESWZFDEXHCORHAFMMDHEOIBGFGTRLSOFQRRTQVYBPXYE");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::VehicleFormation tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.730315973592;
    tmp_tmp_msg_0_3.lon = 0.426180518486;
    tmp_tmp_msg_0_3.z = 0.526295986035;
    tmp_tmp_msg_0_3.z_units = 113U;
    tmp_tmp_msg_0_3.speed = 0.993195437383;
    tmp_tmp_msg_0_3.speed_units = 4U;
    tmp_tmp_msg_0_3.start_time = 0.451724161839;
    tmp_tmp_msg_0_3.custom.assign("DTUFAZORBMCLCWQDFHDESCNEZSMKTDFXOABONPZKQGLQXYV");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.291995696066);
    msg.setSource(43870U);
    msg.setSourceEntity(0U);
    msg.setDestination(4030U);
    msg.setDestinationEntity(241U);
    msg.command = 16U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FLBICAFEPBYEGQHIYCLVPDBQXDVQYUZJKOTSRFOPXEWSJFXXYROTDKXRSJKJQGDTDGMCUSKJMAAAZZQVHMHTNQPIJPMUICVRLNTIFFKJZVAFMUYWTNXVDTGARSIQPOKHFNWQHYAXDHZPONHTVESQERHBWMOWSUUZVFNMCWLLISDFGCWNPLIUIYILZXKLJOEBPEMNZRAYCHXVTBNDSMWUNEOOMUBUYKARBGBRGZHSKZEXJGQJWLCGWDOP");
    tmp_msg_0.description.assign("ROYCDSHJGTLXMPHHSHDJLMJESCEMWHIQKNXCQADPXCNTKFIARTSW");
    tmp_msg_0.vnamespace.assign("MEJDCGTSNRIGCXZUHNQTWMSFGYHILRNCFVAQUASZHKKNJTNWDUSPRRKQGLDBAWC");
    tmp_msg_0.start_man_id.assign("FEELHBILTQBKSBCAACKSSNQZYIDRUYEXLWTNMPVSVVUKAICDYYHOXAXBXNLTSWXHENOWPUTOPZMSUXSQCHFWGOKGAWDJJOTIIMOFWTGNCXKYZPKDTQKVILQFGNIBCYGRRSKWRWEUYJJREVGCOQBR");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("SRLTUFYFFVTLJJVBGYNGUULHVJOEOROJQVNUTMCZMQTQWGUOXUWAMPJEFEAZCDYGHLOZFGBIJLYQAVSMXTMDONLWNCKVKCRBHDHDVIKLGAPCSWDPIOXHFSKDGRRHPUKRBPIPETWYJKQTHKNAYPQWDBURFXKPCWEJHWTJEFTDZBNDYFSCRAISQVAEYSESGXCZROPNG");
    IMC::YoYo tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 48394U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.471631483183;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.608164163249;
    tmp_tmp_tmp_msg_0_0_0.z = 0.732738053718;
    tmp_tmp_tmp_msg_0_0_0.z_units = 15U;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.0668457801315;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.465106291228;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.951466632364;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 92U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("PZGXUVUCLCMLMSTERVFCZCPMZWEGYBSSXUBCDCTWLLQJNYIKQDYHDFZXJHNDFIKXUNXUBSOUHCUYCWIQAPXCGGKVAPEMDMRNKARTKHPARJLOBENIGNTNJYBXNZBEEOIQKAKODUAJBIMSFBDOLASEILFXDMVJMAXKRYEZ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::ImageTxSettings tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.fps = 63U;
    tmp_tmp_tmp_msg_0_0_1.quality = 153U;
    tmp_tmp_tmp_msg_0_0_1.reps = 148U;
    tmp_tmp_tmp_msg_0_0_1.tsize = 40U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::LcdControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 134U;
    tmp_tmp_msg_0_1.text.assign("JCTDUZSXKQKKGWYIRZSZUWFPEBLGJIVPBIYLRMNCIZZADBWMRTJFTPTROCOQOKESOBBFYFJTOWQWKODHKFNPQICOKSYBXFWLGMLXUZWNMHBJRHGYVCNFERLVERSAXLDMUHOQYXDVRAQUDAXXPENUMSHYJCZGCTMDSTZURGAHNPBKWEMUE");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SetEntityParameters tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("TXSZWFNUBEOWHYVNMNJKPFCLRYJFWFGSFAKDKEOWLMOBVTLTUVRSDBIJAFZDNTGHQQQGVEOWSLPFPQEIPCOZZPITZUYCKMDWOILRCYSMKYISDZGKKSHZUDMDEWMLGSMXIHUJAWDEALZETXJZYJXWCPOSRFXFGGIN");
    IMC::EntityParameter tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.name.assign("FBLBGKGEBAHMRYTDQCOHPKEHRLEGXVWEKMHFZWWQUDUCVMIHUUGSOQGXUXCAECCIWBSMWKPRF");
    tmp_tmp_tmp_msg_0_2_0.value.assign("WCJEPQDCKPWSBXNAXHGPBVLFLXWTYIVAYADCKRPNANKVDBJIIITNCMVKZXJUJEQKRFQRRKCTMYXTPYZZFPBUDWGORDLHXPEVZYMHJFMALSMYWTOVSUBGQUQOCQFPEVCXGXYTGRIKHRLSLIBRIKYSVSDAPQUZGAEMGXKZSWHTSAAOBTFMDVJNJBNUCUXHAYWKNFEORQMGEGTIELBOGIJNJZOHDWHYHINFVNULD");
    tmp_tmp_msg_0_2.params.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.0243260768247);
    msg.setSource(12866U);
    msg.setSourceEntity(47U);
    msg.setDestination(42826U);
    msg.setDestinationEntity(232U);
    msg.command = 27U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CGSCKLJBQTAJANMUPWPAFVPINZANSRUFOYTXQMBUAIKFRPLHGGCXAIRGQBCVYBHAXLUKQJRRYQDTFRWSDKKLYNAYNEHMPKBVEQPTCSYMOSXPDFBIGRWKSWYJVZQSOJMYGJNWEFMLZGWWRHXZ");
    tmp_msg_0.description.assign("RSQLXJAYZVLIXHBMUCBVQZJYBBUCWJMYAQXTASWTMVKYGZDRNWPMEBGZXUJZOPHATPEDKCKHFPIKMKPJAENOZHYAOWUSCFPFEFTWXWRAKOSDQBMQVCMSIDITASWUKDBFFJZDDLCMMFETQHRKLONGEKNGDXLPRKCUNQZSYPHRDLXWXQLYGGNYFUJIJRBGSIZWZQPRTTIOBAWOXUPLGNUHEBNTCLEEJUXNTVGJVVHCFEYQOAS");
    tmp_msg_0.vnamespace.assign("WPHPBYOLUBMLOCVQJAFTEUANQPRTHJKBGYTITJVLOQVGPUECNRNYNP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZAXKBXIYXQZHNOTSDBHGRJGLEUZTLTZBPCIHAGEOFSSYSKFRQGFXGUINVECOWDYSILGUHVRTNLYOAVAPUAXOLPFBRWWXYQKVPIOOMP");
    tmp_tmp_msg_0_0.value.assign("JAXMHOSJSZSDP");
    tmp_tmp_msg_0_0.type = 224U;
    tmp_tmp_msg_0_0.access = 142U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YHHHIVMTTUVBTXMI");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("BUGVYQRNKOJLJHRDLXZUWSLNAPCUOOFWPDAATERQDARUPWGEDQOKHXYXPPWHQNZDIRNIMVOSFBOPEIAFVJGDBHYTRMGLUZWIZTVVZUJVPORKZMLIBRFCNVW");
    IMC::YoYo tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 20763U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.37269119155;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.575585870457;
    tmp_tmp_tmp_msg_0_1_0.z = 0.312552995993;
    tmp_tmp_tmp_msg_0_1_0.z_units = 214U;
    tmp_tmp_tmp_msg_0_1_0.amplitude = 0.422383395094;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.0579453494308;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.0982074417733;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 60U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("EBCQMVYLMBZJMNSNUMAEFXEPWCUMWHODEBKZHJXPOYKERWVLJTHZUSCRILSGWDHJBZFTIDNWP");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::MagneticField tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.time = 0.562691120076;
    tmp_tmp_msg_0_2.x = 0.862892515734;
    tmp_tmp_msg_0_2.y = 0.0515250121612;
    tmp_tmp_msg_0_2.z = 0.0426928930138;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::EntityActivationState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.state = 130U;
    tmp_tmp_msg_0_3.error.assign("GCXPOXIKTKFJSGFAINJLGKRPAQDTRPSCENZRWAHBULAVTBHSCBWVW");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.567761102553);
    msg.setSource(50359U);
    msg.setSourceEntity(123U);
    msg.setDestination(50359U);
    msg.setDestinationEntity(126U);
    msg.state = 26U;
    msg.plan_id.assign("CEXBVHXQCZUGOBUZXOHIJLPKDXGGKRIIWCQGHNHAPOTRKMYDNGQAEDFMBYJVTKPECZQDVNUUVOCXJTFLSZKIYSHWIPVATTRAAFCHHPTBILSPBSPAOVUIPWWFVNQMASUYCENJALOHBULLWAVMDXGQKTYDZQMCZKFVURENNBITRRRYZMTZLWQMQYBOXFJEVGDJWSK");
    msg.comm_level = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.98104183435);
    msg.setSource(44746U);
    msg.setSourceEntity(135U);
    msg.setDestination(12450U);
    msg.setDestinationEntity(251U);
    msg.state = 235U;
    msg.plan_id.assign("JTDCIVOAJCBYRPODMPLQZQGJXPTXUIQWJTINUGNMYLBBFOMEDHBOSSOTIXHDWAORPVWBCHUELZVGTWMQVJLWPJFEFQVQEKZI");
    msg.comm_level = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.700823394425);
    msg.setSource(19132U);
    msg.setSourceEntity(244U);
    msg.setDestination(62413U);
    msg.setDestinationEntity(75U);
    msg.state = 0U;
    msg.plan_id.assign("JLKZCRLEUVPGUOJDWXQMOVIBDOOXDRZBOYLEXYZIMFRFHDZXTTBGBSSXRKBFCGYMEHBSJMZXOWEBDVM");
    msg.comm_level = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.737971987806);
    msg.setSource(18754U);
    msg.setSourceEntity(29U);
    msg.setDestination(64425U);
    msg.setDestinationEntity(206U);
    msg.type = 27U;
    msg.op = 77U;
    msg.request_id = 14844U;
    msg.plan_id.assign("SOFWBYFCZZVQGXYWINKITZRWSXZBIVNMKFIKASBMTLEEQSNRVHTCDNIWZHWQVJEJROGKBJEBOVTCUNPIKUJHCSFCGFVHDWWIJQEKMPXWALBZNRMVGRJHAEUANXI");
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 194U;
    tmp_msg_0.zoom = 208U;
    tmp_msg_0.action = 53U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PIYOGIWCFBWKRWJUMYQPVCJHMMVXEUKZZTJBZGEKTNTDKNKVCIUTRBYGUPVAHPNKBRRIKDLCWTEOMLXMNEUMZZYJRBIFXPXVXFQIASQBJFCMMLEWHJYVXOCWDHJOUDVHWEVQAOAXRRUODRSGOXDCZLGGXFJLAAWFLYNSILXCGETSWOLNTIPHBAHYBQJTIPQODGZQDJNLQFNVPGHAHSAMKNFTZBUZWNMOTUG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.246866371106);
    msg.setSource(57929U);
    msg.setSourceEntity(176U);
    msg.setDestination(16356U);
    msg.setDestinationEntity(43U);
    msg.type = 64U;
    msg.op = 34U;
    msg.request_id = 36399U;
    msg.plan_id.assign("YKHJQMCOEUENRWTWTMPIBUJQEXBTDFRSCZJPAZVGGUQQXQZLKXSTYZBQWQNQVATHSHPKFGPDKXYIYYLCWDLNZXOVSTOIALBATUVFFKYOIBVASERZZOWBNEFFKDIODERYFTJCAF");
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.213289164881;
    tmp_msg_0.x = 0.708301066918;
    tmp_msg_0.y = 0.42791998566;
    tmp_msg_0.z = 0.803343488028;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YMRMMRARCVKECYYIWKARRZWFDXYBZCKNPVONGXYOOJAJGIBAGPROUDBSDNFNGELSUHLNRRWJZKMUTIQSUXMQFMSIDNTGVDDTWOSBGCTQVDPCHPZNBWSYECLEPHETSGLWBMXANHBEGRLAJTTEKZVPXSJUHVJAZVIOQIUVCAKWFBBPOGAMFHUPNIKCEISPFLUUZJFNETLLODHTWQKLZAFQQRYTDBXWQO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.607144516039);
    msg.setSource(38322U);
    msg.setSourceEntity(180U);
    msg.setDestination(7518U);
    msg.setDestinationEntity(205U);
    msg.type = 72U;
    msg.op = 142U;
    msg.request_id = 35387U;
    msg.plan_id.assign("UEVDBSYBQNYVEDUBTBLBLDYYJUEUFRROAAVWBKKTQNPZXTPQVZEFERDPVIJYRMMOISRHWHANFOYKJIXANLETRRDCAJIXYAFCPOSEGWUUOMZTWXGKBGTIZCOSZLAFUDJFNSDHCXGNKFSUWYCQIPMEGSRQKHHNXBXVGFPPFIZPOHKDJDHBZONQMZLQPMMSHQOSLRGTVOSXE");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("JOLZTLMZAOAVIFFTOJCTGYWLECXXQPQPLIKLGLMRTGIBDNDOBWVSCPRKOHUHSPKTJKXYPWQQTEGUMCXYWVUEJBIDDSHWVVFRPVGWUFZKIHKAAVREHFDKNVRNUZERJP");
    tmp_msg_0.visibility.assign("HGMJTKCJNDWSSTAPGTIQPCKOSSGCOMBZNJXNYIMWJRKQXROIUUAFVOGZYAPQXGDSLTLEAVYVDTGOPECWDUXDWNKTQAPR");
    tmp_msg_0.scope.assign("UNRWUKFMNKUVYATBDJVCAKJTQOAFSWMJTOARJRBWUHNHDUVNQUXKOCEBOIVKEKUTBGPROZYSQFIGPUHNILMLZAOYPNNOPLEZBIMVPJMLJXCXFXZAOCMSQQZRKNLJYLCWZXZAXMHBATHVDWETJGORFWCZKCRFYFGZEFXBXJGGSXCRYUSVCABODPMSLYUIYCWQPKLQWQHIGBZYEQTTHIWLSIGANTSNDEEDXYMRDHTELVB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GBFVSVKJOTDEPCQVOXHPUNDMNXDSLRMRVWDUXGPIUABGJFCOIILLHHOKUAPTQEWMZEROWKADQDGQKNPPMCIPTLVKMETAFHPKJQTORYKUCLIYZRPC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.859469003947);
    msg.setSource(27707U);
    msg.setSourceEntity(62U);
    msg.setDestination(40203U);
    msg.setDestinationEntity(139U);
    msg.plan_count = 47855U;
    msg.plan_size = 4170939810U;
    msg.change_time = 0.884229471525;
    msg.change_sid = 796U;
    msg.change_sname.assign("QIXKUAEDUTOMAACOYGGJUPTBCFYJSEVAQJMIPIGUVLFZIUFVGOLDDQSQLXFKDFGIRZREPFXBMDVUSTXIWVADTRCYPORLCKVUAHAONSJTVQZTXFREPYBNHNHJYWTPWSGSQQXBNJHZBSIEGAUXLQHLLJFQQ");
    const char tmp_msg_0[] = {-113, -21, 26, 30, 50, 23, -103, 40, -63, 37, 24, -66, -100, 36, -31, 56, 50, -13, -57, 58, 29, 68, 78, 126, -1, -3, -90, 52};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZUJOOAWELBK");
    tmp_msg_1.plan_size = 9917U;
    tmp_msg_1.change_time = 0.985156669163;
    tmp_msg_1.change_sid = 13357U;
    tmp_msg_1.change_sname.assign("YVUEIDODGTMPWONYKCUPYJFPCAZBERCVKRVYWRKIGUSQAUEISXWRTGIVDHPVTYADOUQCQWZGOTXSGKNJTBPMFHKSWDERWZXMMBTXLNNUOYFXCRBZXIZXCXRIMNTHBATMHODHJZPOQENQKLJYQQBJQZYTJNFPTLOFVZJZFLGJBJEPIXUPAQAFINMVMUHSYFDEOHWYGMISSUCDWLCNAJPXBFHKAFSLSKCAKZLHVLEOVNGGEULHRVEIRRCBGDWD");
    const char tmp_tmp_msg_1_0[] = {-8, 114, 6, -10, -98, -50, 95, -19, 22, 75};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.836513085105);
    msg.setSource(52247U);
    msg.setSourceEntity(71U);
    msg.setDestination(54962U);
    msg.setDestinationEntity(31U);
    msg.plan_count = 22985U;
    msg.plan_size = 3235249396U;
    msg.change_time = 0.838341602115;
    msg.change_sid = 49480U;
    msg.change_sname.assign("RFFYGQNTEBTCOMOYCSPZTHFFJBYERNXRSXIRXBNEZIDWCTWQWEGXZUSZFRLWESCKKLXDPZADAYJMNWNAKHSYBNFKJLPQJTACATUDIYUKGJOMNT");
    const char tmp_msg_0[] = {-109, 119, 9, -38, -38, -46, -26, -93, 70, -75, 84, -79, 14, -109, -71, -94, -120, -109, 92, 78, -107, -27, 120, 66, -66, -121, -90, 95, 84, -49, -20, 55, 41, 35, -18, 14, -123, -35, -45, 93, 67, 94, 91, 15, 6, 22, 88, 100, 75, -54, -54, -20, 64, -54, 50, 30, -25, -12, 91};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("VJUXNMNULNECQIJKYPPBWZQLTTRHRHDXOIESVGCKBFBASJ");
    tmp_msg_1.plan_size = 13892U;
    tmp_msg_1.change_time = 0.091763778588;
    tmp_msg_1.change_sid = 6694U;
    tmp_msg_1.change_sname.assign("RSGOBDXKCWQWNUMQZKURZYEYEOWLGJMZGZOJBCVCOVAFUJYA");
    const char tmp_tmp_msg_1_0[] = {19, 82, -34, 29, -13, 91, -12, 39, -81, -9, -44, 100, -96, -62, 96, 53, -112, 36, -74, -105, 102, 18, -2, -11, -92, -90, -70, -33, 58, -92, 22, -94, -106, -73, 18, 33, 14, 88, 43, 92, 23, 60, 117, -106, -65, 109, 122, -90, -96, -14, -111, -61, -46, 113, -67, -127, 116, -14, 45, -40, 114, 81, 35, -117, -90, -101, 65, 76, -124, 86, 17, -41, -76, -3, -122, 56, -91, -17, -6, -106, -76, -120, 15, 95, -18, 88, 40, -57, 101, -61, 0, -110, -124, -56, 117, -91, -82, 67, 54, -2, 3, -113, -80, 37, -88, -35, -8, 56, -9, -59, 112, -118, 78, 73, 117, -57, -12, 2, 104, -29, -123, -44, -12, 87, 24};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.129450167242);
    msg.setSource(44830U);
    msg.setSourceEntity(198U);
    msg.setDestination(17256U);
    msg.setDestinationEntity(70U);
    msg.plan_count = 13752U;
    msg.plan_size = 3629862285U;
    msg.change_time = 0.316305301787;
    msg.change_sid = 48737U;
    msg.change_sname.assign("ZWVUROCSCINWIBPFAUDIKJQFZXLHGLAUQZXTOXCKESDBKOSGBQQAELKJPNJGLGMDETFVBMJSTWXOZYCRZKVAKIMGJSJRQHFWTNNYKDPYOQYRGFNMPRLMAPTHHNIFOFKTDCBGYVWGMEJTUUDZRTXBDOHVEOLPSSBMPCEHFEUKIRAUSPMCBHLOARKXVVYULZFIGTJMUXZRRZYNYCOCWQIX");
    const char tmp_msg_0[] = {-92, -26, 123, 9, -27, -23, 33, 36, 126, 29, -40, -29, 81, 65, -100, -125, 116, 97, -84, -23, 122, -89, -99, -94, 71, 78, 1, -32, -88, -4, 31, -88, -103, -104, 107, 34, 47, -87, -60, 6, -28, 87, 84, 115, 53, 57, -118, 112, -84, -88, -24, -38, 57, -34, -46, -82, -8, 41, -87, 34, -95, 115, -36, -9, -15, 39, -18, 53, -91, -13, -5, -16, -63, -24, -21, -45, 2, -57, 89, -43, -50, -31, -64, -58, 68, -27, 50, 102, 40, -36, -42, 19, -54, 23, -110, 60, -88, -79, -68, 89, 72, 19, 75, 38, -14, 41, -125, 109, -108, -79, 118, -40, 36, 0, 72, -53, -3, -50, -84, 117, 15, -102, -106, 50, -121, -20, -2, -14, -19, -116, -76, 89, 58, 77, -93, -81, 63, 95, -63, -41, -113, -60, -107, -106, -13, -82, 108, -56, 85, -35, 79, -122, -1, 74, 79, -89, 124, -125, 94, -4, -21, 114, 121, 97, -99, 18, 83, -57, 101, 84, -28, 45, -5, -88, -19, 121, -44, -12, -60, 117, 117, 98, -31, 75, 91, 55, -103, -36, 1, 65, 57, -19, -64, 1, -42, -7, -31, 45, -65, 100, -65, 32, 84, 113, 7, -31, -23, 63, -81, -23, -102, 55, 106, -71, -95, 86, 88, -107, 59, 105, -59, -47, -53, 95, 99, -21, -15, 94, -116, -35, 3, 87, 37, -90, -3, -74, 82, 20, -28, -32, 111, 89};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.953367795068);
    msg.setSource(62290U);
    msg.setSourceEntity(63U);
    msg.setDestination(42012U);
    msg.setDestinationEntity(121U);
    msg.plan_id.assign("GQBFMKNUYOHO");
    msg.plan_size = 17406U;
    msg.change_time = 0.433688918236;
    msg.change_sid = 23963U;
    msg.change_sname.assign("UKXORBAPPGNPMIRMMXPRBQMMQVCEWRCVMFMJXBDAHFLSSZWUCLIOQHZBAFKEDDGWIYTJLHKUQSFVSWCVHYYJWPFEPNOVCXWHAVKTTLUUPAASETBKZRDGHUBW");
    const char tmp_msg_0[] = {46, -128, 5, -114, 48, -56, -74, 12, 51, 109, -2, -119, 67, -64, -66, 62, 44, -62, 118, -68, 111, 27, 107, -94, -13, 52, 95, -105, 122, 106, 40, 103, 67, 89};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.262761557585);
    msg.setSource(14494U);
    msg.setSourceEntity(140U);
    msg.setDestination(41911U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("HVLZSEPLROUAETVTIBUOYPRTJZFZNGNRADSYMKPRUCKKBTMOWVUDVACJDIWPLYJHDLEWDJYQVXAIACQTDXHMOJAZMWNWXXSPKHBSCFFKEUSQYTHBSUDNNCQLOJQYQIFBEZZSRNKIXPMGECFPRZYWUMWMLXOFBOCSFVLGTGHBGHXXOJDSYAQUVJQEWRZKDBOOBIFTLWVHXMHDBACFVRMZHJRYMRAGEIQSCIKN");
    msg.plan_size = 23580U;
    msg.change_time = 0.72347710592;
    msg.change_sid = 4340U;
    msg.change_sname.assign("NMDBFHMVAOMLASPBIANOGCSLHND");
    const char tmp_msg_0[] = {37, -119, 104, 3, -5, 60, 3, 64, 8, 83, -18, -53, 73, -71, -128, -25, -113, 108, 78, -87, 39, -9, -27, 14, -21, 108, -70, 1, -49, 105, -128, -119, 90, 7, 57, -67, 54, 86, 95, -96, -33, 55, -99, -117, -62, 72, -13, 53, -118, -17, -90, 97, -116, 78, 2, -36, -6, 95, -12, -88, -19, 45, -22, -15, 90, 88, -106, -40, -74, 41, 8, 5, 14, 33, 112, -12, 120, 78, 61, -17, 63, 5, 47, -91, -105, 49, -1, 121, -79, -123, 91, -106, 104, -81, -117, 64, -102, 83, -53, -88, -80, -31, -28, -100, 52, -29, 20, -20, 90, 107, -76, -36, 109, -4, 43, 114, -73, -79, 90, -119, -127, 47, -99, -6, 48, -29, -34, 54, -110, -28, 74, -54, 79, 99, -112, -1, -18, 64, -115, 52, 40, -67, 33, 37, -79, 52, -99, 10, -87, -52, 91, 47, 102, -68, 37, -24, -38, 119, 28, -104, 125, -107, 30, -13, -33, 75, -7, 39, -108, 119, 37, 75, 85, 79, -95, 23, 100, -7, 77, 121, 108, -17, -84, -12, 18, 99, 56, -88, 81, -119, -74, -81, -34, -12, -82, 83, 91, -72, 123, -30, 78, 123, 9, 67, -91, 12, -10, -49, -38, 118, -84, -119, -54, 114, 4, -11, 7, -116, -6, 86, -93, 36, -127, 80, 13, -103, -127, 35, 113, 91, 26, -32, 2, 69, 106, 19, 25, 94, 125, -114, 77, 118, 55, 33, -106, 107, 8, 91, -32, 49, 16, -6};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.110294173798);
    msg.setSource(20178U);
    msg.setSourceEntity(24U);
    msg.setDestination(33222U);
    msg.setDestinationEntity(13U);
    msg.plan_id.assign("UBVELYBJHDNBVWBZYZPMOOHSFMSKPTKCZHVBQZALATYNAYMMNDSQEHBSUQRXDYJTAIGPIOUIAUZFTFDFEWQYCDPIFCLGHRCOHNCMUWKPXZYONAMRQLMNQXPSURNTOLPPYRTQVOJGKIHWXVRVKLXZAGIKMCFXDZTGKYAWGSCJFMTXZGEZKHIECJVBKTPXJQIOBVSRCWBQLSDRWFSCUDHALWGGKJJRELEUOEWTBDSQJFPRDNIW");
    msg.plan_size = 44813U;
    msg.change_time = 0.905428135202;
    msg.change_sid = 44788U;
    msg.change_sname.assign("MMZYLTKVHJBASBZXWFTOQDDLGPOHHSRFGDKFBVAXGDGVQEQQNNVELTGCTIDKWZJJLROLEUOBHMIYNMSO");
    const char tmp_msg_0[] = {49, 85, 62, -10, 5, 27, -55, -26, 41, 91, 65, 64, 18, -84, 0, 66, -62, 87, -41, 26, 108, 107, 109, -43, -127, -41, -119, 67, -59, -89, 46, 124, -24, -46, -74, -7, -65, -78, 62, -65, -68, -45, -1, 35, 22, 84, -109, -57, -58, 33, 4, -65, -24, -20, -106, 111, 87, 36, 120, 105, 117, 85, 53, -12, -15, -18, 8, 100, -25, -43, -109, 5, -8, 101, -10, -107, 62, 24, 102, -51, 32, 111, 84, 49, -123, 107, 11, 25, -63, 86, 84, 2, -75, -120, 50, 120, -22, -66, -53, -31, 22, 89, 13, 80, -35, 113, 97, -60, 9, -14, 21, 87, 55, -94, -21, -42, -76, -34, -7, -35, 116, 77, 94, 93, 89, -84, 64, -68, 89, -43, 94, 21, 80, -46, 109, -109, -116, -91, -49, -57, -40, -51, -37, 55, -29, -45, 26, -78, 109, 25, 105, -24, -76, 32, 60, -51, 101, -26, -113, -15, -110, 23, 58, -88, 88, 117, -59, 58, 46, -54, 56, -19, 91, 126, -73, -66, -127, 44, -56, -35, 59, -94};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.303442746644);
    msg.setSource(29731U);
    msg.setSourceEntity(247U);
    msg.setDestination(19740U);
    msg.setDestinationEntity(155U);
    msg.type = 205U;
    msg.op = 208U;
    msg.request_id = 42590U;
    msg.plan_id.assign("JPXVABFOPBHYEFELZXADJCATFQHGLVWYUCMTKAMKRPBRHOUDXKPZVCVBIDUSZNEAEOKPWGUNSRNLVHZWKCMBEISFDZBGOIIAFVDGTUNYIQRSJEVTKJKAROAJLFCASXDOE");
    msg.flags = 9525U;
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.31613982639;
    tmp_msg_0.x = 0.120821566234;
    tmp_msg_0.y = 0.65559465727;
    tmp_msg_0.z = 0.866519025796;
    tmp_msg_0.timestep = 0.627367948972;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AKYPAUINDOWCMXUXZKBOQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.503691534202);
    msg.setSource(18960U);
    msg.setSourceEntity(122U);
    msg.setDestination(4983U);
    msg.setDestinationEntity(81U);
    msg.type = 93U;
    msg.op = 70U;
    msg.request_id = 20309U;
    msg.plan_id.assign("ERUSCHNOCHVSWAFALJTJOGEQYZQAOHNUPQORENCBJYTMUWMDSJCSQJEAWWTUMWDOHPWSSWTXFXGRGIBPUWRJKBJUWWAQPYVHSHHNUQKOHYLIRZLCDTZEBKFQTXIMVZIDNVMGXEBGANXYGPKGKBQIZMPJEDIOFOIFATDJQVKLLYTEPUBFEZIPMNKRDRFZKLCLKCGLXVRJVG");
    msg.flags = 6392U;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 124U;
    tmp_msg_0.flags = 179U;
    tmp_msg_0.description.assign("TODQFIMVOWLURABODVDDGKQVGWBAUXHEZSCHMPMWSWZEAMMNJUBKLXVCBJSAZBHEDYTTEZYVOFSUWQYBDQZFOQBZWCFPGXG");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ULDTSPGSMTOHPNPZBIQCDZGXVSAYYFEYONZKXOCAIKRQTRYIIVDFGQFJOECLHIYCPEHHEBNJQEBGAQGJWVAKTNLDZBNBDPGUROUAJSTRCYIVGPJNMASZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.881025189707);
    msg.setSource(26472U);
    msg.setSourceEntity(238U);
    msg.setDestination(7067U);
    msg.setDestinationEntity(121U);
    msg.type = 121U;
    msg.op = 112U;
    msg.request_id = 58933U;
    msg.plan_id.assign("VOXJRNTSROJDQWMDOMQVLTXUZFWGWWVECUUZMALOAOJQGQSCXTVHTVNHWTUJCWZICGFBFPFQKGRLZQLKGAPWFTYRXIEJECSZXZVIPACKJUNLFERPEFZOKBHQANXMEUKEIGILMNAHWYLWGFGSDRKXNCBBTMKUGUKSKHJTVDTIQCPDMHJMIEIZDHOVQXAZGIRLYPFDHBZMTMKSXNPAY");
    msg.flags = 30990U;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 2885491017U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LOHKFGPRAZSFSASYYJCHYOBYLLINYOLWWCIQDDANCMZMWCZGFFHPVGRPRIFEIARHKUVUAMKTGKFEKTAQNLUWKROFTQDBQZSJYQUXVMXZAOZREJDAWJBJIPGQZBCVNHBDXQDEUIFLYHRGPGPUROQFBVQNLSKFGDWTAPVIWMOEZUHUSOSCCJMXMVNWTKJOYLRNTGXGUBVHDKIWXXELETXITMSZARMPPHYDXKSOXTNBZTMHECDQILJJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.227130506946);
    msg.setSource(2283U);
    msg.setSourceEntity(244U);
    msg.setDestination(7347U);
    msg.setDestinationEntity(145U);
    msg.state = 177U;
    msg.plan_id.assign("KDWHYMAIIXWDRXSZGBTTVAPJPQIHXJTECTGBSJYYFWVUBVXMTBFIOIYCGZMQXGHRHCTODSRENAISLFJGWTPXQPCZLRPJUUEDFZVNCUDGYDZIDOOQLEEZQRESKZDZCESIYVPTSLAYGQROUWF");
    msg.plan_eta = 37819921;
    msg.plan_progress = 0.569170547058;
    msg.man_id.assign("ZZMHZFVZFMQNXUBOCHDJWSUBRERLIICWMEVPFXXEPENSIJZNXTOSRWCBYPKPNYOJCIAVLUOJKLJXXHTGRRLLTHTKAHDHTVAVEBKXJLVBZCEGFKHFUEUNQCJRYKRPDEYILVSTUHYLDYSLMPAPZGXNWEPJBXMHWCKKZAFJWGADHYFMOJQYKNRBLUWNTMOGCVQIMGOIMQDPAGBNISOCTQTQOVVQRBUZBYSSGZDWSAWGWIEQAMNPQYR");
    msg.man_type = 21623U;
    msg.man_eta = 1307447260;
    msg.last_outcome = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.636470731509);
    msg.setSource(12196U);
    msg.setSourceEntity(35U);
    msg.setDestination(54233U);
    msg.setDestinationEntity(46U);
    msg.state = 194U;
    msg.plan_id.assign("POIHTRAIISXYHGAUFRZFGKHQXCZRISMPBCPMFLLWSLCHUWSYFGRTFAVPMJCEYMLOHEOAZSNIJWKUDPCTBTUUQXLFCVGERNDPSWJJXKXYLUQPWUSCGGVBLIXMLVTJRRGOMDZDBPLYQVTWZ");
    msg.plan_eta = 2033758892;
    msg.plan_progress = 0.597776156278;
    msg.man_id.assign("ZQMWKMLNIIWBAVCACXANSFSUPVXWUQSUEXIDXSWVBHTDPVFALLGKQDAKWDLHKOQJCPMJSATQPZZZVIPUOKJNAQKLGUMREZNUYPYPXMWKOYFYHDBTXCZSEGJEEWJMGIYCDJCECRGLWNKYTHNE");
    msg.man_type = 59520U;
    msg.man_eta = -1258903336;
    msg.last_outcome = 178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.556646128583);
    msg.setSource(23198U);
    msg.setSourceEntity(210U);
    msg.setDestination(55344U);
    msg.setDestinationEntity(119U);
    msg.state = 229U;
    msg.plan_id.assign("XREUAFVBZEFWDYGZJGJPTCHVDTNSHFFXRAUOKMKYONLAXWNOSOIIJLQASZYWUSZNDRSDNWJGUMPCQRMQDVJUCHNJTPJEIWKIQXTKTWSHHQUZKBXGBMGP");
    msg.plan_eta = 127580225;
    msg.plan_progress = 0.911932744443;
    msg.man_id.assign("ZFQBMVNWHNDJHONPHRFU");
    msg.man_type = 61246U;
    msg.man_eta = -629328577;
    msg.last_outcome = 115U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.494291681918);
    msg.setSource(24746U);
    msg.setSourceEntity(177U);
    msg.setDestination(7943U);
    msg.setDestinationEntity(115U);
    msg.name.assign("AGXMHLKZIISYVN");
    msg.value.assign("OXESIYQCMFSVKPSYUZKCXZYGVBYLQUFQSHZMOFEBPAQGFHWIMWNBNALASTJPGTOERURDKJEXDAQZCSTQATIDVYBWWWJPUXYEIMDNPTOYAQNMGTHLQTLNRAIEGRNGOHALMURDEZUOCJGGMHFXUVFGBYBHKVVCQOHHUZPSVLIECJAXVWPRDKGBUIXDECORWFOS");
    msg.type = 116U;
    msg.access = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.292517781691);
    msg.setSource(7127U);
    msg.setSourceEntity(212U);
    msg.setDestination(8829U);
    msg.setDestinationEntity(152U);
    msg.name.assign("MTHRIDNZSVHXMECMIPVRUPEEDQFUJVIMURTZWYBDHISUBSWGJBLCGYEKQJGFHXIKYQOFKUWYULKRDBVLQZBANQMGLXWZHCYNCKDMNHRJZTJOAGYDUJMWLTTSOLPTLPOXAZEN");
    msg.value.assign("FNMIACSULCUTEIKYVSOIAIQSNQSMGDCDQMRSFLBXOSOWVYFTCJABTIEAUCJMADJPURFGOZNXLCQXULDLZNKOMTMRVPYDVYBUHOOBGKWRXYVBPCRLKFPEPYKAOSDWZMHMMAHUWUHTEXXFFNYHITCGWESVEBEQWGOZSRZXEVMEYHNRXBQJRZILUZUWGZDOFHJWSJIKYLJPGBRKPFATYRIJAPBNLGHQVQNCKTJDKZVXQXJCZENFQPAG");
    msg.type = 56U;
    msg.access = 16U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.427405304206);
    msg.setSource(8461U);
    msg.setSourceEntity(168U);
    msg.setDestination(6549U);
    msg.setDestinationEntity(7U);
    msg.name.assign("MOZSBNGTPYHGALCBTIBVKDSIRNQSOKHYTINCATWOFFLCKDAWUQWDNLYXBBCGDRNLVZUPFDRTKROHZIEELHJJPMZJFYANVOPKHOSHVSWRQEWVSPEKODKQCMQYMJQRIIXPHFGEXVWLPAHZAFVVOEZXRCLJUFDUXNJJIRDQUTSFTRSETYMGCLQCAGTVSTGIBWXYKBEYGHMXXUQEO");
    msg.value.assign("NKJGAXHIGFCCOBNAAMRQAXLYQQJSTENBJIR");
    msg.type = 10U;
    msg.access = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.689960947099);
    msg.setSource(2762U);
    msg.setSourceEntity(14U);
    msg.setDestination(35576U);
    msg.setDestinationEntity(54U);
    msg.cmd = 43U;
    msg.op = 31U;
    msg.plan_id.assign("CWECKUWLBHQXRZOKQPZQAIUDDANJVBKWPYVLJBHIBQIUTOVAHNOFEIKXBEQOFIHRSHXHJUDQCCRDTYQGLTGZIYPOYJWSEVIDRMEFZRCVQZPRRUVUCNUZMGFJMOAFNNXWPTBTAMRYEUJEAYHXMDTYNMTSOLWXNACPBJUETZXRWCVPBSADKQLOWSEVRBDFLLBVLIJKKLCTSJFUMPNKHSZMPFG");
    msg.params.assign("HVWJCAYAKZPMXQLBDNMZFZCQTXSUUULHRRJSWDHNZWKFPJMQAPBUWRMVSFWYCXSGYILKKTWLYOJCGDTGNCAQASTUBQMBZGERAEEZNYLKGRHIHKOGTIYTLVYOFCVLQUMDMOLOHDCVJKOAWBLESXAGFHRW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.563482243977);
    msg.setSource(43413U);
    msg.setSourceEntity(56U);
    msg.setDestination(11130U);
    msg.setDestinationEntity(108U);
    msg.cmd = 25U;
    msg.op = 219U;
    msg.plan_id.assign("HQWVSMOLOQCWQEQUVMJHXLZDEUKRPMCSURTAGNPSPFWKFLCRGEOTULXMHSISCKOBAHXJQHZZJPESDEWKIVWXFWLXTYLMKNAKABDUJPDYYHLEMWLKDCQNSAOMVJEBYVVNNMFPNZYUHBAEHTDJVXVTGIBFPJOXGIPHGINZGGVUUFTWTLNFBRZYSIKJXFGKAQOPRRTJAFEDJBRMSZ");
    msg.params.assign("XOOFGAVLQRUJNTONLQNJUGAUVNUVETTYMGQYLOQLLWMIQIRCXJZKTXPCNBZWVJPZEEHBVPRLZJRRDSVHFMPMZGDQPSWQCZPUGIIRUQJHGFDNDBSOHEECGZLCCKUAWKFNPEMEFYAYHSMKKHOHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.0233378616013);
    msg.setSource(4689U);
    msg.setSourceEntity(120U);
    msg.setDestination(24150U);
    msg.setDestinationEntity(99U);
    msg.cmd = 192U;
    msg.op = 2U;
    msg.plan_id.assign("PKHHTCCSIKNDBPAUVOQDTFFBRGRPCWDNNGFKVGNXRMKAIEBZWXCKJGSVABLTJMQUIDVQNDUYUHGXNBGNHAFGFZJHIHUBQMMVFTXMECJWZTEURPZYICVFORPMVSDRYPOCOHWLEEIALFESHIRXOYQKA");
    msg.params.assign("EKWFIOQDYNGUIUVEKSMDEHQTFDGUYJDPNTJPEQUWFRHDGXDHTCCGDXVPZAJAOTIUYKKFUMWLCIZCSWNVVSYQLVQVNAZVDOGOBVZKMARJBKQKCMXUPWVBCEEUCXAOBGRIIRSOEHYZWQMCBMNLAVHRSUNKRHANNTHMMRTLJGSZXYBFJBKFLR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.759293758833);
    msg.setSource(42862U);
    msg.setSourceEntity(118U);
    msg.setDestination(2820U);
    msg.setDestinationEntity(210U);
    msg.group_name.assign("CHBHVGMQEMOCMNDAGRERLYFYFRWJZSPQSEYXWRWLFXKKAGBGBTKCYDEAWJUSUPWTUDTJGVOCNODVNMZOMKSYJHHQSEJAUTRPS");
    msg.op = 197U;
    msg.lat = 0.645137225066;
    msg.lon = 0.694835665794;
    msg.height = 0.33246467191;
    msg.x = 0.697061283317;
    msg.y = 0.807253750895;
    msg.z = 0.310508052716;
    msg.phi = 0.859580472046;
    msg.theta = 0.342770814441;
    msg.psi = 0.746312426259;
    msg.vx = 0.760858400435;
    msg.vy = 0.754904259945;
    msg.vz = 0.930721727568;
    msg.p = 0.570666964948;
    msg.q = 0.165792316618;
    msg.r = 0.114792220458;
    msg.svx = 0.715138355377;
    msg.svy = 0.699992998397;
    msg.svz = 0.905286823299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.903618244239);
    msg.setSource(1519U);
    msg.setSourceEntity(78U);
    msg.setDestination(52728U);
    msg.setDestinationEntity(97U);
    msg.group_name.assign("AVEXEZMVNVGWZMNJIKXFGSNOBEZJDBDRLKTSOEYYPFCCUSRFGDHUMCDCHEAVXTFWCKABJOSBPPFMVOYZ");
    msg.op = 159U;
    msg.lat = 0.229411913311;
    msg.lon = 0.941949436133;
    msg.height = 0.872910636322;
    msg.x = 0.657414340078;
    msg.y = 0.959991497301;
    msg.z = 0.319683571616;
    msg.phi = 0.921429272494;
    msg.theta = 0.397094156096;
    msg.psi = 0.716714946013;
    msg.vx = 0.68275005751;
    msg.vy = 0.298037600661;
    msg.vz = 0.593409089136;
    msg.p = 0.499959419453;
    msg.q = 0.415234038019;
    msg.r = 0.176499329801;
    msg.svx = 0.81222142928;
    msg.svy = 0.998259901483;
    msg.svz = 0.883681969527;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.326449541902);
    msg.setSource(21431U);
    msg.setSourceEntity(194U);
    msg.setDestination(25761U);
    msg.setDestinationEntity(205U);
    msg.group_name.assign("VOHNIZEYQWXIRAOJODTTYQJRGXTDORCRJOZDWUBKHIACYMSKNFIHBSSFKGTGUWAMYIQKJYNTBPFSUNPWZSUMZNWECHAZPRAPPVERIESHRHJUBTXOHVWKMZDQRDAMFLSGJBKXDWLRFVTVCKVEHFBWIISXGOZGBLCFOGWUAUGKLDXKYIYCQVPVQWFZEDYGM");
    msg.op = 228U;
    msg.lat = 0.241507406141;
    msg.lon = 0.472285170117;
    msg.height = 0.0388109372774;
    msg.x = 0.121490625509;
    msg.y = 0.901080075826;
    msg.z = 0.408654001124;
    msg.phi = 0.280127564356;
    msg.theta = 0.176605444649;
    msg.psi = 0.821822374441;
    msg.vx = 0.498462371686;
    msg.vy = 0.321526321;
    msg.vz = 0.0843330192453;
    msg.p = 0.853020150041;
    msg.q = 0.334800270671;
    msg.r = 0.427926072093;
    msg.svx = 0.936142030674;
    msg.svy = 0.164563505453;
    msg.svz = 0.415298164688;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.285461506159);
    msg.setSource(39273U);
    msg.setSourceEntity(132U);
    msg.setDestination(25283U);
    msg.setDestinationEntity(45U);
    msg.plan_id.assign("ZUAFXVBNOAHVFQMIPTLWQXPKCDJMVGXQIHCEIYALTLQVXYXDJEDSPHPGAQMTTZOEHVXDHSGCLGIWQIEULZ");
    msg.type = 220U;
    msg.properties = 163U;
    msg.durations.assign("YWKJCLSAWZXAYHOPERKVYNTBOXISUXSEBLRGCVZFXVLPVEQQOVVTAOBWKAQDUZZZXPGPYTQPDLLGFNGURUWJATVAFCDIAIILIIQWSJCBMPVTDWSKDXOMIYRDJFLGYXCWEYLYNEUJMHAFHKCTUSDTJCANFZSPMCPHYRFDNYQBMGFSTUOMH");
    msg.distances.assign("QAJSCBYRMHHPUISQIMJPWYHOHMGAPMGWATOAYVZGZREFXKAZRBWLPKCUWWVPHQOBXWNFGHQGNKGFTRJNDMNVSXVTLZXMUTKQCDEJBVECERCLYEPTMNJVH");
    msg.actions.assign("HJEKJBXCXWKUCYCMLOVUVVEOQCTIGGND");
    msg.fuel.assign("HVMMSDPCEDLGEHIIFBVQQTIHHRMABPGHFTJGXUEQFYIADOWUMOWTAAMYWEDZJQXHOAVJGNQPYPYEBFTKWZXWKXHWMRUOZMMRTKZDNTZQOXPEEQWZZZATGYYMLNL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.0287578172742);
    msg.setSource(51738U);
    msg.setSourceEntity(251U);
    msg.setDestination(46851U);
    msg.setDestinationEntity(138U);
    msg.plan_id.assign("NGJWWWZUIPWHOEOKCURLAEIHNMAVGEDTMICZMWWXITFJQQUOTKMTFXKBQQYFPNGSWDEHFTYGGEIMFCBJYLWKMXYZJVTMTVRIUACNHCBYYRFYXIHSGVJJBSDAZPJBXOEHJSLITFDNLPGVNEOPHWDDFSTYAQXPVZNZSVHKLMEQKURLKYARCMMXCLRXJWRGBOZOGVUPQSDPLOQ");
    msg.type = 214U;
    msg.properties = 143U;
    msg.durations.assign("ASUQXOMLUTXZLRQNFLTRJAGFYMBBUYSSMSEXVHYUATDVQCEIXOHNSTQYHEXHQAGQNKVVUGNKCBFLFIDLSIZPBPEOONYHCBBGORFZPZPWCWZWNNMFOADSZEDGVTEEKRIMULTIDAZQCYPVGAWKFBNYYZBUJJ");
    msg.distances.assign("JBGFLMHKPKCYPZUDLCSPQGRYGVFUJNLXGHMTHEKIBK");
    msg.actions.assign("IOFVTEBZNPQALDOJGRQCLOZBYVNKCRTRSMIBGSJNGZSUWFQLEWTYWXYURHYOWCHGVDUSQLXQXCGWXXSMXPXWTNIAMPYKJKZMHJPVEOFQVDEXTHKLGWNGAOELHYPZKGSZCDEVJUUDDEHZPRHMKRFUMTFMLWHWBPFJIBTDICHYHURBTVBKYPRIDZQUENAQYZAVLNTOOMNZCOGRNTQPKDDECUCJMIUFBFYASCAAVWVBISSKXJJIJAOMIGR");
    msg.fuel.assign("SMDPGVHZFSFFCIEOBTXFWUUSLSCHIEJQTGLVAWZTHKZPPVHEWEDRQRABBSKQPLZGNSIHMAZYHGDEYBQKLQONMOXWTXKYDZKRRHUFUCPUXJOR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.334428315187);
    msg.setSource(1700U);
    msg.setSourceEntity(56U);
    msg.setDestination(10089U);
    msg.setDestinationEntity(215U);
    msg.plan_id.assign("ASEGOHHILCYZPNDGEYSUAJWWVMKNBZDRPZYOAGIMHDYRBWSBVP");
    msg.type = 4U;
    msg.properties = 218U;
    msg.durations.assign("XAIWWHZHPABSIZRQGBKEGTNGLVOGTXTSRUJYGDRDGFQBACIYHMRWXXONWJNSPHUSIILFAXARELIAFZJJKKKGKY");
    msg.distances.assign("WURMTXCXVLPUYXRJIPCIVQVOWJYPQACDCCSXCTINHYZUNVGOVYNOOAZJHAPSKVSCPSJZIFUZJXGTFQRMQNHBVLFNBMFGEMLNNZBGEWXWHGDMHZKZOFITQBYEPEGUAWVRAOSQEOKLIDJBDDGKYDHHULEBLWROFQCHNYKAZMKNWXESUQJYYLZRZFDCMSALGBBJUAWK");
    msg.actions.assign("WJWIRBSFCAJCPVZZNZDJVBOXLOHMOONLBKTPTPPUEQNKHOTTQDGYPNLCJURUXJIFOIVVVVMCDOMTTINKWRJISOKQSLEDJDZZBJGUSLWPRZOMEQRSXYQSCEAM");
    msg.fuel.assign("QKOBZQIYCDQISZWTRHOQAVNGVHUROXBWDSFNFGDSKAQBBBHVCPELTNUBCHWVFM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.36019939637);
    msg.setSource(32611U);
    msg.setSourceEntity(35U);
    msg.setDestination(51874U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.838305671301;
    msg.lon = 0.229165697033;
    msg.depth = 0.126006810147;
    msg.roll = 0.63362420406;
    msg.pitch = 0.958629975704;
    msg.yaw = 0.35461629894;
    msg.rcp_time = 0.0445751769379;
    msg.sid.assign("IXRVUGTGLVACUL");
    msg.s_type = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.201694239959);
    msg.setSource(14556U);
    msg.setSourceEntity(35U);
    msg.setDestination(58652U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.00355613790455;
    msg.lon = 0.912108446366;
    msg.depth = 0.167895031891;
    msg.roll = 0.691354761751;
    msg.pitch = 0.209872064446;
    msg.yaw = 0.170141249864;
    msg.rcp_time = 0.93299140058;
    msg.sid.assign("IUENPHNNWKXGCWJMXKVSMIUFNCKHDYAQKEQSRQFULSTWESRFNEHGDJRRLOUTJARDVLBDWPWNQYVAFLURK");
    msg.s_type = 237U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.654447811264);
    msg.setSource(56244U);
    msg.setSourceEntity(149U);
    msg.setDestination(9824U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.249783369637;
    msg.lon = 0.0259392478513;
    msg.depth = 0.379547782951;
    msg.roll = 0.156913196618;
    msg.pitch = 0.426313254025;
    msg.yaw = 0.263411219451;
    msg.rcp_time = 0.431806260708;
    msg.sid.assign("YALBKUGUJNFDQEMAHDSSHZSEZBQILSVVHOGDADYKDXBAWNNLMPUZQTPESVKDNQUWVYJTMFNAQCXIRVDWBBJJGLPWHGNICXVRIGTOGZIMZKQMZFVYCUGPRXKDNFQ");
    msg.s_type = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.877026171923);
    msg.setSource(21360U);
    msg.setSourceEntity(71U);
    msg.setDestination(32440U);
    msg.setDestinationEntity(84U);
    msg.id.assign("AEHIUXOKFAXZEXPLBYFRKXSVECNWXTNBUBCG");
    msg.sensor_class.assign("WXSZYNKESWRXDEYLKXHIHIFNYRZTQEWYLIJBTZQBTHVLFYJFUBEPRQBLHQEGTDZNQXPYFWLGGT");
    msg.lat = 0.531497082373;
    msg.lon = 0.827106554933;
    msg.alt = 0.485432802684;
    msg.heading = 0.802003666747;
    msg.data.assign("ONMDMJXKNPXIYLGKBCXZQMVTLQPZAHJUCGAGECUPQRVAYIOJFFZAYVHBITXZCACJFSTFAWHUMPGBPMWBMVKZLDKMNMAFPTEPYCJWDURJHAQXFNGADEDKGPOLQXUQXFKQLXDSSNUTODGCHNNUYHLSKE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.41191690096);
    msg.setSource(37175U);
    msg.setSourceEntity(207U);
    msg.setDestination(63118U);
    msg.setDestinationEntity(208U);
    msg.id.assign("TMIAVFCCDUFDGDGKXNFIMIXVEOETPSGGFENIHBRTUTXQRGKLQKSLDITZBCMVHFGHXSJBXGCIYYBEPWAJDNQOWRAGVRSHLENLBVUZHRHSUHPYDRNXNPZYEVQBBVHKUAWWTDJFVWLCAGYZADTQZAOHLECNFZWFPBKXZUKYYZLECWAIEFIREYUSSJQRDWNGAMIOXWYMJJPAQCBXZOQNMLCMSS");
    msg.sensor_class.assign("MARYPGKXRMUHNWPSOHBEXMMQDRWITXEUZAHPVTXUYQPCQKCVUTMHCSWQZRSXVYRLMUKBNWNJALVIGBKYGDZTNWSQPGFCOVGBDWKSKEGIOZNEIIMWFSWRZQSVCHOGVGJHIBQITEXLZKMLGEKZMFDWJOTEGUUQABQDNOWFYNDDCYMVJAKUAQIODBARZNRSYOEXAZDVBBJFLRNCXJNICSKETFAPAZOYHHFRJLPU");
    msg.lat = 0.613070922384;
    msg.lon = 0.840126911007;
    msg.alt = 0.980912978782;
    msg.heading = 0.488809112633;
    msg.data.assign("TUNUOMIKPDNXULUDJWVIIGFQJOSGXDIVAGLSLASGNTXGNEJMKDPMOLABRPOXUIZDONQMIWJLWFLKQMZRERNFWKAYCWSQVZLJYBDHXSTRVJBHMKYERMAJJGGRNPXCHVLIDHTPHAKUEIFFDKWVKWTAKYSFHCCHBWUGODAMCEBVJJWQGQLVPPYFAXTGXHRO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.479970060881);
    msg.setSource(10158U);
    msg.setSourceEntity(249U);
    msg.setDestination(19505U);
    msg.setDestinationEntity(226U);
    msg.id.assign("CUEFGCQMRZMLSLKLCJBIRLJTAUIYSBRAAKBPEEDGFWFDJXMXMGPNWOPIZYUXVKNDANBPUMJEGUXMQQQPTTWN");
    msg.sensor_class.assign("ITOYUTRTXFQMZQFZLJCYHMNGPBBNGVKUHOUJOPRZCWTCFIYKNEXPPDBSKAHYTQOEKFAGYBPTKOEAURBDRQIEGEZWWDRTERDBHIAULNFJHVEERBLADKVDWLXUBSFJQLFTUYDUBFULVAGNOYXHSGKNCMQLJHZTNKICQMXTMSPWNJIYJBVPXJSZWEOCQLVSW");
    msg.lat = 0.911011596005;
    msg.lon = 0.736102658989;
    msg.alt = 0.809163941547;
    msg.heading = 0.341475389342;
    msg.data.assign("FMLNEKSTHAUPRQJYGUMVTUEJMPVCOBBHQDOBPOWRQAOIDWQVFIHSCSTVWCKLTESRTANWCSNJAWPHOZELXNUYKJFERUKYGJIDRSBPGMYZDVGFLEUZWXONYORYBUCDHZNCYZAKLZCOEMLZFCNGZGOEIXFBJEQIVFHBQOTLVKMMIXSMVUQAPWIFVCLGHIYPQLRSJDPVTKTXYBGKSQTNYUEMRHWDWJSNGABXIDXKNXHPL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.484017224988);
    msg.setSource(11751U);
    msg.setSourceEntity(58U);
    msg.setDestination(55357U);
    msg.setDestinationEntity(223U);
    msg.id.assign("UMGULQYZFRGOFATYHTVUOJAELBUKSGLSBICFVEKKBSDWEGQWMPLIHVGVOQWNAQNKWRCWWLIQOQJAMTYKCOZSOAJHNJWLGVTUBPMGZHKTZPUHHMTERHEX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("BXRUQXMDFGWUXWHHSWAYVAKXSNOGGTHHYFPYZIRHENTTLIGXEQAIDYIGDLRLBJUTFCPBAKIPBKXENBDHWZRMSNOKAUZODNHXKYVXZXDOSACYSHJJCILVVDUQEWBJZZKVKEMATAMGJEOWYBRGMURAFFHPLVPUNDPEPQWLUJSJNFT");
    tmp_msg_0.feature_type = 191U;
    tmp_msg_0.rgb_red = 44U;
    tmp_msg_0.rgb_green = 227U;
    tmp_msg_0.rgb_blue = 163U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.93987447152;
    tmp_tmp_msg_0_0.lon = 0.731197136153;
    tmp_tmp_msg_0_0.alt = 0.933450030548;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.923026936077);
    msg.setSource(22512U);
    msg.setSourceEntity(13U);
    msg.setDestination(65233U);
    msg.setDestinationEntity(130U);
    msg.id.assign("XVEJQIPFIZOJSLIUSWQBCKJTEFXIOORVZYPDTQZRRUTBBMYDHXOHKCMJWUXMFVLBTVMXIICDVZVQFJTSITA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.968244095652);
    msg.setSource(21396U);
    msg.setSourceEntity(184U);
    msg.setDestination(6812U);
    msg.setDestinationEntity(4U);
    msg.id.assign("CGJYZSTVGIVFIHTWNFYMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.853050362053);
    msg.setSource(49076U);
    msg.setSourceEntity(15U);
    msg.setDestination(54107U);
    msg.setDestinationEntity(249U);
    msg.id.assign("YHMUJSGVCQKUURLRJXLFPNUOVOTYXEODHLMLLYRWBOFQHPAXYVENQMXDKQOXDBISANYEJSUBQPRFZZKQXCCVLTGKALBZURHTHPZDCFRZMWENIFAGCRYIIOHAABYTFNMKDPRXGWASOKWETAHVQOCBUBWPIJQGNGLZLFMRIWJNDDCTTZHBVTPSMJMBTMDAUYKVWWP");
    msg.feature_type = 238U;
    msg.rgb_red = 186U;
    msg.rgb_green = 179U;
    msg.rgb_blue = 115U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.664740084669);
    msg.setSource(15014U);
    msg.setSourceEntity(105U);
    msg.setDestination(40933U);
    msg.setDestinationEntity(86U);
    msg.id.assign("TDCGALRNMMHECFBTLYJBEYDVCWXWLRGSNNNCJIYZUFCHBXJTTBKBVUUYALPNCZGWXCPMPJVPVAKBNUSSDSTVRQTWGFXWEFLTKGGIBEDQCPKUOLFVBQHQXWVAOIOAGEMY");
    msg.feature_type = 234U;
    msg.rgb_red = 99U;
    msg.rgb_green = 62U;
    msg.rgb_blue = 64U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.970713074112;
    tmp_msg_0.lon = 0.469596995665;
    tmp_msg_0.alt = 0.677413294295;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.706420442646);
    msg.setSource(16658U);
    msg.setSourceEntity(14U);
    msg.setDestination(46336U);
    msg.setDestinationEntity(192U);
    msg.id.assign("MKDDQGBONIKABRUPGICSENNDIDYGCNDNCWPAFVLHFBAJBYIRFAXSWQMSGUKGYRSENEVXETCTWYDVUOCDVNUZLVHRCTCKGHGJCPMVZMPYOGSLNDOZZKJYREJKARIPLJFHZJXUXJWNHMFTOVXQYPPZEPPOMSVRGFAZKQFSUTFBMHCFEIIYERJDIVAAMTESGYAOZLSQTNKHQUWBKXITLKWIXTUEPHMBVBHBFWZRQRQWUMOUSOLYLJQHAW");
    msg.feature_type = 11U;
    msg.rgb_red = 204U;
    msg.rgb_green = 187U;
    msg.rgb_blue = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.877831709046);
    msg.setSource(22560U);
    msg.setSourceEntity(234U);
    msg.setDestination(24075U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.187008886488;
    msg.lon = 0.50421753855;
    msg.alt = 0.531258199494;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.704384787591);
    msg.setSource(6004U);
    msg.setSourceEntity(15U);
    msg.setDestination(54739U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.906619681658;
    msg.lon = 0.0876439558118;
    msg.alt = 0.90642999551;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.294955588052);
    msg.setSource(41265U);
    msg.setSourceEntity(119U);
    msg.setDestination(56358U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.755306704974;
    msg.lon = 0.789495167986;
    msg.alt = 0.0608860349515;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.778529229389);
    msg.setSource(55383U);
    msg.setSourceEntity(38U);
    msg.setDestination(23650U);
    msg.setDestinationEntity(214U);
    msg.type = 41U;
    msg.id.assign("GDNAFOAITENFQEMIBUWIRDMCJEDJZUNYPBHDSSYTGHQYSFDBAJYCWKKFHUOTQIKXTLSXDKXWGPIYW");
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("ZBPNHMELGPABYSRPBPCHSBPXKDMKSXCHNALLVUWVUFAKYBRZTQYZFX");
    tmp_msg_0.value = 180U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.362661843702);
    msg.setSource(27379U);
    msg.setSourceEntity(151U);
    msg.setDestination(17692U);
    msg.setDestinationEntity(32U);
    msg.type = 198U;
    msg.id.assign("DELFSUXIFHNDLVLGKFMRBQPZYSFGOVABCNDXXJXRXRSNJIQPNSOLHTFVMTCNGAURYCGVIIEMHOVUKOTAYZBHKUBSMRBJRRIKLXNNSEJXKFAEDWLYEWGUISFWUYMAMDGXOQAAWRWGAHTZNYPQHFPCLPRHHNQFVIKEWCSMZWQTNDOCKVJJSZBWLZIBZMBPJUUOHYVODVQKBJDTEL");
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("TUQCRUJEYLSGBKYVLDKPFCAVPFTNCQZEWSHGIEHFAITCYXORROLTCMQVPNLXJXMUBMSEKNUUQGJKNNOQTIVLJCOVZQFMJWMI");
    tmp_msg_0.state = 219U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.586308473383);
    msg.setSource(45307U);
    msg.setSourceEntity(223U);
    msg.setDestination(5320U);
    msg.setDestinationEntity(13U);
    msg.type = 184U;
    msg.id.assign("YORZFOYASRRGYIWHNIOJJFCOIHTIYRZLWUNPOWXTLZVFFJCHWNRCGJCMZTEZXXTPHMSJBKHDYAVKGWCASTDERODZLEVSGDNAAIWQQLFTULUABUXSQDHO");
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 15354U;
    tmp_msg_0.status = 102U;
    tmp_msg_0.text.assign("RQFSFPOYEMVMLHDEXIMWTSJRYGXFJSHNAGDMRLUIUJONJJHJWPKZNEVAUZYLKGKUDTHBOASBEQVDFISAIAOKNFQKQPJHSQLSZUSWZAWJHXNVQLHGGICMUQZCVXWTYETADNRQEFPICOYNPHZZCJRTICVPBXGBFXPKIYEOCGLIZQKVTERXRDBX");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.867411009305);
    msg.setSource(6756U);
    msg.setSourceEntity(158U);
    msg.setDestination(8149U);
    msg.setDestinationEntity(207U);
    msg.localname.assign("UFZGNKBYWYHUFUXTLHYXLMZBZOAKPPSCIQUCKBJTARPWLDHOORRTMEMCICEFSXXWVJIHQGWPJWOSSSIATRMFFNQWYBIEGZZMVNQZPXFDPAMTDYSOAVPNNRTFHRJJKCBEZAZJAHUIVIORNXLYLUJCXNDDBGUTJFNOBIGVRNYGRHFVLWOIKLCDQJEXAGPHMKEZTUXEQQDRCLCWFKVGMLUETPYQBOWKKYVKHBSMAJQGNXS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.0648563115742);
    msg.setSource(34666U);
    msg.setSourceEntity(28U);
    msg.setDestination(9151U);
    msg.setDestinationEntity(215U);
    msg.localname.assign("WBZEOBTRSGEEO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.626253143444);
    msg.setSource(61491U);
    msg.setSourceEntity(64U);
    msg.setDestination(50585U);
    msg.setDestinationEntity(163U);
    msg.localname.assign("WNCGXMOPEWYBMJNGUZZVSAYEVUUHOINNDHPSPZIRXGAAGHILJOAXOFDDBUWJFWZGZODKJVQCPIRTXFKIWFADILOXSRDJMRTSEHYCCQL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.639101257732);
    msg.setSource(19509U);
    msg.setSourceEntity(225U);
    msg.setDestination(58137U);
    msg.setDestinationEntity(140U);
    msg.timeline.assign("HNOQOQAECMPSTJOZRFFHKTPFTJUEOEKZVXLBLBUZDLARSIKDWEVVDPWLXQLYWGAVTPXVWTPXZNLRBIGNGCHAHYKUSWFLJADUFFYOMWXGJNSUIXRRDHXXSYWKIAYODZEHPGBENLUSMAWZLUIYRHCJDRBWKKQAGPZQZYIBMFTUSTGNDFBC");
    msg.predicate.assign("RCBYCAMHZOYMBWGFEFEFVFDKKGJDYNTEIESILGEQDVZZESQZRNQTSPFGFXJYRVFRXYRDSBKJCNINDYVXO");
    msg.attributes.assign("QERORLOCPKOZMDBVYDJPXTDIZCPBNRMUOHGVGCMGAIBSSGJJXMJIESEQVJARWWZFDSZSWKXHYLNBIOPYSYUUEJXDVGEMBMBQGYIHKDTMVQULNURYIWCYFPLDFLZDRKKKLVHVGZUBIOJJVFHIEYTLNOMTTAQGTWPBZAFAYTFXNTVNTWHGAKMSWASECRUPCLJBHXFORULIKFCSQQFZJBMQDUICSXLUWAPCXFGQWAPNKXYNHZKOXREZVOED");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.398809698992);
    msg.setSource(48692U);
    msg.setSourceEntity(13U);
    msg.setDestination(7802U);
    msg.setDestinationEntity(2U);
    msg.timeline.assign("GTNYJFJHULZUMKJMPUYQQJQCNVBRAZYNCJTMDXKHHXTPLFBFRVOJPLKUVMEWGVKZTAZEQFCSQYHLOHCUYOBUWQDDYYMMXXIOGGWFBAVMZNJGUWJXREASIWRFIRSTTREPIHKFKHFYBSLDABWTNMSXZXIXYKPAPWCSNNGXRQTWDWCTHKKBOIOZVPLMLUEGXRKGRYSMCSOVFFRACDELJHGSDBQUOIAVVCQILGDZAANEBDBULDEOIEPP");
    msg.predicate.assign("NDKKUGINAVTSC");
    msg.attributes.assign("ZETKBCUGWCNVSRCKUJFCMCAACRCQCWDINVVQJUJWIJLATTXMHWGPCOLFJBPMQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.991763809813);
    msg.setSource(8991U);
    msg.setSourceEntity(69U);
    msg.setDestination(1221U);
    msg.setDestinationEntity(171U);
    msg.timeline.assign("GFMXIVXLEBJXLJMUYVUSTSSIPXKMLMWDRLUPIRFONAATXDLKSRVICOYOMMEVZYTSULMFFWWDCRSOTBTZEKUNPJPCFJHDCHROYQJSNPYQGWJGZFGEBULWDIMMICKDKCBRRYRGZLKHNIYEKJGCBUQNXSBTFRNVEMQOHBHKVWHHJIVQPPDBNHGBQXDXDIAQVCWHAUZVTKFO");
    msg.predicate.assign("UQLLUPTUBNLXMMBTNYZYTQKNEOFPMVNKLLIQSFAKTRBYCHQWLLGFJJOVSGPIJADOGRUBZAZRCDOEORCARCRIHTMBHDMQLIFKZZESZNFQIDWXGHPAVHCVYPUDSMWWTPEJELONKNAVINDSQZZPUKQBDFJRXHTOJBDAQIAHCHHJMBXYTYRLCGXZXWZGXVCCWBIWYVERKSEDSKGTFUTMQNXWOMXVFCSKWAMOGGVFAEXJDIEVNRIPYUKU");
    msg.attributes.assign("HOWXEZGILRPICHWYLIDIVRBBMQHCSFONXQVLNFNPMUOCTJKTDIOEHRECDAKURXRTMBJQBHLFFSECKOUPTPUBMZVYOZCTULCEEFWGNYOKGZREYZBXNHPCJTJTISXDDMSKJRGKDYKAQJMPWLUNYXEADFVXBFCYPJUGLRHTFZWKHDVZPTAYMYPVAWPINZEQAXLOSBMKMACURWANLDSZSGMGHOXQDNGYVRGZVSWFGFXAEJJWOSJIHQITUBLNQKQIWQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.464677846641);
    msg.setSource(864U);
    msg.setSourceEntity(200U);
    msg.setDestination(34595U);
    msg.setDestinationEntity(149U);
    msg.command = 201U;
    msg.goal_id.assign("IBYMWKYBKQSZQFCPMGYGOHLOTAAPBRHEWXGOVAXSNVKCNWLHKMUXDRQJNJECDBQTEJBHIKUNLSEWVBVAIFZDVFGHXZNLLFEVPRTCPQSJHHFDAPZDLKZOCYMSF");
    msg.goal_xml.assign("HMKPISGBYCAFJIHBSOXXNZCMQVPZVTGMNQRHIMQTIVGZBZZOVVKXMRDTQLVQFWWMRYJQJCKXBXUHOLKTBQDWVBAYQCRNDNYMAARUEUSENBRWEFYTTPFSSCINIW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.251793544741);
    msg.setSource(2307U);
    msg.setSourceEntity(108U);
    msg.setDestination(19438U);
    msg.setDestinationEntity(158U);
    msg.command = 170U;
    msg.goal_id.assign("FJGHKRGAFVVTMJAWRTLDTVGKPYHVCYLJDXXJIMTSYBBSUNXFUWXKPOFWIZBUEHNZQKOZKBTDBGIXQGMZZLBULQRELMDZWWWSOYOUPMZICHDKLELDEPJXQGFGGRXCZQRRILCLNJOWOMBSNCQEHYXXZFGAJVVQPAOFYBCPHUMLDEKOSSQWGTIEJCVHKWENDYTDWDBAKBFYSUAYPCVIUYMQHROPHNACUV");
    msg.goal_xml.assign("TSRPQMXGNHQNHPFYZZJPGBFDRUMHIWAKOVJSEAHMVVKWREYGERWDQTZQZCXSZWEOJDCPNIFUFPBNMFXDYKEUIADAYYWJYZVOBRQLOSLOTCMLEXHMXGHCRVVQPMUKTEGMNUJTSULT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.997289264865);
    msg.setSource(54790U);
    msg.setSourceEntity(202U);
    msg.setDestination(27447U);
    msg.setDestinationEntity(144U);
    msg.command = 155U;
    msg.goal_id.assign("VSDCRFHRWXXESCUYUICDTPXJVRBXLDCGJHACPIGZOVKAPFTZMBWJAUDWZDKBOHYJNSGXIQNZMOEYFULHTDTNOWESTZUHLBFGIHLMTCLIGXAJVIUXTWNRUNKMKQYMCAJUQFVVQLEKJBZZGTYKPIPPGQPAEBHQQLREZVOWCEMFMZWJIYSOMFHYYZLR");
    msg.goal_xml.assign("LBNIDIJSHJLEYVUTPUZTWFIRKNNEZJFGUSLOYHATQQX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.595395918018);
    msg.setSource(12347U);
    msg.setSourceEntity(103U);
    msg.setDestination(55000U);
    msg.setDestinationEntity(155U);
    msg.op = 56U;
    msg.goal_id.assign("RYTRRLJXBBIKQMJATRDIMLJNUSIPZQZMVWJOSKXTXXIJZGKVLSMKYAVAJDJCXVENUIFKHAHQNZCTUETSWEPAJXDKHLJUWDNHYPVUTCMJFISKQEYPHHGECZIYTBK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QAEHVYSSYCEHODFKLLLJKYTFATFMRIKNSPOJRDWNTGHRQIMXHCLNZRMUDOBOWAXXABQWIEIU");
    tmp_msg_0.predicate.assign("MLRXYYCOTWUNVTPWGCRDEGRYUCKXKGYDOLTUZBFBQAVVWEIMBORQCCJXUHVZWKRBUAMSCBFBVDHEGIIYKJTZLIKAZGWGBETHJAVSFEZGKBPSXXJDSPCUNNONQJTZDAWCZDIJXHPHNW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RFLFQHXZUVTPUPCFQQBXKPDSZALWJFONYGDRPJTTYRBODVCZJKNGHUDXQXDYQXQNZIEISEACPWTHFWUEUFGBVCFRCVHMKRWROHRWJBGLQHVNLSKCVGFYCNDOFMYVWLBM");
    tmp_tmp_msg_0_0.attr_type = 190U;
    tmp_tmp_msg_0_0.min.assign("UOUQHTJMTYGNIDAODWLAOPVXRLWBUAWWZYOUSEYKYASQJXMRSIMWTMPQKESVBRKJCRANALETTQMUNHIMEDJNFJIXQDBCHVQNAIKKHITNZMIHDVPEOZUGNBQVKHXLMYCLHCZRXOSEKLZACZUQXBUSRGKGSSRJRVSOUCGNFPZPLOQLVWNHODUFPDCVPWSRECAVYFXJXZJJPFITDIMCYJEWBTXYDZGFAEMFOKFGVIYLPBFBHEBNHGLWQTZCKGYWG");
    tmp_tmp_msg_0_0.max.assign("GDXAREPVUMDIWWUAJSGBDBNKENXKYIEEVTTBHRDRXSNJBHWQLEJNLYJZQZQAZYGCI");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.60620824336);
    msg.setSource(19996U);
    msg.setSourceEntity(100U);
    msg.setDestination(33315U);
    msg.setDestinationEntity(120U);
    msg.op = 144U;
    msg.goal_id.assign("NMXMFSXMURZTBSZZYZMCGDFXILBRWGKDNYCOLALWWGJYMRDXKGFMROKOEYUDCSOHTVJFIRGLVECNEJNREYBVCBTPZYOUJLFZMZUZGFJKYDLTXRPGABLHAFFSATGDQHBQYCUQUHOUEBILNDWHEUPIAYXXACMBIXOSHOITSGKDNQWVTTQAVVPJNHVEECJVWWLD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZYNIWVEYKQNFCUDXBTLTDVFNMXPATEEUCINDAJHWHDANIYLPJVBRSUCXFSWWSSSHCSBKKUTHGZJVJCQGBRQGXPLTKESBYKAUGLQLZRLIZAZJIJGYMVQFRCWHEAMIRXMCMCTQPPPYIMXKQ");
    tmp_msg_0.predicate.assign("QNXDYKRSFNBHTRPDRBKTIXFVTGCVYGPGQOFOLSMFHKZLDCULL");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.234013415429);
    msg.setSource(6456U);
    msg.setSourceEntity(76U);
    msg.setDestination(24312U);
    msg.setDestinationEntity(146U);
    msg.op = 30U;
    msg.goal_id.assign("MJAKCFGEMXUELEVEGRLXOEPYNYXSPGVZLFPXMAHYQPFCRJFSZTYREUQIOIJSBBTTJSNSDLWNEAYZOWNISJQGXVOJVHDGABOCMDPFNDSWXWRWIQFCSWECKK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JMGNFVCEJKUUSIHXXXBHFHLZAMJJQPSMAUYJTLKWRKWQAPQRAGDLGYJOWXLVTEBIZKBEYGWUKHNODSRYNUFSXDABDSIIQQVZMWRCMF");
    tmp_msg_0.predicate.assign("IQCZJOQMMOVIVRRXNRFXMYATFMNSFMGGLMUVGHQNZUBXCUHASAAGNWZBGPVDJEKTXNWVUQLDRQCWIBTPSYKKPLFHVBWXRBUZNNESYAEPSCIPDMJYIPEEZHTRHOUSILKVIFXSLTHMSMXFDVGEQAKLLQCXYCCGQNOTFHKJUZJUTYDJEGGVKZODJBLHDIIMWCEDCUPRLPXWHWFEAVRSOYKNFOBTWHPKSBBO");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.24686993198);
    msg.setSource(65467U);
    msg.setSourceEntity(235U);
    msg.setDestination(42227U);
    msg.setDestinationEntity(33U);
    msg.name.assign("ZGGRPKBXEMPUXRYJQGBXBITCCNOUKTXQHXMKVKZNWSXFAPGTNHWJPLEIRLCOMUZSZKKKWJAOJVWBXGILLUFPEONQEHLQUNYVWCHVYDNJSLIQPFWADRMQGHWFAIWSAHCTHEJYYVZTNVTCSZNQTBYAPEMDKVQJJOEHARFUSOZDHMPKRXCXLHFIZQGPSDRSMNVNQTCOARBFFWCYMIVJBESEZRSVUTUFGYIDOFKYDMADABLZTBEWOIXMGL");
    msg.attr_type = 45U;
    msg.min.assign("WNJFVFAWXNGPVQICXHDPJSZWRIUZOAYCLWNLTYBGOSRUNDYRYHJEQKUSXMWWBSJFGPQIDLDHSBZCMPGF");
    msg.max.assign("JMSBWANGGMBGCPTJZEGSKDPKMHWPPFOQMREOVDNBXOHVRICCCITCQHJMAEOETLWURMWVFCPBGMQKDZSMCUJVQIVZAOQTPADORIXKFLBBUOFPUURSUNFTKMDWCSHZGXVHANUQNUYXJWTSEYIIPBIGWKJHDATNLLDYBKZZZBPUQVZLXSYHFGSNYEQQNXGYQJATRSREEYXZKKRBLWLADOFJJLAG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.776842340325);
    msg.setSource(13409U);
    msg.setSourceEntity(240U);
    msg.setDestination(54967U);
    msg.setDestinationEntity(102U);
    msg.name.assign("SORGLOHUIFLAXZXYBTGEEJUIKXZIEMCEFNPGRCXWHXSFCMLYGURZGYYPLBMCVDRDOQVQVZACZPRYMDXZHZOYVICPHFSAMDZKWIJJPFQRKAJNEBQYGAWRNRTVNAWYSFOFCKRGSSNXAYNSJLWLPKGVTEFITSLQMMLJALHURPDTEBNPWEOKBE");
    msg.attr_type = 63U;
    msg.min.assign("PWRBPORSAVRQQGFEKMCUYNVUMEZHJABEQGGJFICUIBKTUVUKXXARDXDHVQNLCHLOLWENXXOPWJGKLNFRAESRLOLVJKTINPXBQRNIOTQGTMZVSIJVFUZMYFHCRXAHSUKZBQMAFASDR");
    msg.max.assign("CYZANUFMTAVHZLWWKEDCEILNPYLIFTDIZZUWLQFHIKBZBGXQCUNQHWEDGDPXATOSXAKVADJHVBFJOFJT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.412945281472);
    msg.setSource(43123U);
    msg.setSourceEntity(235U);
    msg.setDestination(43145U);
    msg.setDestinationEntity(190U);
    msg.name.assign("FRAQSBMJBCKPAMCZLAUBYMOOTQKKVHHQKNPOWS");
    msg.attr_type = 47U;
    msg.min.assign("XPNTTGGBEFSRZSSBJMMBCLQYRMCOLVCOWRYJVBJWKXQBLWUWKYJEFHVHPGHNFTNQQZLPFISJZUWORULHMZCDMFXXOKQPGLDUVGPRIONAQNKDASAEILAITPCAEHIRUPWBJJLPNKDXHEYMGUSIEHHRWOCZQMDZXZJGHQMIKKGACDCEYTTVARHBYNTXVXMBTWNLDAFTVSDJIIGSUUVNEEUYZEWTOLOFAKVFAFVSQYRXFPKN");
    msg.max.assign("MHVAALZXPWQFLWIVILBCSXYBDHAWZPSKSGNYTKAXKFJVXXCTUTZHJTKFULIYOULJZEZUSOZIMUIRYKQNUPVCMIBJUDCLHBRCYJGPFWGTHSRQGSIVRBVRFAJVMCGLEIAYBMWQOGJLVKHJTAWAPCZPYQCZKNGETYOMFYHDWXIAUVTOFSVU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.191020045386);
    msg.setSource(35493U);
    msg.setSourceEntity(138U);
    msg.setDestination(4173U);
    msg.setDestinationEntity(164U);
    msg.timeline.assign("LSORVMAWRJKWOKYUBCHZRMRFHSAOAVVJPQGUHYBZAYGPQUSMRHGTKNSFKDLNDUIFDFYNQZWGQILZHUWRMYXLCNVEZTASWJTPMXTBJXXIUVBMRSJQJDSPCYKEVOOUGSXJJNGKAYMKQMNFTCCCABPFULVLQBQCDZFXELWJIRVDDXCDEFIEYOEKHDMB");
    msg.predicate.assign("GGIOJNBTTWWRCWRMMRDCUKSAYBWRJOSUPRVLTQHCWJSXVCPMINTPKFIAPAQLV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.184243425916);
    msg.setSource(23374U);
    msg.setSourceEntity(124U);
    msg.setDestination(43422U);
    msg.setDestinationEntity(192U);
    msg.timeline.assign("SCNAIWTBQZQIIBNPILZFHOJFDNVFONERSKGDGYTCUZEQNJSMKFDULMDUGHRCEHFRLEJUNHZIIXUQZGMFYGZAWYUZLWNVUXLKYKVZTXINYPFOPXURZILRXBKTOVOSBSGKLWUAKSESQLMWBWJEXTJCIHGMMELPSRE");
    msg.predicate.assign("CDVLBGLTXULZFAUCOROXEYRKFOPYJW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.375914155782);
    msg.setSource(15353U);
    msg.setSourceEntity(231U);
    msg.setDestination(28597U);
    msg.setDestinationEntity(154U);
    msg.timeline.assign("MYTHOYHIUNDLQFAKEAGXVIZDWYMJDMFIFPBIFTFIXBNZARSRDKPTKUTIUCBSLZOGJBFTEKCIGCCEPWMSOUCMVHCSZWWBOEMDLVRSHDIOHQNGKABVVBDNEMOVQQPJQIGNVLKLXJKZXABDVAHERVRSHTQULHPYCUQTCOKSNPTJAJIOKYHJGPYEMLYNTEPJRXGAXBLUXGUJQWRKFATRYW");
    msg.predicate.assign("MOCYHULXIUWSKMEDOOREZWACFZPXMUJEJEYSTRQCPKURLSLDHLEFMJFRYHPFTIBVGCBITVNBYVTJCXRPXNABZKARNPWIFRWUQGGKZZLTLCUJGXVVQMDNJDPTSMEZHYAFSGXKBENXOASWDOBAYFHZBWVVQBGKXDLMNJCLZDIKIHTQGCHOGQGPKOUHYQXWOYKDZNYHBISGXTDCJFMMWCPUKRWODTNLABRQHV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.580474018068);
    msg.setSource(34507U);
    msg.setSourceEntity(81U);
    msg.setDestination(8910U);
    msg.setDestinationEntity(81U);
    msg.reactor.assign("LEDIQTRJYQAKZXSGLRFRDROANEQBYQLOSAIBLJVXABWIHITSACYNTXELZXWWVHSMDIKUUCYPVKUWLWOGPRVKILWFPFZGBFLXRRMAJSUPVWYSFZZUHPNYCXAMYBGPRHCHTNENCGM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DLYDTLYACGCOEASXHJROMOIAVWBDGXKDJIULMCRUGOPUFGVJKJUGVNVESNRZXWOHOELCYZDIMKGWZIZFOLNCWVECNYBXAMSZHLSMHZZUDTYQQPVEJWBGBRJFREGCXNQF");
    tmp_msg_0.predicate.assign("ZHOLRBRCDFFTOXNNTQVYSZBEABMCKGRHUDOLYTGNHLGXCPLRFZGEYKRDJYWPMPHFNZGWBEIHTMZXAEJDUZMKPPCSKTRNJIKFKJTRNDEEUKSCVGWPAOWVFMXXKZJSLOCVQQYGURVHUUOXSGTSLUHOMZFGYLTQWJBWERVKNODJQ");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.909079365935);
    msg.setSource(12276U);
    msg.setSourceEntity(86U);
    msg.setDestination(4171U);
    msg.setDestinationEntity(198U);
    msg.reactor.assign("UPPMIVSXIFKLLRNWXLKDIWOOJDZBNEBVISYCRTTBKNUBWFIYGTKGMQCZKESMXAOAQRYGPZWEAHIMNDYBEAU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GDMZRRRLOSLNHCXCPYYXUAYEPWEZJLOTUGTOZKADKBKCKDQEYOETIIXFWYZWDNDSUSGOFBBQSYWVCGUEREOKJVMLHYOXSFEMJGBFVZRXBZROHFSTHBYVJIUPHQJBQMBVZWUHPFAPCFKBDMJNXQKIQNDNQVCYVUXMPTEOILEWZTSFGSNNJGPRTDUGBXERALAWZWKLALQMDALRZRPJUNCYPIKVMOTDINNCVITH");
    tmp_msg_0.predicate.assign("FDUXGROGRASROBLNDLPXDJPGKDRWYOKJAZJPTMBCRADYBUDVWHYCEAFBXODZZNUUXHZGUOYZVWSDKYNKCGINCFXALQKGCBACTYNEWFFLFHCCARMJSLPBPGDWRETTBTVMZMIVEQMAKQJNSVXGUHYELCMGIIGEYEHWFXMWZQJVLONTBPUQIQEPDJZKJXSHOSSAPWNURYMINIPOETBXIVTFVAFRCQRJHVHMUTKOL");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.669996446474);
    msg.setSource(58119U);
    msg.setSourceEntity(139U);
    msg.setDestination(31573U);
    msg.setDestinationEntity(226U);
    msg.reactor.assign("ZHCMTGEUUKYCXFPJJNVMXAAJHOKHZFXYTDBZEWOTIYLISIEHFAPMANXFDRPXCNQYMMXQPYYUNDLPPBJSBSGGOCMNEMOFMVTNAGWTVNKRNGFKWNZQRIIEKYAXWQCSULTZJDUECJWQKROZDHMBDLZFEWBUAKSVFVVBLXLDLEWKRUZKGRHEQCHIFCNQYJORZLKTGTSRTWSCTWMIVSJASFPRYXBZBAEHIBSQCQJH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.386591044811);
    msg.setSource(9400U);
    msg.setSourceEntity(52U);
    msg.setDestination(45704U);
    msg.setDestinationEntity(77U);
    msg.topic.assign("MJWDNXMFMOXARGGNADTVBALUAYARILZEMGEQSETLNWHHFCPUEKFQLGY");
    msg.data.assign("WPTLUNWHWGKDPIVODYPYBTIDTLBACIDPGPDMLMJOZNYNNJWUQMHIMJOAKSDAPKNTWWEYKNZAHFHSHCNZOMMEVFEKMORFRFOJXRBSXYQCQNSZURLMTRAZDRXCNQPJZIOJSDFYBTTARFRJFPCBEVXJZQCHAYOLHC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.577808636918);
    msg.setSource(28669U);
    msg.setSourceEntity(207U);
    msg.setDestination(51788U);
    msg.setDestinationEntity(83U);
    msg.topic.assign("OARLCTFAQFZJNBPRWIFXDESVMTYTXWDQVEQSKVUAHEEDJFNBODPQNJWLIPHCAYOLPVMKMVNUOICVKPBKMLDSLPWNVGOYNGNMHXSGUSFHIHZTFUGMYVUIQDCYKGYXBQLESTPPTYZVPSOZUEIXYEBDJMRTNXIEAMHGEZSFRLRUQNBKGZHTGARJQUWITLNHOCRTDKWDXRCWWXBVKSYJFFRFQLWUUJJAIOHISXCHGAJDZKARAZKPBC");
    msg.data.assign("NIZZLDVQRCHZUXKNSKCXZFBDJCCYBUGKELFXSWASSNHUIVESFY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.868852385632);
    msg.setSource(63809U);
    msg.setSourceEntity(60U);
    msg.setDestination(18473U);
    msg.setDestinationEntity(127U);
    msg.topic.assign("OVVQESBPEYKJJUWDGTRCHBPORMESLXNLPUPYTZAXOTWZTTQKTQZYSVRSGYYUADKECGPMNWMDCEIYRJYFLJHZLOAKOHCEKJRNPJCIDPNUKWNXIIZIRXFVYSXZRWKRUHXIZYXVQAMTFPDHVABSGFKBWLKVPWFWZQJLDJOCOGMCVRBQNXFMMBGQXOUUCXBLMTFBCDZKSWYLDAANQUWB");
    msg.data.assign("UQUKVEJYQSCOSMEKAOZNFRHPBXLXGJKFVNKYRVNGEDWF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.51427117298);
    msg.setSource(55461U);
    msg.setSourceEntity(94U);
    msg.setDestination(37799U);
    msg.setDestinationEntity(233U);
    msg.frameid = 133U;
    const char tmp_msg_0[] = {-100, 105, -16, -120, 10, 76, 36, 123, -58, -37, 47, -2, 124, -2, 1, 24, 49, 120, 11, -100, 40, -106, 83, -66, -110, -47, -95, -123, -38, 57, -125, -10, 52, 54, 111, -110, 50, -84, -89, -116, 34, 13, -60, -32, 65, 45, -100, 63, 8, 36, 36, 110, -89, -103, 88, -13, 121, -30, 94, -42, 60, 19, 46, 126, 62, 73, 125, 83, 78, -29, 97, 7, 103, 8, -96, 87, -97, -105, -59, -71, 94, 91, 28, 45, -104, 31, 103, 26, -109, -102, 76, -99, -18, 32, -45, 11, 116, 71, -58, -6, 104, -14, -113, -106, 36, -107, -78, 108, -122, -17, 95, -58, -90, 102, -82, -8, -34, -77, -34, -125, -14, -126, 2, 93, 51, 5, 19, -104, -126, 26, -6, -26, 108, -13, -25, -74, -75, -74, 32, -79, -89, 76, -78, 52, 93, 40, -96, 26, -89, 27, -94, 85, -98, -13, 50, 64, -31, -8, -59, -51, 12, 71, -112, 34, 10, 97, 79, -32, -58, -102, -80, 71, -122, -15, 40, -70, -31, -109, -54, -62, 94, -30, 114, -85, 121, -31, 24, -47, 123, -64, -5, 25, 102, -81, -81, 49, -127, 32, -111, 88, 69, -78, 54, -47, -6, 97, 55, -126, 41, 111, -71, 16, -83, 24, 65, -109, 39, -16, 54, -80, -18, -34, -40, -57, -54, 57, 37, -70, -96, 18, 115, 0, -39, -96, 53, 93, -115, 33, 100, 36};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.125462346758);
    msg.setSource(28508U);
    msg.setSourceEntity(150U);
    msg.setDestination(52646U);
    msg.setDestinationEntity(254U);
    msg.frameid = 93U;
    const char tmp_msg_0[] = {-23, 28, 21, -21, -77, -87, 91, 75, 43, -21, 98, -57, -103, -58, 20, -48, -22, -30, 5, -63, -77, -121, -6, 32, -100, -112, -93, -4, -42, 62, 126, 14, 10, -40, -93, -43, 72, 64, 107, -32, -128, 118, 73, -83, -71, 33, -1, 49, 111, 36, 108, 32, -15, 107, -95, -34, -40, -77, -125, 18, -4, 61, 123, -54, -95, -110, -31, 73, -104, 73, -65, -89, -81, -47, 54, -118, -46, -40, 100, 65, -53, 85, 82, -119, -90, -23, -80, -126, 87, 20, -1, -7, 37, 52, -54, 111, 117, -7, 56, -29, -10, 30, 25, -41, -28, 65, -97, 57, 86, 29, 66, -89, 75, -46, -125, -62, 43, 27, -101};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.479770504124);
    msg.setSource(16362U);
    msg.setSourceEntity(222U);
    msg.setDestination(26103U);
    msg.setDestinationEntity(105U);
    msg.frameid = 175U;
    const char tmp_msg_0[] = {-51, 125, -6, 70, 36, 66, -112, 11, 125, -8, -42, 122, 106, -87, -92, -51, 22, -112, -119, 5, 29, 37, 103, 106, 14, 21, -126, 55, 66, 82, -29, 58, -40, -114, 103, -74, -106, -83, 81, 86, -101, 109, -72, -42, 9, -15, -19, 43, -53, 44, 14, -109, 50, 29, -123, -88, 41, -33, 0, -42, -128, 17, 53, -58, 58, -76, -101, -97, -75, 50, 28, 12, -27, -39, -10, 78, 17, 59, 52, -26, -80, 4, 101, -69, 119, 44, -1, -120, -97, -42, 72, 56, 65, -111, -28, -51, -14, -46, -69, -3, 69, 50, -53, 56, -91, -79, -9, 14, 102, -22, 118, 83, -70, 11, -28, 92, -7, 27, -28, -41, -94, -60, -102, -36, 21, 90, 82, 95, -117, -124, 121, -127, 75, 28, -64, -47, -75, 53, 77, -122, -106, -43, 58, -67, -3, 16, 63, -19, 42, -127, -88, -33, -84, 124, 19, 86, -122, -8, -122, -30, 55, -75, 33, -121, -43, -73, 36, 87, -111, -56, -3, -105, -62, -109, -114, 37, 37, -72, -60, -30, -28, -42, -95, -100, -79, 35, -108, -120, -78, -78, -84, -12, 78, 83, -94, -83, -36, 122, -9, 111, -66, -104, 123, 65, -128, -38, -97, 87, 5, -47, -14, -80, -74, 82, 39, 38, 44, -116, -111, 70, -50, -61, -10, -100, 38, 88, -70, 117, -103, -101, -119, -7, 40, 21, 119, 27, -28, -56, -42, 49, -21, 86, 77};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.474894294264);
    msg.setSource(21055U);
    msg.setSourceEntity(167U);
    msg.setDestination(480U);
    msg.setDestinationEntity(60U);
    msg.fps = 35U;
    msg.quality = 63U;
    msg.reps = 192U;
    msg.tsize = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.458073253416);
    msg.setSource(26506U);
    msg.setSourceEntity(235U);
    msg.setDestination(55559U);
    msg.setDestinationEntity(136U);
    msg.fps = 230U;
    msg.quality = 137U;
    msg.reps = 40U;
    msg.tsize = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.566008385499);
    msg.setSource(7656U);
    msg.setSourceEntity(44U);
    msg.setDestination(1135U);
    msg.setDestinationEntity(206U);
    msg.fps = 214U;
    msg.quality = 187U;
    msg.reps = 2U;
    msg.tsize = 234U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.602145236669);
    msg.setSource(45082U);
    msg.setSourceEntity(133U);
    msg.setDestination(58168U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.0637146368876;
    msg.lon = 0.592522286844;
    msg.depth = 152U;
    msg.speed = 0.750891466921;
    msg.psi = 0.990681446474;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.723186691884);
    msg.setSource(33291U);
    msg.setSourceEntity(22U);
    msg.setDestination(2226U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.859503660698;
    msg.lon = 0.455690191851;
    msg.depth = 186U;
    msg.speed = 0.00791626483808;
    msg.psi = 0.525510974161;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.684927636442);
    msg.setSource(9072U);
    msg.setSourceEntity(44U);
    msg.setDestination(39543U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.366106200151;
    msg.lon = 0.307034396671;
    msg.depth = 201U;
    msg.speed = 0.540768992959;
    msg.psi = 0.692455605529;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.729784282944);
    msg.setSource(44327U);
    msg.setSourceEntity(241U);
    msg.setDestination(42669U);
    msg.setDestinationEntity(172U);
    msg.label.assign("PZDNTPLGPFHCPREKGJNDTGEOTLYPCGWFAEYUDWHTDUYYSQBMNUQWNMVCKCQHSGBLOSVAXMFHLWWZBCGHRYAFXWOUZMAJISNMRLUJUZXGTCKXMFXFOYJWXEVVMYLRYUTAFOKEXQKCODQVIPOFRENEQAJNLLYRKBKZNESVBLIBDHKWOVEZUSNTETIDSPYBKVMZDBWPPAFHHDBXUVHNXITGIZKIOCXMIFIWVJJTSRRQJUSIOCLGQMSJAGZQRZ");
    msg.lat = 0.942565145721;
    msg.lon = 0.502366712033;
    msg.z = 0.194823689877;
    msg.z_units = 1U;
    msg.cog = 0.520407844584;
    msg.sog = 0.150218012064;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.548091314919);
    msg.setSource(38150U);
    msg.setSourceEntity(2U);
    msg.setDestination(28357U);
    msg.setDestinationEntity(157U);
    msg.label.assign("WHKJAGCORHZFSSJSMPRSHGJTDHSUMYCRBVBYHDPXNXZEEGBFXTGYGVADLBTTNOFAGQYPBKQKIQWCLINIVNU");
    msg.lat = 0.355274125862;
    msg.lon = 0.224601217644;
    msg.z = 0.998645915071;
    msg.z_units = 130U;
    msg.cog = 0.967790728712;
    msg.sog = 0.335462606897;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.892901736433);
    msg.setSource(50703U);
    msg.setSourceEntity(184U);
    msg.setDestination(44716U);
    msg.setDestinationEntity(227U);
    msg.label.assign("YAJVDATTKHCGMXRLCZCBBNONBRDYAVZGKRBRCVMZWMDAAAIFZTNPMGAQJCFFPNMHRTSRITZLSXFPRFPAXVYOGKPQN");
    msg.lat = 0.196164303451;
    msg.lon = 0.765303933254;
    msg.z = 0.768475055256;
    msg.z_units = 200U;
    msg.cog = 0.0813310184543;
    msg.sog = 0.617454024257;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.784902373423);
    msg.setSource(54942U);
    msg.setSourceEntity(62U);
    msg.setDestination(45247U);
    msg.setDestinationEntity(72U);
    msg.name.assign("OTJXLWIKVBDTLPPZQMEQZKTAGSNHFGANZOVRGKQJFJXVCNEMFQDLBINEBJVWRMSJELDLQBUGDXTVWRIYRODURQTSSDPJFNAFNMOPJAFWUGOPSFCAVIHMWMPYASHIHOGOYEDLXCJKENECLXZUQBK");
    msg.value.assign("WPPDIZVTBWBCWMNFJOUGACESJTQWQQMXKCZYLDEFJOHBSXULXROSKJRGECNGEABTXDVQWWYRKOIMBMLNAGLSUAVSJMHNUNCPZQTJOZEWERHWRFTRITFAQNFHQJQRDFZHYYONHYGJNOXLAUN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.620059079956);
    msg.setSource(57443U);
    msg.setSourceEntity(56U);
    msg.setDestination(37285U);
    msg.setDestinationEntity(39U);
    msg.name.assign("PEDXKSJDGXXMBLCOLPSQELCIJDUZQAEWIWH");
    msg.value.assign("BPONKMWFTWQMOUSYVKDJERZMJZJNIIVNNYTBOVFENVCEAZGRFTMIDEOKLURMDPDPHLBUKQQGHHLGTOKNHQSSCJXEGECULOPAMUXQFAMQCDTFCWXHSMAKVZTPPDSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.358987314695);
    msg.setSource(28222U);
    msg.setSourceEntity(26U);
    msg.setDestination(2708U);
    msg.setDestinationEntity(217U);
    msg.name.assign("AKNQEWXFPHJRHNYYRSQLQDMODVDCBFWJHRYOYWUYLGCZHVBCKAJPAGBNVPNXDXZRLDERLZIGNJAWYCPSTKEAIFAMA");
    msg.value.assign("RRKOQOJNPYGWUAHHJFJNBIHXTMYDENAOBVXMCPG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.848835439916);
    msg.setSource(47542U);
    msg.setSourceEntity(39U);
    msg.setDestination(24562U);
    msg.setDestinationEntity(11U);
    msg.name.assign("BYVZXDFAATHRAYEVQBMQECMGVZIRFFRDBTNULJGUXNMDOOVUUGAWSCIUQFJBOUVZKYDVLRCWHOMQXOCKHSKCABGIWABWYTLFEMG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.62146855136);
    msg.setSource(38939U);
    msg.setSourceEntity(217U);
    msg.setDestination(12827U);
    msg.setDestinationEntity(138U);
    msg.name.assign("BSLLWTJFVPRBVHZJFSSEYAKFPWUQKNIOIIZNWRIPTSTVIVNKTGEKVSOXNSQBG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CGDNMZCEUZPHNTMSGZGJTRULESWOLPQAOUPAHZEABPAIDLTHHDQSYJYFBFWCXJDLQVKERWMMDIWKLRYAVUYWHGCZSXDNZMLAWIKWYMHFAFRXPXVUUUQFGRCSHDVXKEJYQRRVYQRJECDUWALTQVZXLKDGRNWPGTNJNPAAXUKKIOYSJVKFEYNKTOBI");
    tmp_msg_0.value.assign("LSUOTWLTARRQEAFPGKDWVXOAUBJJAMSZFRYLVWYQEMTNAACPOIZSCEHCONPBUCWDGXZTMGP");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.69744217998);
    msg.setSource(30427U);
    msg.setSourceEntity(19U);
    msg.setDestination(36622U);
    msg.setDestinationEntity(150U);
    msg.name.assign("JFDAWERNERGYNJIXPOQCJAOAJTFTHFLTIQBUDNRAVZCU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.429135401492);
    msg.setSource(25786U);
    msg.setSourceEntity(30U);
    msg.setDestination(22928U);
    msg.setDestinationEntity(32U);
    msg.name.assign("LKWIZXPVDLTQHOVMRLDSCNUFKUXGYHUOXPFRBTAOOBGWSGPSDQTOEQZFUJMPIJCESSXIROSVDEEJJWQY");
    msg.visibility.assign("ZBWAKENRRTDUFXOBP");
    msg.scope.assign("OHQCARVLRBYXNSVIDGPPLSUUFSRUBEANCWBIDGGBVVSCUTSYFJXUADACKNQAHXEBQITPOZGANGCCXSMWEFLMMZFLZMFSIJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.0343222047878);
    msg.setSource(32279U);
    msg.setSourceEntity(71U);
    msg.setDestination(6815U);
    msg.setDestinationEntity(67U);
    msg.name.assign("GNMZTJJSWFHNMMYLBDEUSMTXAIWUPLNDLXYWPRXNQLNRJFWRLFTVLPHHCCWVULVMWZSOBAUQDOQKMRNOTNORBSYIXZYOIATLEQFOUEJKGBQVGSSBVMPFGOSJHVZZCY");
    msg.visibility.assign("ADDZXEWWFCEZCQYSYRQXXKCAHOBCWLXTKTXFQNSQ");
    msg.scope.assign("LXOTSHHJPXKWUZRTHAGYJNFMNYAGLPZFJQYPCDNESSJPQXPMXASKDAXAQFOITXWRWWISFFSLTKUVAGTGCLFKCZVPBTGRVE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.474005341358);
    msg.setSource(8748U);
    msg.setSourceEntity(218U);
    msg.setDestination(37335U);
    msg.setDestinationEntity(197U);
    msg.name.assign("TBFVNRVJFZCVMOKUHSCZZQYCQDGOSEBNUXWANLLPPZIJJMELVLKCEMAKXHHAGYTOFPEQUQRLPWWIYFONHVWPKUPLWWNTOTKRVNFBZTZMQRKFXAMCOBVTEAIQPWDFTNIKBTEGDSBMNDRGDZPIYYDICSMQCKSGWGWWZQXRIRJDTAJJOHLSHGLMXKPXASFVUQVDGXHXEIDOLRYNVEYBGYBCDRXBFZRANMUJCJIXOLAUAUSCT");
    msg.visibility.assign("GTPNHFEOBSSVCSWWUPUZGBOGWYRZXMEDPXTKUUWZLKNKORXEPYGNHOVEXWGKNHXFVPMVCBYRRFSNPCYVUFCLARXVYVGQMOGQIDNJOQFKEBCJZQNHRLTXXUOVXYDQRSSUZ");
    msg.scope.assign("AZPJLEDPEKNCPTOKOPQQWFWRKEGOHQDUOASUEXKAHCGGGAVXRMFOFLRYNVIRUHTSISUEQRHXEACYIXZMQSAXZIFXSZNLYVESTIKKFVLQLCTX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.910727496779);
    msg.setSource(18269U);
    msg.setSourceEntity(228U);
    msg.setDestination(56319U);
    msg.setDestinationEntity(145U);
    msg.name.assign("KDXTPQEHPNNBCRJJPSTDMMAALBLYFZUFTGHKPIXDVMYAWUSSOWROMUUKAXKIWSIQDIMWUCWJEJNGJKEFLWBCUQZTZCOBYVZJEZMBOFVVTBKNQMVGKULANRZCPLBZRHPSFWMBLVNCNARKCKRJGFIFOFTXGPLENPWGFQSDIZPULEYKHHQMQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XYCEWDZIZITZORMUDLGPQPJVDR");
    tmp_msg_0.value.assign("CTHKKBLISGJHGLAHTUFSGVVJFWANAOXSVXYWRYWSLTYQMW");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.968472229127);
    msg.setSource(57068U);
    msg.setSourceEntity(144U);
    msg.setDestination(17536U);
    msg.setDestinationEntity(172U);
    msg.name.assign("UVUYKCTOTFHASFRXXVWXTSZJGALJWZSRWKDSXORCZUNQFMSILQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.95829842459);
    msg.setSource(2957U);
    msg.setSourceEntity(89U);
    msg.setDestination(3687U);
    msg.setDestinationEntity(176U);
    msg.name.assign("ELBDEGOAKBTBFWIDKDKLVMZMREYCNWWECRINFPRGIYXYYTJWDYTLFVTMTMVATCULUYCSKUZXOTLGNJNGQHXMPLAEKIKUIHHVWRJXUYIGDLRZSFQBCUXKNSZPYYQMHXFADOOJH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GYQOAGDJJYUQENRMBJFSIXT");
    tmp_msg_0.value.assign("QVRGLQCYJACKVYNTDSFZYUHWWOKILCJRBURBJDECBHYOAIGSWLGUHUCHFOTCGZLLESJGVJGFKKDCEXOVCW");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.90847881745);
    msg.setSource(62619U);
    msg.setSourceEntity(148U);
    msg.setDestination(47024U);
    msg.setDestinationEntity(4U);
    msg.name.assign("YBIKFGPFUWWTYRTBDCWSKDVJOXVGTWKJNEWJRFFTHZQMNNLTNCVVCYCPUGLZRXYOQSIIXAJSLQHFEKBDNBQNLPCMAIFZMKUYDKPSAVNQJSMGEJIVJZUGKKYOEBAQRVMXIHJXRYXHARPFSMXQBKBTGMWDUYUHOZR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.139043284957);
    msg.setSource(17324U);
    msg.setSourceEntity(128U);
    msg.setDestination(62438U);
    msg.setDestinationEntity(233U);
    msg.name.assign("XOBDGWHMTJGWKUTFCEZUJACFBBZPHBLORJUIPQXDCJPGSKBUVYFZFCUACIEVYROLAHQUTYELHRIYDRUXOVSIGONOYYHZBNKFHLGJGQLFEIQWTSFOYWYGYTQXZGFNLXUZDVNMVLJUPEWJPSRIABTCZNRCRITDHUNNNZBOEQLEVSKDIIZKKPMPAVZSPPDTXORTVLSDWJYJQDFP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.850417749277);
    msg.setSource(6400U);
    msg.setSourceEntity(220U);
    msg.setDestination(8590U);
    msg.setDestinationEntity(122U);
    msg.name.assign("YSZFOOBVVVBECDIEFPCEMUWTEGGHHRRYRHWYQJRDNWMXPQNQFDCM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.709319652947);
    msg.setSource(22073U);
    msg.setSourceEntity(112U);
    msg.setDestination(3850U);
    msg.setDestinationEntity(91U);
    msg.timeout = 365864466U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.840671421541);
    msg.setSource(22682U);
    msg.setSourceEntity(210U);
    msg.setDestination(48135U);
    msg.setDestinationEntity(108U);
    msg.timeout = 3490877519U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.504478811436);
    msg.setSource(42433U);
    msg.setSourceEntity(7U);
    msg.setDestination(30351U);
    msg.setDestinationEntity(224U);
    msg.timeout = 1774080882U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.328434021535);
    msg.setSource(57791U);
    msg.setSourceEntity(105U);
    msg.setDestination(45565U);
    msg.setDestinationEntity(236U);
    msg.sessid = 1959700053U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.878757775501);
    msg.setSource(17960U);
    msg.setSourceEntity(229U);
    msg.setDestination(15732U);
    msg.setDestinationEntity(121U);
    msg.sessid = 4096621265U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.37861180878);
    msg.setSource(56749U);
    msg.setSourceEntity(83U);
    msg.setDestination(55064U);
    msg.setDestinationEntity(52U);
    msg.sessid = 1153315300U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.77430828622);
    msg.setSource(51458U);
    msg.setSourceEntity(112U);
    msg.setDestination(44469U);
    msg.setDestinationEntity(191U);
    msg.sessid = 2925165019U;
    msg.messages.assign("CBWWIIXASWTOFQGEBBURUWNJOWZWOTUYRNSRANJHFNWVQUIDPZRLYFVZALVSLXTOJSLERDADPLNUSGEQMFHBYEATWOSTYRNFJCRAIDNQBGZDHUGAGGMBPCIEEHKRTGMKHXQIBIF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.734538575738);
    msg.setSource(6710U);
    msg.setSourceEntity(160U);
    msg.setDestination(43765U);
    msg.setDestinationEntity(28U);
    msg.sessid = 3696899829U;
    msg.messages.assign("NZSBZBECMNXYIMTDLDCPOCKRAMLESARJQHPAFIQEUUOMYTDWHFPPXAPVMGCNSLBPXFKCRCHSKJUQQGODCDWRIEGVBVMP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.808817252974);
    msg.setSource(63873U);
    msg.setSourceEntity(67U);
    msg.setDestination(49494U);
    msg.setDestinationEntity(234U);
    msg.sessid = 3967023272U;
    msg.messages.assign("AMNFJZZOLGAROUJEJQSUYLCJGTLJRGATXAHIAFVPQNBVSQZQZPATOQKRWUWFYKMYGLGUWHMHYLJTVKFJQADGIZNJLCXUEVHXSKTDFPTOIMKYIBBXSEGXPHHRXYCMSEXQYOVQEDEWXWKSPKVRWGFASYZVFIEZUCFTFMHKNESMLGOZDRDDABKERVNYADCVROWMPCBBHUFCVDLZKQPJYENUHNUTNROBIWWLBIMNXD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.957432797679);
    msg.setSource(63792U);
    msg.setSourceEntity(161U);
    msg.setDestination(20452U);
    msg.setDestinationEntity(79U);
    msg.sessid = 534495536U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.619432253377);
    msg.setSource(40497U);
    msg.setSourceEntity(205U);
    msg.setDestination(44351U);
    msg.setDestinationEntity(19U);
    msg.sessid = 3879956449U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.483978063225);
    msg.setSource(54936U);
    msg.setSourceEntity(112U);
    msg.setDestination(13498U);
    msg.setDestinationEntity(175U);
    msg.sessid = 679240784U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.144327399614);
    msg.setSource(56707U);
    msg.setSourceEntity(155U);
    msg.setDestination(49907U);
    msg.setDestinationEntity(216U);
    msg.sessid = 2585586846U;
    msg.status = 98U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.242639415945);
    msg.setSource(53531U);
    msg.setSourceEntity(137U);
    msg.setDestination(49120U);
    msg.setDestinationEntity(8U);
    msg.sessid = 2368154986U;
    msg.status = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.7057387974);
    msg.setSource(26242U);
    msg.setSourceEntity(123U);
    msg.setDestination(3796U);
    msg.setDestinationEntity(38U);
    msg.sessid = 633570144U;
    msg.status = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.0348482964506);
    msg.setSource(6367U);
    msg.setSourceEntity(161U);
    msg.setDestination(56407U);
    msg.setDestinationEntity(226U);
    msg.name.assign("KQWFJBCRVLCZMYMYPEIOBFXKNWMESOSPMUVTZRFDMWQCMXNQGVDVNISGCBYRLLYZOZBBXGXDDVDF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.704901331692);
    msg.setSource(47252U);
    msg.setSourceEntity(163U);
    msg.setDestination(24562U);
    msg.setDestinationEntity(97U);
    msg.name.assign("YMLHKLWAFERHFJRUQFQPLWBBSSBFYPMSFPZOKBQIMSNJO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.179927154826);
    msg.setSource(15455U);
    msg.setSourceEntity(37U);
    msg.setDestination(10229U);
    msg.setDestinationEntity(45U);
    msg.name.assign("KMEDYRSIQCCXJJZQEKYFWNMXBIAENCRBAMCVFPLOKIZBKHHVZUDIFOHMSFIDUFCHBKLHPQVXHEWEIFGDJWRHYDGOTAMNVFJGYCTRCZTZL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.093172792735);
    msg.setSource(22640U);
    msg.setSourceEntity(206U);
    msg.setDestination(53021U);
    msg.setDestinationEntity(199U);
    msg.name.assign("GKZRVTSRHXMWCNVSVNYCRNYITJPKHIYSNJRFAFAIBZBKLKBVQEEFYGRHEXAUTOPNUSUHSZUEGHJIETLAHCNUDPNNOZCMIPHCUTOXFWSSYBQMSVIYLAWWVH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.154135171994);
    msg.setSource(52275U);
    msg.setSourceEntity(6U);
    msg.setDestination(64039U);
    msg.setDestinationEntity(238U);
    msg.name.assign("IRSBORIPBBLPTNSIKUUIMRBPGLQEQAWGXSAQVHFXNKOHQTYMZAJFBBINRCOGASAW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.570374993976);
    msg.setSource(28471U);
    msg.setSourceEntity(95U);
    msg.setDestination(60056U);
    msg.setDestinationEntity(63U);
    msg.name.assign("OTGEQACNQNTIKFZYKMAJESWPOAQENVGUHDNLZVYAWZLDPIEOJTAJVILQXDXGHBUDGAOBPOLRKQXYGTPJZAAUOZZURGEHYRSVVWROPZGXGVUMWJLGRMWRUJDSNZWFTBPVFUVXOECQDRBAIOSEUSNBMRNXOFSXLMDWIHCKEQFIJKMBCTBHNQXPNLSEFHQQBKLHNPMKMTGBJDCARBLITSYHIXI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.563848930156);
    msg.setSource(44979U);
    msg.setSourceEntity(107U);
    msg.setDestination(61399U);
    msg.setDestinationEntity(72U);
    msg.type = 134U;
    msg.error.assign("NUQGIGDVQWPOZSHTZLVKVCADBFKPUZVZLVDVFPVWMREYHCQIYQBSSWHWLHEWUIKJEBEQWWROSEAACMYYNSKVJJXJNBIAOQTXDXAQWTUFPURNMDLCHGCSHETTDZOYKIJWSPXHZROGXJRJAUVGQNMFIILLXBOTBOAZPNMHXPENHALUERAQSCSDMGJFCTWTETVKYOQFMYBLAKLTUCNFRUNMYBB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.186423786095);
    msg.setSource(27292U);
    msg.setSourceEntity(253U);
    msg.setDestination(52675U);
    msg.setDestinationEntity(11U);
    msg.type = 7U;
    msg.error.assign("QZVOCLCPDROHOTMRJVHFPZMFUQJYIQPYJTXSSOEDANTKUZAEYMVVDKHOGGKNANVOKPNEAPWXLFIGVXRUPXTRBGYIJZKJMUREBFFLICSWRDLWTFBVEGLUXALHJGCAPIIEHPRCNZAOKOURQUDVZMHHNEAMLLKNQBWCVDURRHFSXSKXWQKKWCWSBXDMFUONSNHYYCZJWBNPSXZYUQBYEPWLQCJZTJDFGIYQBEOGGAMCDZIAWGBHFTQT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.376157147073);
    msg.setSource(19460U);
    msg.setSourceEntity(20U);
    msg.setDestination(40687U);
    msg.setDestinationEntity(35U);
    msg.type = 13U;
    msg.error.assign("YMDGGGYEETLVTLLUDHJXJSIBGCBYTXEAOJQXVBYDCKEBHIJXPNFNODWTBHANPIPYETMPJPKMEQAOQRDIXICSRZCLIRTGSDUMWUCHVBHFZFKXQRXWLCDTJYBZVHWHQAKFAKYKOCXNAGRPZFORSKAJPYMLNTWKMYTUJAPPZVEIQJZXMMOONBVEUSRFRGLHQODJIOFFMAZDSXVSQSQSURFBW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.142643990527);
    msg.setSource(13912U);
    msg.setSourceEntity(180U);
    msg.setDestination(9427U);
    msg.setDestinationEntity(60U);
    msg.seq = 59302U;
    msg.sys_dst.assign("WHDEFFKDAIMTLXFGVJONVTKXOBXEICYPORYYZVQSNXWQLRECYBJDGNETIUUWYVSTAIUDISPWQEYDLHPSAQZGKDGCOONCJGDWCFFWZXUGLSAMNVHPQMVKNVAAVUHBUGISZVNOVXESWFQRRLTEJHYIKOBWCRUZZHHUBXFZRJAKTAZJTBLNFZJMMAJBKRFTCPPQCKIUKIRXQWJDDKSCXYQELTZCGPWENAMLOPLQYOMBMHHGSTIDGUNYPPJFHMM");
    msg.flags = 47U;
    const char tmp_msg_0[] = {-10, -3, -72, 0, -55, -44, -18, 107, -102, -73, 67, -106, 114, 98, -33, -65, 21, -9, -59, -29, -11, -121, -33, -35, -10, -114, 10, -38, -126, 103, 106, -108, -70, -60, 39, 41, -48, -26, 44, 48, 61, -29, 46, 8, -75, 84, 97, -20, 102, -116, 101, 48, -102, -69, -116, 54, -22, 126, 47, -79, -12, 119, 54, 107, 54, -43, 104, -43, -78, 112, -3, -53, 48, -84, -85, -18, 108, -122, -108, 31, -46, 87, -48, -9, -5, 84, 94, -24, 3, -113, 78, 48, 47, -101, -37, -38, 82, -56, 58, -3, -24, -29, 46, -73, -69, 36, -54, 2, -34, 60, 33, -25, -45, -66, -39, -60, -61, 80, -4, -21, 54, 57, -20, -48, -19, -107, -88, 40, 0};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.68255779812);
    msg.setSource(61242U);
    msg.setSourceEntity(2U);
    msg.setDestination(23268U);
    msg.setDestinationEntity(160U);
    msg.seq = 43064U;
    msg.sys_dst.assign("RMSOBGPHYVMKBNBVZCREBKKULAZFRAUOJXTZTJPYHMWAQOFQLVWFDMISYLFHGSBXPEINGUYHZOSGRPHZKXQNRMFCGGBFLYJDCCKWVPKMDMJDJTSRSHIFAGYAXMDFBTKCINUNUWHWMLWBOLBINUXWDSDGEQKYAZYAJNPRPEWJQHZVGEAF");
    msg.flags = 157U;
    const char tmp_msg_0[] = {-72, -18, 125, 42, 93, -44, 30, 48, -116, -99, -89, 77, -88, -20, 39, 58, 119, -47, -55, 98, 87, -4, -59, -78, -31, 23, -115, -66, -124, 63, -121, 67, 25, -20, -76, -119, -22, -61, 3, 90, -38, -54, -25, 35, -87, -16, 113, -115, -21, -67, 24, 26, -21, -49, -70, 113, -55, -8, 65, 10, 81, -11, -50, 42, -115, -80, 89, 29, 14, 28, 60, -126, 116, -3, -4, 12, 123, -107, -93, 52, -97, 7, 95, -67, -110, -71, 53, 25, 114, -114, -91, 63, -64, -79, 4, -87, 117, 12, -17, 110, 125, 8, 37, -66, 15, 3, 88, -106, -66, -57, -97, -2, -115, 92, -50, 33, -105, 114, -45, -66, 45, 126, -123, -5, 34, 107, -115, 1, 25, 22, 18, 113, 57, -101, 125, -92, 67, 125};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.885826953258);
    msg.setSource(46644U);
    msg.setSourceEntity(149U);
    msg.setDestination(57805U);
    msg.setDestinationEntity(47U);
    msg.seq = 13382U;
    msg.sys_dst.assign("ZLXQGXIORAZLFDIDPYCXTJQUYLTRHKREDAKSJZQKOGRNPQWODJSKNMYOIUXYSRKNFGGDUKUTYKUQVWYNGZISQUXAFMAPLBNWKCZXOJCFEVOLHEMLUCGSIELUFKHBBAEJ");
    msg.flags = 98U;
    const char tmp_msg_0[] = {-66, 119, -124, 98, -59, 62, 5, -89, 24, -15, -123, -92, -12, 11, -90, 13, 65, -103, -6, 101, 10, -109, 68, -56, 95, 119, 93, -18, 63, 34, 46, 124, 84, -53, 52, 13, 63, -72, -29, 22, -122, -56, -117, -95, 84, -125, -8, -17, 96, -68, -7, 67, 121, 90, 3, 8, 15, -8, 81, -26, -63, 5, -100, 116, 40, 56, -13, 113, -62, -62, -79, -67, 100, -90, -114, -84, 87, 112, 9, 98, 102, 29, -94, 51, 62};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.383470511067);
    msg.setSource(59893U);
    msg.setSourceEntity(163U);
    msg.setDestination(10897U);
    msg.setDestinationEntity(118U);
    msg.sys_src.assign("KJCHOGQVGXLNCSGJLISQQHDQOSFIBRTDTYJOHGWWYTPKFFZKAZKRDFLBMP");
    msg.sys_dst.assign("RVBZGLUQPQARZOYZTPIXGZHBLFDPSAAHWCVWTQOFSJAZPHVQBKHMFKMBWPSXMUAWZOTHSYBUALUELNBCTVPXYBGUSRMIZNRUUKERSDOMLCNIULOYZJUEBWQWEYIIRMIEYNKFXCXDJYQHGOIMJCNJEDTSHFVFJFKDDVPJCMOWVFGXVOI");
    msg.flags = 92U;
    const char tmp_msg_0[] = {-68, -54, -82, -66, -87, 119, 60, 16, 87, 93, 5, 19, 119, -4, -93, -65, -14, 46, 116, 68, -65, -25, 33, -29, 101, -91, -39, -86, 25, 75, -78, -9, -113, -21, 94, -116, -11, -87, 119, -98, 4, -93, -112, 18};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.252800392107);
    msg.setSource(64400U);
    msg.setSourceEntity(168U);
    msg.setDestination(44719U);
    msg.setDestinationEntity(90U);
    msg.sys_src.assign("IPETPWGHROYQTDBZZBKXIPLYKDVOWXJNHLNVAYEINCEAJLDCTSHDZUQMFEQJMBOTRFCXLUAJIPSBBZZIGYQHUWVXMCPMWMQJLTRHGVUOUWEVWQJAEKOBPFMHDXYQVRWIZAIJYOHPXXHGDHLLODNSGEWATFNGXAKBVOFZKXRITMPMDLGSUWUXRAKAHGYNSKVNVNLPSYOCJKJRISCMQCVEFKETZPSIFCFSQQRZUOC");
    msg.sys_dst.assign("BADEMUCBTTIGIATGLUORRQPDWGAVWVODYFMIEVHHLRLJIDBXLJHJUDZQKOSCJZUIBWWQTHFSOPGRWVZQPMPIPVHFYZXUJDZFCYNIAGWKSDNOEMVXLAPHIBJSMYOBRKZPMYDZVVROQHERUKWXYNWDTVUUPSEOLTEDYFVFQCCGJESIUANQZFXRSSFTMTFMNKBQTFNYCJYAPJNMZPKTRNCAKCXEGYHKLXGXLIWHAQSBMKLXOAU");
    msg.flags = 20U;
    const char tmp_msg_0[] = {-115, 48, -104, -4, 20, -113, -81, 119, 126, 36, -110, 46, 79, 54, -104, -96, -81, -7, 42, -103, 99, 11, -104, -51, 66, 84, 42, -116, 86, 0, 66, 110, -12, 111, -14, 100, -10, 89, -107, -99, 76, -126, -92, -4, 124, 120, 109, 121, -67, 86, -124, 89};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.373776077771);
    msg.setSource(42624U);
    msg.setSourceEntity(72U);
    msg.setDestination(33597U);
    msg.setDestinationEntity(155U);
    msg.sys_src.assign("ZHTBJWPCANUSGGLUQNMYUQICQJLUQLRTBWJRWKJIMMNMVOGGMZSPSVIHUNKFZTAIJIHFPYCLUMFANLTZCLHYAGHYPSSEBVAIENJTPEKFQYOBTKKRIBFZADRERPYEIJGXOORTNAXSCADLNJXWZPFRUE");
    msg.sys_dst.assign("WRYESOZAOLZ");
    msg.flags = 65U;
    const char tmp_msg_0[] = {-84, -78, 53, 117, 52, -97, -19, 95, -33, 89, 38, -91, -118, -125, 102, -118, -102, -53, -21, 120, 24, 49, -1, 97, 77, 25, 122, -11, -114, -59, -18, -9, 70, -100, -124, 100, 124, -53, -35, 119, 54, -99, -123, -74, 10, 33, 92, -46, 119, 72, 87, -82, 59, 32, 60, -68, 100, 31, 20, 116, 91, 74, 74, 82, -28, -78, -9, -5, -112, -75, 102, -95, 48, 12, 104, -16, -6, 26, 35, 0, 10, 15, -114, -34, -64, 71, -21, 39, -126, 86, 58, 74, -53, -43, 36, -88, 28, -107, -59};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.694446990305);
    msg.setSource(60495U);
    msg.setSourceEntity(32U);
    msg.setDestination(16655U);
    msg.setDestinationEntity(49U);
    msg.seq = 9995U;
    msg.value = 137U;
    msg.error.assign("KYFRHQUCGKKWBEBHOSDOEWTPMVUFFSFULWOYAXSNJJSACPLBBCHDDGZGGFOZQIGKBFTNWBJLFUPBBHETYKPZHPDPGVVJXRJLJKZUELPVYQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.84280740633);
    msg.setSource(6543U);
    msg.setSourceEntity(169U);
    msg.setDestination(17931U);
    msg.setDestinationEntity(13U);
    msg.seq = 35615U;
    msg.value = 6U;
    msg.error.assign("NKLPKMFXHQSLSTITSWCVUXVQWLCNACNCEJCUIBVZPZRLNEPRZSMBYLJGSWSIXGBUJPPINXERWDQKKRWFDYUYGZJOAOXTMBDWPOYCVJURTMAHVZNDKLFIRDVZWCET");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.27176781312);
    msg.setSource(64528U);
    msg.setSourceEntity(30U);
    msg.setDestination(18269U);
    msg.setDestinationEntity(186U);
    msg.seq = 14368U;
    msg.value = 172U;
    msg.error.assign("WHPTCLYRANRUQQRALMLBW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.563150903858);
    msg.setSource(56845U);
    msg.setSourceEntity(3U);
    msg.setDestination(17743U);
    msg.setDestinationEntity(135U);
    msg.seq = 5567U;
    msg.sys.assign("DODWKOIFALPUOPZIZNKGYTFBIQCSQUNPUBETPVXVYXWCJJYIDIJTHJZRPLWVBTEOKZFQODSDMARCSLXFIAGFMIJFNOWEZAJM");
    msg.value = 0.807699453222;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.0266626784982);
    msg.setSource(26696U);
    msg.setSourceEntity(185U);
    msg.setDestination(33156U);
    msg.setDestinationEntity(58U);
    msg.seq = 12394U;
    msg.sys.assign("WHCYLFHNNISUVUAGBNAKQBVHTUXTWTYJRPFBZCGEJGFAEKQJBOMOXQSFZBSEEFUNQHOUIPKVLXYIPBTOBYSQHYCRAOXKIJEDMPRJDXSEKZKJGEEBPARSZCZWMZOMCSDQUFCLTDRSPKGLDNUQCGDKWLV");
    msg.value = 0.22293292596;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.621583014803);
    msg.setSource(50261U);
    msg.setSourceEntity(14U);
    msg.setDestination(29820U);
    msg.setDestinationEntity(88U);
    msg.seq = 54441U;
    msg.sys.assign("ELNJHKBQFSVWDKYICJKHCILCRFVRFUPEQHCZQMQDVPTBSTAHVX");
    msg.value = 0.0193622180341;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.850321800417);
    msg.setSource(23633U);
    msg.setSourceEntity(137U);
    msg.setDestination(44651U);
    msg.setDestinationEntity(100U);
    msg.action = 36U;
    msg.longain = 0.288313830648;
    msg.latgain = 0.257075324552;
    msg.bondthick = 1369290828U;
    msg.leadgain = 0.240270454489;
    msg.deconflgain = 0.463674648413;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.0135513911042);
    msg.setSource(41584U);
    msg.setSourceEntity(231U);
    msg.setDestination(61571U);
    msg.setDestinationEntity(168U);
    msg.action = 127U;
    msg.longain = 0.00915966625832;
    msg.latgain = 0.155135754268;
    msg.bondthick = 1401633013U;
    msg.leadgain = 0.078772767486;
    msg.deconflgain = 0.986551905462;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.778845676214);
    msg.setSource(2337U);
    msg.setSourceEntity(122U);
    msg.setDestination(63688U);
    msg.setDestinationEntity(109U);
    msg.action = 156U;
    msg.longain = 0.476011972726;
    msg.latgain = 0.732887970709;
    msg.bondthick = 2799183352U;
    msg.leadgain = 0.932529831288;
    msg.deconflgain = 0.568475970515;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.817791042172);
    msg.setSource(7760U);
    msg.setSourceEntity(206U);
    msg.setDestination(41006U);
    msg.setDestinationEntity(229U);
    msg.err_mean = 0.509838252929;
    msg.dist_min_abs = 0.6434293204;
    msg.dist_min_mean = 0.0681378072731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.926448633186);
    msg.setSource(21763U);
    msg.setSourceEntity(47U);
    msg.setDestination(56369U);
    msg.setDestinationEntity(143U);
    msg.err_mean = 0.789810811795;
    msg.dist_min_abs = 0.239454616167;
    msg.dist_min_mean = 0.102344788798;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.0936933945777);
    msg.setSource(1418U);
    msg.setSourceEntity(33U);
    msg.setDestination(10452U);
    msg.setDestinationEntity(0U);
    msg.err_mean = 0.284871004377;
    msg.dist_min_abs = 0.0641535238692;
    msg.dist_min_mean = 0.530758210333;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.418683716716);
    msg.setSource(52541U);
    msg.setSourceEntity(130U);
    msg.setDestination(24369U);
    msg.setDestinationEntity(69U);
    msg.action = 88U;
    msg.lon_gain = 0.147069963058;
    msg.lat_gain = 0.566422584862;
    msg.bond_thick = 0.622050048533;
    msg.lead_gain = 0.256144894004;
    msg.deconfl_gain = 0.989210039753;
    msg.accel_switch_gain = 0.579034217078;
    msg.safe_dist = 0.881736989111;
    msg.deconflict_offset = 0.443664097928;
    msg.accel_safe_margin = 0.555634926218;
    msg.accel_lim_x = 0.892664698544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.698606171121);
    msg.setSource(16965U);
    msg.setSourceEntity(188U);
    msg.setDestination(8734U);
    msg.setDestinationEntity(140U);
    msg.action = 98U;
    msg.lon_gain = 0.69076695018;
    msg.lat_gain = 0.632181091692;
    msg.bond_thick = 0.468801799754;
    msg.lead_gain = 0.314613195946;
    msg.deconfl_gain = 0.212280020209;
    msg.accel_switch_gain = 0.915518331681;
    msg.safe_dist = 0.900989845681;
    msg.deconflict_offset = 0.122726471838;
    msg.accel_safe_margin = 0.980616238436;
    msg.accel_lim_x = 0.819711497652;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.293390496228);
    msg.setSource(58950U);
    msg.setSourceEntity(2U);
    msg.setDestination(47899U);
    msg.setDestinationEntity(144U);
    msg.action = 64U;
    msg.lon_gain = 0.340586240818;
    msg.lat_gain = 0.0408137681159;
    msg.bond_thick = 0.792693644145;
    msg.lead_gain = 0.961066669301;
    msg.deconfl_gain = 0.32234332635;
    msg.accel_switch_gain = 0.937809217277;
    msg.safe_dist = 0.646627239039;
    msg.deconflict_offset = 0.0378503662897;
    msg.accel_safe_margin = 0.261297728285;
    msg.accel_lim_x = 0.830958155534;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.898868432394);
    msg.setSource(26959U);
    msg.setSourceEntity(236U);
    msg.setDestination(37822U);
    msg.setDestinationEntity(202U);
    msg.type = 237U;
    msg.op = 1U;
    msg.err_mean = 0.58757768256;
    msg.dist_min_abs = 0.351089625668;
    msg.dist_min_mean = 0.286462803696;
    msg.roll_rate_mean = 0.973085349242;
    msg.time = 0.154117003285;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 169U;
    tmp_msg_0.lon_gain = 0.551686840065;
    tmp_msg_0.lat_gain = 0.951085897321;
    tmp_msg_0.bond_thick = 0.985312298223;
    tmp_msg_0.lead_gain = 0.250792419355;
    tmp_msg_0.deconfl_gain = 0.642267853133;
    tmp_msg_0.accel_switch_gain = 0.112325962808;
    tmp_msg_0.safe_dist = 0.597072040875;
    tmp_msg_0.deconflict_offset = 0.443742446655;
    tmp_msg_0.accel_safe_margin = 0.251060027688;
    tmp_msg_0.accel_lim_x = 0.474446068962;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.756690604303);
    msg.setSource(37877U);
    msg.setSourceEntity(136U);
    msg.setDestination(16620U);
    msg.setDestinationEntity(180U);
    msg.type = 80U;
    msg.op = 23U;
    msg.err_mean = 0.219962227252;
    msg.dist_min_abs = 0.0267842710311;
    msg.dist_min_mean = 0.669478575232;
    msg.roll_rate_mean = 0.0964938829888;
    msg.time = 0.741314806582;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 28U;
    tmp_msg_0.lon_gain = 0.456790945306;
    tmp_msg_0.lat_gain = 0.384745231854;
    tmp_msg_0.bond_thick = 0.1829983032;
    tmp_msg_0.lead_gain = 0.837319211602;
    tmp_msg_0.deconfl_gain = 0.562402568539;
    tmp_msg_0.accel_switch_gain = 0.767573003693;
    tmp_msg_0.safe_dist = 0.850596812475;
    tmp_msg_0.deconflict_offset = 0.88170634445;
    tmp_msg_0.accel_safe_margin = 0.574416514293;
    tmp_msg_0.accel_lim_x = 0.420382495905;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.0722469551435);
    msg.setSource(41959U);
    msg.setSourceEntity(43U);
    msg.setDestination(26730U);
    msg.setDestinationEntity(51U);
    msg.type = 191U;
    msg.op = 101U;
    msg.err_mean = 0.808135546123;
    msg.dist_min_abs = 0.0729719985231;
    msg.dist_min_mean = 0.659604584574;
    msg.roll_rate_mean = 0.48268346809;
    msg.time = 0.211735404334;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 235U;
    tmp_msg_0.lon_gain = 0.321290200047;
    tmp_msg_0.lat_gain = 0.827556690997;
    tmp_msg_0.bond_thick = 0.280909786202;
    tmp_msg_0.lead_gain = 0.395982667784;
    tmp_msg_0.deconfl_gain = 0.407855200475;
    tmp_msg_0.accel_switch_gain = 0.402389785776;
    tmp_msg_0.safe_dist = 0.927272406429;
    tmp_msg_0.deconflict_offset = 0.0292595927525;
    tmp_msg_0.accel_safe_margin = 0.0220320673183;
    tmp_msg_0.accel_lim_x = 0.999321381201;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.359126498686);
    msg.setSource(50502U);
    msg.setSourceEntity(225U);
    msg.setDestination(56226U);
    msg.setDestinationEntity(246U);
    msg.uid = 30U;
    msg.frag_number = 8U;
    msg.num_frags = 6U;
    const char tmp_msg_0[] = {-117, 74, 80, -80, 47, 121, 68, -115, -58, 70, -18, -68, -81, 11, 30, -2, 38, -52, 27, 39, -50, -46, -14, 53, -11, -41, 120, 11, -57, 68, 83, -35, -108, -127, 2, 45, 63, 6, -17, 32, -10, 45, -9, -102, -37, -25, 124, 25, -22, 81, -86, 67, -88, 95, -2, -41, -41, 92, -106, -56, 53, -66, 43, -45, 76, 76, -7, 102, -29, -106, 114, 45, -10, 13, 48, -127, -87, -97, -48, 54, -100, -42, -6, 101, 96, -65, -1, 27, 6, 67, -119, -9, -16, -17, 70, 7, -4, 11, -128, 15, -125, 118, -99, 43, 26};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.870715271184);
    msg.setSource(62239U);
    msg.setSourceEntity(241U);
    msg.setDestination(49891U);
    msg.setDestinationEntity(173U);
    msg.uid = 224U;
    msg.frag_number = 240U;
    msg.num_frags = 68U;
    const char tmp_msg_0[] = {0, 35, -73, -64, 122, -19, -90, -29, 66, -17, 98, -14, -43, -7, 36, 63, -15, -31, 84, 104, -123, -15, -3, 88, -57, 113, 98, 44, 86, -13, 75, 51, -113, 81, -43, -104, 0, 49, 118, -105, -84, -4, 18, 37, -39, 2, 100, -6, -30, -27, 100, -77, 81};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.369731748218);
    msg.setSource(1782U);
    msg.setSourceEntity(194U);
    msg.setDestination(48673U);
    msg.setDestinationEntity(118U);
    msg.uid = 218U;
    msg.frag_number = 232U;
    msg.num_frags = 158U;
    const char tmp_msg_0[] = {46, -86, 123, 63, -118, -97, -78, 93, 78, -122, -102, -74, 80, -81, -81, 0, -9, 86, -50, -59, -46, -8, -32, -90, 6, 86, 62, -51, 11, 13, -64, -90, -110, 86, -90, 60, -102, -83, -59, -73, 9, 101, 61, 85, -67, 8, -71, -123, 0, -21, 70, -46, 89, -16, 94, 106, 20, 46, -121, -1, 119, 47, 108, 49, 103, 28, 61, 124, 126, 107, 52, 28, -19, 98, 45, 25, 58, 67, 5, -61, -97, -37, 69, -45, 56, -15, -75, -93, -54, 50, 15, 33, 96, -15, 14, 106, 19};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.812907500471);
    msg.setSource(43882U);
    msg.setSourceEntity(195U);
    msg.setDestination(48354U);
    msg.setDestinationEntity(169U);
    msg.content_type.assign("IRLCEHCDMBXIKLJOMQTDDEYGOGMAISGHGECBRCZBJNYUMAXVTIYLCEHQQPPHHIZVRSWJMGGPXYSRAYWNWJEIBEFYEUNADNXBFWZPJNJIWMOBUTALWUDYVECIJXKMMSDWBXCOLK");
    const char tmp_msg_0[] = {46, -6, 107, 106, 96, -94, 46, 121, -79, 95, -9, -90, 1, -109, 38, 108, -10, 84, -23, 53, -88, 119, 81, 57, -59, 124, -38, 54, -94, -33, -6, 71, -109, 22, 124, 108, -115, -85, 32, -64, -19, 75, -22, 72, -3, 80, -13, 40, -64, -100, 41, 95, -78, -6, -20, -58, -1, -65, -125, -119, 44, -69, 42, -111, 42, 17, 111, -72, -69, 45, -96, 60, 117, -11, 54, 21, 113, -102, 91, 49, -113, 7, -40};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.97288821289);
    msg.setSource(25148U);
    msg.setSourceEntity(175U);
    msg.setDestination(36537U);
    msg.setDestinationEntity(202U);
    msg.content_type.assign("HLTMZEVIZSOYMCRUGXHWMCOHIHPFOQVWDEKJFFIXDJEUZRAPZTGRMWLYDSKMUJCEOHZTUWHKCECHIBS");
    const char tmp_msg_0[] = {-86, -84, -104, -67, 84, -52, 100, -40, 21, 53, 104, 104, 29, -33, -83, -8, 67, 33, -72, 9, 76, 103, 96, -128, -45, -125, -78, 86, -46, 122, 105, -25, -92, -68, -25, -39, -6, 45, 11, 45, 31, -52, 1, 39, 120, 77, -123, -28, 18, 103, -94, 59, 70, 84, 17, 96, -128, 101, 61, 121, -64, -78, -102, -96, -90, 41, 13, 36, 7, -2, -117, 25, -121, 2, -19, -87, -74, -116, -40, 64, 84, -101, -117, -30, 20, 45, 116, 3, -81, 6, -11, 75, 82, 10, 76, 77, -78, -57, 31, 103, -48, -37, -3, -3, -105, 32, 4, -99, 120, -66, -102, 98, 4, 113, -45, -15, -25, 53, -82, -124, -44, 111, 0, 124, -78, -91, 41, 75, -17, 70, -28, 124, -120, -36, 96, 58, 15, 8, -84, -127, 104, 42, 67, -99, -49, -104, -106, 41, 37, -128, 55, -29, -119, -1, 47, -74, 77, 54, -110, -107, 62, 46, -33, -77, -48, -24, -103, -90, 126, 59, 73, -4, 112, 122, 54, -54, -92, -124, -7, -61, -85, -36, 2, 0, -100, -52};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.649762290896);
    msg.setSource(17623U);
    msg.setSourceEntity(252U);
    msg.setDestination(31151U);
    msg.setDestinationEntity(198U);
    msg.content_type.assign("SMXBQCDTTTMFNXRCDLPYVRCVZQDEKFGQZONEMFDLMGROAPWOMJVJPHCIXFJJKVCSMUXXDBRKQBVTAZCBXBONBLXFALHYIKQIEDHJEFWNYOVTANPUIRBBPLQKGJYCWQTUYZBAOKFOZOL");
    const char tmp_msg_0[] = {-66, 21, -32, 65, -124, -96, -107, 125, -45, 47, -39, 101, 107, -101, 112, -120, -40, 9, -90, 88, -10, -113, -55, 34, -89, -90, 24, 43, 57, 90, 21, -83, 43, 56, -7, -103, 8, 124, -58, 94, 119, 12, -63, 39, -39, 71, -48, -77};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.133484489874);
    msg.setSource(18146U);
    msg.setSourceEntity(153U);
    msg.setDestination(35103U);
    msg.setDestinationEntity(91U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.72875010475);
    msg.setSource(37594U);
    msg.setSourceEntity(12U);
    msg.setDestination(42891U);
    msg.setDestinationEntity(109U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.159835362917);
    msg.setSource(64482U);
    msg.setSourceEntity(121U);
    msg.setDestination(17631U);
    msg.setDestinationEntity(121U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.494251234043);
    msg.setSource(17232U);
    msg.setSourceEntity(87U);
    msg.setDestination(1711U);
    msg.setDestinationEntity(14U);
    msg.target = 7454U;
    msg.bearing = 0.227198886896;
    msg.elevation = 0.0729601497988;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.343004269551);
    msg.setSource(2653U);
    msg.setSourceEntity(171U);
    msg.setDestination(55908U);
    msg.setDestinationEntity(218U);
    msg.target = 14850U;
    msg.bearing = 0.360316757112;
    msg.elevation = 0.833426644308;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.517114102493);
    msg.setSource(42867U);
    msg.setSourceEntity(0U);
    msg.setDestination(65063U);
    msg.setDestinationEntity(250U);
    msg.target = 6283U;
    msg.bearing = 0.57323317461;
    msg.elevation = 0.732470576216;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.0594377009208);
    msg.setSource(28317U);
    msg.setSourceEntity(100U);
    msg.setDestination(14675U);
    msg.setDestinationEntity(197U);
    msg.target = 15326U;
    msg.x = 0.207426660263;
    msg.y = 0.563585310531;
    msg.z = 0.584311042105;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.743045601428);
    msg.setSource(26083U);
    msg.setSourceEntity(211U);
    msg.setDestination(61291U);
    msg.setDestinationEntity(22U);
    msg.target = 56608U;
    msg.x = 0.348641505993;
    msg.y = 0.754449644641;
    msg.z = 0.0263170412519;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.160138902922);
    msg.setSource(10639U);
    msg.setSourceEntity(156U);
    msg.setDestination(58047U);
    msg.setDestinationEntity(23U);
    msg.target = 38506U;
    msg.x = 0.600240679695;
    msg.y = 0.397778047949;
    msg.z = 0.346748089467;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.852687951369);
    msg.setSource(63298U);
    msg.setSourceEntity(59U);
    msg.setDestination(38424U);
    msg.setDestinationEntity(247U);
    msg.target = 33564U;
    msg.lat = 0.914090426826;
    msg.lon = 0.0505940048091;
    msg.z_units = 65U;
    msg.z = 0.714201530481;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.876513617923);
    msg.setSource(61379U);
    msg.setSourceEntity(21U);
    msg.setDestination(19604U);
    msg.setDestinationEntity(162U);
    msg.target = 55863U;
    msg.lat = 0.109134839361;
    msg.lon = 0.0339873878288;
    msg.z_units = 45U;
    msg.z = 0.337100627845;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.651631681084);
    msg.setSource(4572U);
    msg.setSourceEntity(103U);
    msg.setDestination(50344U);
    msg.setDestinationEntity(80U);
    msg.target = 6435U;
    msg.lat = 0.332647216128;
    msg.lon = 0.958985441818;
    msg.z_units = 227U;
    msg.z = 0.726666631656;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.497623108671);
    msg.setSource(20901U);
    msg.setSourceEntity(217U);
    msg.setDestination(64039U);
    msg.setDestinationEntity(198U);
    msg.locale.assign("CKHFQVUTKQGVLLCMXNZCMHGBWSSRJCUVWSILATGHRKNXTYYKNEQPGXMFQAAGVAJKTRFUAJPLEGQBYEOEAORWJICMZDSYOABE");
    const char tmp_msg_0[] = {40, 114, 12, 35, -33, -39, 119, 11, -46, 115, -58, -110, -35, 17, 102, 14, 37, -4, -88, 110, -32, 72, 43, -6, -59, -62, -30, -25, 52, -3, -23, -68, 44, 0, 99, 24, 72, -40, 6, -28, 121, 113, -87, -23, -6, 4, -85, 84, 76, 49, 125, -94, -27, 97, -4, 51, -123, 40, -96, -64, -117, 121, 119, 48, -64, 56, 15, -105, 39, -105, 49, 55, -7, -26, 118, -97, 110, -83, 87, 0, 49, 118, 99, -95, 52, 36, -49, 107, 16, 112, 52, -21, -77, 35, 111, -22, -79, -46, 109, 7, -125, 107, 35, -20, -95, -108, 116, -57, -92, 125, -12, 116, -106, -108, 22, -37, -95, -9, 36, -22, 117, -31, 54, -87, 117, -10, -35, -96, -86, -39, -29, 45, -124, 77, -31, 70, -19, -68, 18, -35, -86, -1, -3, -47, -15, -115, 75, 89, 68, -97, 9, -120, 89, -54, 8, 20, -31, -66, -22, -128, -38, -45, -128, 118, -78, -63, 76, 37, -27, 83, -18, 91, 27, -113, 42, -107, -67, 122, -95, 29, 73, 0, 83, 110, -18, 34, -35, 36, 60, 47, -77, -102, 100, 66, -48, 58, -39, 30, -38, 125, -59, -45, -25, 112, -120, 42, -10, -128, 68, -112, -110, -119, 25, 4, -122, 82, 39, -1, -89, 77, 83, -9, 54, 49, 107, 110, 44, 19, -49, 83, 86, -64, -27, -17, 51, 0, 10, 17, 0, -112, -11, -94, -98, 52};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.290210302902);
    msg.setSource(45189U);
    msg.setSourceEntity(160U);
    msg.setDestination(38554U);
    msg.setDestinationEntity(81U);
    msg.locale.assign("LCWLYWONPYMYXJWAYIJQSIFWVXPHVKCNDKKXEOGWYUPJRRTOHRXNJSIYVSHZKEKTPQBVAHVQHENUBSUBPJBJHDLYZUPGOBXIUIZGIUMRSMEEZAOZPGMUICFBQMMOSGFULRHHFORZTNYOCYQWIFYQVTELFUNDZVBRGGFNZNHC");
    const char tmp_msg_0[] = {41, -75, -119, 111, 92, -70, -83, -29, -4, 126, -10, -11, -104, 92, -11, -104, -26, 57, -6, -120, 8, 81, -19, 108, -47, 31, -94, -59, 49, 17, -120, 44, 69, 126, 119, -10, -111, 70, -23, 33, 1, 85, -30, 37, -35, 60, 103, 94, 30, 111, -115, 87, -127, 9, -10, 75, -100, 1, 96, 119, 56, 92, 40, 92, -111, 67, -40, -49, -107, 0, -54, 21, -12, 34, -29, -82, 74, 59, 53, 104, -20, 68, -66, 90, -62, 125, -87, 65, 24, -59, 60, -120, 41, 5, -25, -92, 68, -13, -88, -3, 74, 8, -78, 91, 75, -27, 21, 53, 99, 79, 21, -119, -28, 73, -50, 116, 83, -18, 22, -96, -30, -101, -34, 38, -95, -36, 74, -89, -94, -70, -99, 9, 81, 57, 77, 118, 61, -59, -27, -54, -28, -60, 98, -78, 35, -4, -7, 54, -95, 105, -59, -67, 11, 103, 28, 9, 31, -55, -87, -105, 52, 91, 96, 121, -99, 56, 14, 118, 106, 21, -112, 14, -121, 92, 77, 46, 84, -98, 11, 42, -7, -101, 84, -17, 9, 22, 78, 4, -34, -70, 89, 70, 94, -96, -111, -81, 26, 94, -82, 11, 94, 125, -36, -73, -39, 78, -38, -13, 53, 26, 12, -3, -77, 49, -31, -110, -78, -98, -78, 1, 83, -29, -82, -29, 51, -31, -60, 31, -54, -34, -25, -16, -82, 70, -34, -53, 126};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.572369150506);
    msg.setSource(17511U);
    msg.setSourceEntity(149U);
    msg.setDestination(52505U);
    msg.setDestinationEntity(244U);
    msg.locale.assign("RPLRMRDCPSQBSKHHQERHGWAHQDOTFYMGELZCLGCGRMHDRIVBFXVPBPPSVGQOVMWILDMYMIO");
    const char tmp_msg_0[] = {-51, -128, -70, 104, -45, -57, -126, 56, -20, -88, 46, -8, 11, -91, -69, -95, -29, 79, -111, 43, 62, -4, -67, 18, 86, -124, 99, -35, -95, -81, 38, -93, -81, -2, 105, -65, -19, -12, 55, 86, 71, 53, 112, 125, -89, -74, -61, -24, 92, -76, -75, 73, -17, -70, 39, 104, -10, -18, 22, 49, 76, -40, 125, 26, -46, -115, 94, -118, -48, 25, 81, 87, -72, -41, -92, -47, -94, 65, 107, 60, 10, -91, 34, 78, -74, 122, 58, 11, 102, -62, -65, 15, 87, -39, 63, -29, 90, -83, 45, -57, 28, -2, -38, 76, 69, -96, 76, 122, -91, -18, -124, -47, 98, 111, 38, 63, -126, -97, -127, -15, 85, 23, -15, -2, 114, 125, -120, -8, -23, -101, -62, -70, 86, -71, -101, 50, -5, -110, 100, 27, -53, 46, 41, -17, -20, 26, 20, 84, -88, -105, -18, -114, -101, -100, -69, 64, -75, -9, 108, -70, 35, 110, -28, -87, 14, -85, -79, -57, -7, 35, -97, 73, -17, -9, 8, 48, 77, -109, -16, -51, -127, 16, -56, 44, 86, 33, -36, -29, 63, -88, -92, -74, -28, 75, -47, -110, 34, 0, 122, -95, 86, 44, 21, 21, -86, 16, -122, -72, 78, 20, -3, 79, 2, -26, -105, -40, 65, -43, -32, -81, -72, 109, 94, -63, 4, -104, -57, 99, -109};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.0128430570022);
    msg.setSource(24218U);
    msg.setSourceEntity(239U);
    msg.setDestination(38766U);
    msg.setDestinationEntity(25U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.514542617753);
    msg.setSource(18245U);
    msg.setSourceEntity(165U);
    msg.setDestination(37567U);
    msg.setDestinationEntity(130U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.691216433176);
    msg.setSource(63276U);
    msg.setSourceEntity(193U);
    msg.setDestination(59173U);
    msg.setDestinationEntity(137U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ThermalCamControl msg;
    msg.setTimeStamp(0.876801706478);
    msg.setSource(47389U);
    msg.setSourceEntity(148U);
    msg.setDestination(2574U);
    msg.setDestinationEntity(15U);
    msg.processcode = 97U;
    msg.status = 229U;
    msg.function = 236U;
    msg.bytecount = 45756U;
    const char tmp_msg_0[] = {79, 62, -101, 13, -72, -27, -46, 31, 65, 56, 82, -19, 69, -103, 65, 107, -26, -111, -60, 10, 44, 112, 7, -12, 12, 34, 80, 61, 42, 28, 5, -92, 85, 126, -36, -68, 42, 98, -102, -119, 21, -97, 122, -41, 69, 66, 107, -43, 14, -108, -29, -20, 21, 39, -102, -111, -73, -104, -117, 25, -117, 111, -54, -40, 94, -46, 8, -40, -100, -115, -114, -57, -43, -54, -99, 113, -12, 7, -88, 13, -58, 18, -72, 4, -70, 4, -46, 44, 120, -112, 68, -18, 39, -107, 55, -20, 40, 32, -37, -5, 122, 92, -38, 61, -65, -95, -21, 62, 78, -56, -53, 120, 61, 27, -6, -51, -57, -16, 23, -59, 18, 55, -58, 27, 74, 20, -34, 18, -95, 104, 117, 22, 101, 89, 11, 20, 65, -21, 65, 50, 75, -102, 90, 93, -2, -7, 44, -26, 12, -46, -54, 103, -21, -97, 33, -9, 54, -48, -51, -1, -11, -93, -34, 28, -46, 5, -93, 43, -89, -87, -95, -5, -113, -24, 35, -103, 115, 26, -71, 21, 113, 25, -57, 87, 78, -122, -94, -20, 78, -122, 58, 122};
    msg.args.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ThermalCamControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ThermalCamControl msg;
    msg.setTimeStamp(0.866859890504);
    msg.setSource(13952U);
    msg.setSourceEntity(224U);
    msg.setDestination(32988U);
    msg.setDestinationEntity(143U);
    msg.processcode = 181U;
    msg.status = 195U;
    msg.function = 143U;
    msg.bytecount = 47110U;
    const char tmp_msg_0[] = {104, 120, -62, 100, -3, 54, 116, -61, -19, -72, 62, -98, 13, -94, 38, 66, -96, -71, -59, 26, -31, 121, 15, -111, 66, -81, 126, -69, -109, -40, 44, 23, -77, -36, -3, 44, 73, -97, -43, 49, -19, 73, -86, -112, -80, 9, 42, -60, -42, 106, 39, 32, 3, 125, 123, 2, -6, 12, 45, 92, 15, -11, 114, 104, 79, 49, -118, 9, 32, 18, 109, 17, 23, -83, -102, 7, 92, 101, -88, 65, -86, 17, 46, 106, -124, 39, -75, -99, 113, -127, 84, 104, 122, 22, -65, -100, 1, 56, -86, -48, 9, -27, 100, 14, -58, -87, -25, 117, -111, -116, -80, -27, 100, 48, 21, -68, -25, 126, -27, 87, 100, -116, -2, 23, 96, 54, -88, -11, 61, -7, -82, 83, 71, 41, -47, 117, -43, 103, -123, -18, 26, -9, -13, -36, -54, 91, -60, 120, 77, -60, -99, -8, 90, 118, 52, 74, 106, -29, -39, 48, 97, -66, 96, -67, -43, -78, -99, -124, 72, 120, 13, -81, -77, -11, -6, 9, -114, -14, -110, -42, 38, -25, -92, -61, 26, 66, 64, 7, 37, -1, 3, -24, 66, -47, 20, 81, -98, 40, -105, 52, 33, 37, -47, 24, 67, 9, 117, 80, 25, 76, -65, 124, -32, -91, 115, 111, -2, 114, 123, -126, -94, -81, -124, 0, 126};
    msg.args.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ThermalCamControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ThermalCamControl msg;
    msg.setTimeStamp(0.0271719792674);
    msg.setSource(49022U);
    msg.setSourceEntity(41U);
    msg.setDestination(19848U);
    msg.setDestinationEntity(40U);
    msg.processcode = 34U;
    msg.status = 53U;
    msg.function = 249U;
    msg.bytecount = 8487U;
    const char tmp_msg_0[] = {-101, -50, 93, 63, -91, 16, 72, -117, -64, 46, -47, 13, -102, -79, -81, 39, 85, 69, -25, 33, 4, -74, -30, -119, -100, -8, -102, -89, 47, -104, 16, -118, -7, -27, -27, -18, -40, 45, 74, -114, 73, -47, 89, 17, -113, -11, -95, -38, 24, -57, 107, -107, 119, -109, 51, -73, -53, -12, 81, -29, -33, 19, 55, 102, -123, 7, 64, 114, 64, 64, 57, 78, 93, 106, 46, 67, -111, 48, -67, -19, 79, 77, -88, -39, -17, 32, -48, 102, 80, 18, -120, 39, 14, -104, -75, 7, 77, -3, -44, 60, 106, -80, -17, 56, -106, 2, 4, -46, 94, -49, 119, -19, -107, -122, -78, 21, -106, 25, -81, 107, 113, 16, 15, 106, -63, 110, -35, 15, 28, -110, -128, -79, 82, -111, 32, 66, -78, -8, -68, 12, 96, -39, 9, -80, -51, -28, -117, 60, 83, -51, 74, -82, -65, -4, -15, 87, 63, 28, 117, 6, -122, -28, -53, 113, 84, -73, -55, -99, 44, 16, 83, 0, 124, -47, 118, 86, 73, -110, 22, 80, 46, 94, -54, -20, -98, 72, -22, 100, -66, 38, -31, -27, 102, -17, -48, 4, 15, -71, 61, -59, -8, 27, -61, 104, -28, -20, -36, -86, -33, -32, -15, 119, -10, 57, -99, -113, -92, 119, 122, -101, 44, -38, 45, -114, -77, 99, 14, -63, -65, -56, -28};
    msg.args.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ThermalCamControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
